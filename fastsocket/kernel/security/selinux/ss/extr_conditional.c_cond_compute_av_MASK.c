
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_4__ {int data; } ;
struct TYPE_3__ {int specified; } ;
struct avtab_node {TYPE_2__ datum; TYPE_1__ key; } ;
struct avtab_key {int specified; } ;
struct avtab {int dummy; } ;
struct av_decision {int auditallow; int auditdeny; int allowed; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct avtab_node* FUNC_0 (struct avtab*,struct avtab_key*) ;
 struct avtab_node* FUNC_1 (struct avtab_node*,int ) ;

void FUNC_2(struct avtab *VAR_4, struct avtab_key *VAR_5, struct av_decision *VAR_6)
{
 struct avtab_node *VAR_7;

 if (!VAR_4 || !VAR_5 || !VAR_6)
  return;

 for (VAR_7 = FUNC_0(VAR_4, VAR_5); VAR_7;
    VAR_7 = FUNC_1(VAR_7, VAR_5->specified)) {
  if ((u16)(VAR_0|VAR_3) ==
      (VAR_7->key.specified & (VAR_0|VAR_3)))
   VAR_6->allowed |= VAR_7->datum.data;
  if ((u16)(VAR_2|VAR_3) ==
      (VAR_7->key.specified & (VAR_2|VAR_3)))





   VAR_6->auditdeny &= VAR_7->datum.data;
  if ((u16)(VAR_1|VAR_3) ==
      (VAR_7->key.specified & (VAR_1|VAR_3)))
   VAR_6->auditallow |= VAR_7->datum.data;
 }
 return;
}
