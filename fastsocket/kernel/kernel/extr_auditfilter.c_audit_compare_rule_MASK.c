
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct audit_krule {scalar_t__ flags; scalar_t__ listnr; scalar_t__ action; int field_count; scalar_t__* mask; TYPE_1__* fields; int filterkey; int tree; int watch; } ;
struct TYPE_2__ {int type; scalar_t__ op; int val; int lsm_str; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct audit_krule *VAR_1, struct audit_krule *VAR_2)
{
 int VAR_3;

 if (VAR_1->flags != VAR_2->flags ||
     VAR_1->listnr != VAR_2->listnr ||
     VAR_1->action != VAR_2->action ||
     VAR_1->field_count != VAR_2->field_count)
  return 1;

 for (VAR_3 = 0; VAR_3 < VAR_1->field_count; VAR_3++) {
  if (VAR_1->fields[VAR_3].type != VAR_2->fields[VAR_3].type ||
      VAR_1->fields[VAR_3].op != VAR_2->fields[VAR_3].op)
   return 1;

  switch(VAR_1->fields[VAR_3].type) {
  case 129:
  case 132:
  case 130:
  case 131:
  case 133:
  case 134:
  case 136:
  case 135:
  case 137:
  case 138:
   if (FUNC_2(VAR_1->fields[VAR_3].lsm_str, VAR_2->fields[VAR_3].lsm_str))
    return 1;
   break;
  case 128:
   if (FUNC_2(FUNC_1(VAR_1->watch),
       FUNC_1(VAR_2->watch)))
    return 1;
   break;
  case 140:
   if (FUNC_2(FUNC_0(VAR_1->tree),
       FUNC_0(VAR_2->tree)))
    return 1;
   break;
  case 139:

   if (FUNC_2(VAR_1->filterkey, VAR_2->filterkey))
    return 1;
   break;
  default:
   if (VAR_1->fields[VAR_3].val != VAR_2->fields[VAR_3].val)
    return 1;
  }
 }

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  if (VAR_1->mask[VAR_3] != VAR_2->mask[VAR_3])
   return 1;

 return 0;
}
