
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct audit_krule {int field_count; struct audit_field* filterkey; struct audit_field* fields; scalar_t__ watch; } ;
struct audit_field {int lsm_rule; struct audit_field* lsm_str; struct audit_krule rule; } ;
struct audit_entry {int lsm_rule; struct audit_entry* lsm_str; struct audit_krule rule; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct audit_field*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static inline void FUNC_3(struct audit_entry *VAR_0)
{
 int VAR_1;
 struct audit_krule *VAR_2 = &VAR_0->rule;

 if (VAR_2->watch)
  FUNC_0(VAR_2->watch);
 if (VAR_2->fields)
  for (VAR_1 = 0; VAR_1 < VAR_2->field_count; VAR_1++) {
   struct audit_field *VAR_3 = &VAR_2->fields[VAR_1];
   FUNC_1(VAR_3->lsm_str);
   FUNC_2(VAR_3->lsm_rule);
  }
 FUNC_1(VAR_2->fields);
 FUNC_1(VAR_2->filterkey);
 FUNC_1(VAR_0);
}
