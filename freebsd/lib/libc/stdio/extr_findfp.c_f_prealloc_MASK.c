
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct glue {struct glue* next; scalar_t__ niobs; } ;


 int VAR_0 ;
 int FUNC_0 (struct glue*,struct glue*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 struct glue VAR_1 ;
 int FUNC_3 () ;
 struct glue* VAR_2 ;
 struct glue* FUNC_4 (int) ;

void
FUNC_5(void)
{
 struct glue *VAR_3;
 int VAR_4;

 VAR_4 = FUNC_3() - VAR_0 + 20;





 for (VAR_3 = &VAR_1; (VAR_4 -= VAR_3->niobs) > 0 && VAR_3->next; VAR_3 = VAR_3->next)
            ;
 if ((VAR_4 > 0) && ((VAR_3 = FUNC_4(VAR_4)) != ((void*)0))) {
  FUNC_1();
  FUNC_0(VAR_2->next, VAR_3);
  VAR_2 = VAR_3;
  FUNC_2();
 }
}
