
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rrset_parse {scalar_t__ type; scalar_t__ section; struct rrset_parse* rrset_all_next; } ;
struct msg_parse {struct rrset_parse* rrset_first; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int
FUNC_0(struct msg_parse* VAR_2)
{
 struct rrset_parse* VAR_3;
 for(VAR_3 = VAR_2->rrset_first; VAR_3; VAR_3 = VAR_3->rrset_all_next)
  if(VAR_3->type == VAR_0 &&
   VAR_3->section == VAR_1)
   return 1;
 return 0;
}
