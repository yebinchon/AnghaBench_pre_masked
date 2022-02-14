
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct alq {int aq_flags; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (struct alq*) ;
 int FUNC_3 (struct alq*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (struct alq*) ;
 int FUNC_5 (struct alq*) ;
 int FUNC_6 (struct alq*) ;
 int FUNC_7 (struct alq*) ;

void
FUNC_8(struct alq *VAR_2)
{
 int VAR_3 = 0;

 FUNC_0();
 FUNC_2(VAR_2);





 if (FUNC_4(VAR_2) && !(VAR_2->aq_flags & VAR_1)) {
  if (VAR_2->aq_flags & VAR_0)
   FUNC_5(VAR_2);

  FUNC_1();
  VAR_3 = FUNC_6(VAR_2);
 } else
  FUNC_1();

 FUNC_3(VAR_2);

 if (VAR_3)
  FUNC_7(VAR_2);
}
