
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmap {int dummy; } ;
typedef int register_t ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 unsigned int FUNC_3 () ;
 int FUNC_4 (int) ;
 int FUNC_5 (unsigned int) ;
 unsigned int VAR_1 ;
 int FUNC_6 (struct pmap*) ;
 int FUNC_7 (unsigned int) ;
 int FUNC_8 () ;

void
FUNC_9(struct pmap *VAR_2)
{
 register_t VAR_3;
 register_t VAR_4;
 unsigned VAR_5;

 VAR_4 = FUNC_0();
 VAR_3 = FUNC_2() & VAR_0;

 for (VAR_5 = FUNC_3(); VAR_5 < VAR_1; VAR_5++) {
  register_t VAR_6;

  FUNC_5(VAR_5);
  FUNC_8();

  VAR_6 = FUNC_2() & VAR_0;
  if (VAR_2 == ((void*)0)) {



   if (VAR_6 == 0)
    continue;
  } else {



   if (VAR_6 != FUNC_6(VAR_2))
    continue;
  }
  FUNC_7(VAR_5);
 }

 FUNC_4(VAR_3);
 FUNC_1(VAR_4);
}
