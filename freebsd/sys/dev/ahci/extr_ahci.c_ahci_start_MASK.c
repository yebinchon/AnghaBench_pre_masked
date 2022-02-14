
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct ahci_channel {int chcaps; int fbs_enabled; scalar_t__ pm_present; int r_mem; int (* start ) (struct ahci_channel*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (struct ahci_channel*) ;

__attribute__((used)) static void
FUNC_3(struct ahci_channel *VAR_8, int VAR_9)
{
 u_int32_t VAR_10;


 if (VAR_8->start)
  VAR_8->start(VAR_8);


 FUNC_1(VAR_8->r_mem, VAR_7, 0xFFFFFFFF);

 FUNC_1(VAR_8->r_mem, VAR_6, 0xFFFFFFFF);

 if (VAR_8->chcaps & VAR_1) {
  VAR_8->fbs_enabled = (VAR_9 && VAR_8->pm_present) ? 1 : 0;
  FUNC_1(VAR_8->r_mem, VAR_4,
      VAR_8->fbs_enabled ? VAR_5 : 0);
 }

 VAR_10 = FUNC_0(VAR_8->r_mem, VAR_0);
 VAR_10 &= ~VAR_2;
 FUNC_1(VAR_8->r_mem, VAR_0, VAR_10 | VAR_3 |
     (VAR_8->pm_present ? VAR_2 : 0));
}
