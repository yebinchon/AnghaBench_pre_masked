
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct val_qstate {int state; } ;
struct module_qstate {struct val_qstate** minfo; int region; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct val_qstate*,int ,int) ;
 scalar_t__ FUNC_2 (int ,int) ;
 struct val_qstate* FUNC_3 (struct module_qstate*,struct val_qstate*) ;

__attribute__((used)) static struct val_qstate*
FUNC_4(struct module_qstate* VAR_1, int VAR_2)
{
 struct val_qstate* VAR_3 = (struct val_qstate*)FUNC_2(
  VAR_1->region, sizeof(*VAR_3));
 FUNC_0(!VAR_1->minfo[VAR_2]);
 if(!VAR_3)
  return ((void*)0);
 FUNC_1(VAR_3, 0, sizeof(*VAR_3));
 VAR_1->minfo[VAR_2] = VAR_3;
 VAR_3->state = VAR_0;
 return FUNC_3(VAR_1, VAR_3);
}
