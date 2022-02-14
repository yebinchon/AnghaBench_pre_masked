
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ rtx ;
struct TYPE_2__ {unsigned int regno_to_find; void* retval; } ;
typedef TYPE_1__ find_regno_partial_param ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 unsigned int FUNC_1 (void*) ;
 int FUNC_2 (void*) ;



 void* FUNC_3 (scalar_t__) ;
 void* FUNC_4 (scalar_t__,int ) ;


__attribute__((used)) static int
FUNC_5 (rtx *VAR_1, void *VAR_2)
{
  find_regno_partial_param *VAR_3 = (find_regno_partial_param *)VAR_2;
  unsigned VAR_4 = VAR_3->regno_to_find;
  VAR_3->retval = VAR_0;

  if (*VAR_1 == VAR_0)
    return 0;

  switch (FUNC_0 (*VAR_1))
    {
    case 128:
    case 131:
    case 130:
      if (FUNC_2 (FUNC_4 (*VAR_1, 0)) && FUNC_1 (FUNC_4 (*VAR_1, 0)) == VAR_4)
 {
   VAR_3->retval = FUNC_4 (*VAR_1, 0);
   return 1;
 }
      break;

    case 129:
      if (FUNC_2 (FUNC_3 (*VAR_1))
   && FUNC_1 (FUNC_3 (*VAR_1)) == VAR_4)
 {
   VAR_3->retval = FUNC_3 (*VAR_1);
   return 1;
 }
      break;

    default:
      break;
    }

  return 0;
}
