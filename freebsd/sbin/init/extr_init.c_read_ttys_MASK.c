
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct ttyent {int dummy; } ;
typedef int state_func_t ;
struct TYPE_6__ {struct TYPE_6__* se_next; } ;
typedef TYPE_1__ session_t ;


 int FUNC_0 () ;
 int FUNC_1 (TYPE_1__*) ;
 struct ttyent* FUNC_2 () ;
 int VAR_0 ;
 TYPE_1__* FUNC_3 (TYPE_1__*,struct ttyent*) ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_4 () ;

__attribute__((used)) static state_func_t
FUNC_5(void)
{
 session_t *VAR_3, *VAR_4;
 struct ttyent *VAR_5;





 for (VAR_3 = VAR_1; VAR_3; VAR_3 = VAR_4) {
  VAR_4 = VAR_3->se_next;
  FUNC_1(VAR_3);
 }
 VAR_1 = 0;
 if (FUNC_4())
  return (state_func_t) VAR_2;





 while ((VAR_5 = FUNC_2()) != ((void*)0))
  if ((VAR_4 = FUNC_3(VAR_3, VAR_5)) != ((void*)0))
   VAR_3 = VAR_4;

 FUNC_0();

 return (state_func_t) VAR_0;
}
