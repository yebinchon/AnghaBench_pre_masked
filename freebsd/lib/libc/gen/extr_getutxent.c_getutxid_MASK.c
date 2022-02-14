
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct utmpx {int ut_type; int ut_id; } ;
struct futx {int fu_type; int fu_id; } ;





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
  case 130:
  case 129:
  case 131:
   switch (VAR_0->ut_type) {
   case 128:
   case 130:
   case 129:
   case 131:
    if (FUNC_3(VAR_1.fu_id, VAR_0->ut_id,
        FUNC_0(sizeof(VAR_1.fu_id), sizeof(VAR_0->ut_id))) ==
        0)
     goto found;
   }
   break;
  default:
   if (VAR_1.fu_type == VAR_0->ut_type)
    goto found;
   break;
  }
 }

found:
 return (FUNC_1(&VAR_1));
}
