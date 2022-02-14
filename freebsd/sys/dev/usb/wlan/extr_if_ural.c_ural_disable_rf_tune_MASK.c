
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ural_softc {scalar_t__ rf_rev; int* rf_regs; } ;


 int FUNC_0 (int,char*) ;
 size_t VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct ural_softc*,size_t,int) ;

__attribute__((used)) static void
FUNC_2(struct ural_softc *VAR_5)
{
 uint32_t VAR_6;

 if (VAR_5->rf_rev != VAR_4) {
  VAR_6 = VAR_5->rf_regs[VAR_0] & ~VAR_1;
  FUNC_1(VAR_5, VAR_0, VAR_6);
 }

 VAR_6 = VAR_5->rf_regs[VAR_2] & ~VAR_3;
 FUNC_1(VAR_5, VAR_2, VAR_6);

 FUNC_0(2, "disabling RF autotune\n");
}
