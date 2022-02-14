
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct audit_rule {int flags; int field_count; int * mask; int * fields; int * values; int action; } ;
struct audit_krule {int flags; int listnr; int field_count; int vers_ops; int * mask; TYPE_1__* fields; int action; } ;
struct TYPE_2__ {size_t op; int type; int val; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 struct audit_rule* FUNC_0 (int,int ) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static struct audit_rule *FUNC_2(struct audit_krule *VAR_5)
{
 struct audit_rule *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_0(sizeof(*VAR_6), VAR_3);
 if (FUNC_1(!VAR_6))
  return ((void*)0);

 VAR_6->flags = VAR_5->flags | VAR_5->listnr;
 VAR_6->action = VAR_5->action;
 VAR_6->field_count = VAR_5->field_count;
 for (VAR_7 = 0; VAR_7 < VAR_6->field_count; VAR_7++) {
  VAR_6->values[VAR_7] = VAR_5->fields[VAR_7].val;
  VAR_6->fields[VAR_7] = VAR_5->fields[VAR_7].type;

  if (VAR_5->vers_ops == 1) {
   if (VAR_5->fields[VAR_7].op == VAR_2)
    VAR_6->fields[VAR_7] |= VAR_1;
  } else {
   VAR_6->fields[VAR_7] |= VAR_4[VAR_5->fields[VAR_7].op];
  }
 }
 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) VAR_6->mask[VAR_7] = VAR_5->mask[VAR_7];

 return VAR_6;
}
