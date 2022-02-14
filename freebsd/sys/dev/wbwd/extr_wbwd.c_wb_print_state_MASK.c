
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wb_softc {int reg_timeout; int reg_2; int reg_1; int csr_reg; int ctl_reg; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,char const*,char*,char*,char*,int,int,char*,int,char*,int ,int,int ,int) ;

__attribute__((used)) static void
FUNC_1(struct wb_softc *VAR_2, const char *VAR_3)
{

 FUNC_0(VAR_2->dev, "%s%sWatchdog %sabled. %s"
     "Scaling by %ds, timer at %d (%s=%ds%s). "
     "CR%02X 0x%02x CR%02X 0x%02x\n",
     (VAR_3 != ((void*)0)) ? VAR_3 : "", (VAR_3 != ((void*)0)) ? ": " : "",
     (VAR_2->reg_timeout > 0x00) ? "en" : "dis",
     (VAR_2->reg_2 & VAR_1) ? "Watchdog fired. " : "",
     (VAR_2->reg_1 & VAR_0) ? 60 : 1,
     VAR_2->reg_timeout,
     (VAR_2->reg_timeout > 0x00) ? "<" : "",
     VAR_2->reg_timeout * ((VAR_2->reg_1 & VAR_0) ? 60 : 1),
     (VAR_2->reg_timeout > 0x00) ? " left" : "",
     VAR_2->ctl_reg, VAR_2->reg_1, VAR_2->csr_reg, VAR_2->reg_2);
}
