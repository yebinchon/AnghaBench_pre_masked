
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct twa_softc {int sim_lock; scalar_t__ sim; scalar_t__ path; } ;
typedef int TW_VOID ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,struct twa_softc*,char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (scalar_t__) ;

TW_VOID
FUNC_7(struct twa_softc *VAR_1)
{
 FUNC_4(3, VAR_1, "entered");

 FUNC_3(VAR_1->sim_lock);

 if (VAR_1->path)
  FUNC_6(VAR_1->path);
 if (VAR_1->sim) {
  FUNC_5(FUNC_1(VAR_1->sim));

  FUNC_0(VAR_1->sim, VAR_0);
 }

 FUNC_2(VAR_1->sim_lock);
}
