
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct audit_krule {int field_count; struct audit_field* fields; } ;
struct audit_field {int type; } ;
int FUNC_0(struct audit_krule *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->field_count; VAR_1++) {
  struct audit_field *VAR_2 = &VAR_0->fields[VAR_1];
  switch (VAR_2->type) {
  case 128:
  case 131:
  case 129:
  case 130:
  case 132:
  case 133:
  case 135:
  case 134:
  case 136:
  case 137:
   return 1;
  }
 }

 return 0;
}
