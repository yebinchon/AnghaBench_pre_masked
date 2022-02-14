
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct utmpx {int ut_line; } ;
struct futx {int fu_type; int fu_line; } ;



 int FUNC_0 (int,int) ;

 struct utmpx* FUNC_1 (struct futx*) ;
 scalar_t__ FUNC_2 (struct futx*) ;
 int FUNC_3 (int ,int ,int ) ;

struct utmpx *
FUNC_4(const struct utmpx *VAR_0)
{
 struct futx VAR_1;

 for (;;) {
  if (FUNC_2(&VAR_1) != 0)
   return (((void*)0));

  switch (VAR_1.fu_type) {
  case 128:
  case 129:
   if (FUNC_3(VAR_1.fu_line, VAR_0->ut_line,
       FUNC_0(sizeof(VAR_1.fu_line), sizeof(VAR_0->ut_line))) ==
       0)
    goto found;
   break;
  }
 }

found:
 return (FUNC_1(&VAR_1));
}
