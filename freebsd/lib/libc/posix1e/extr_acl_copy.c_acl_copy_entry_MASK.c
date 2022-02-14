
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* acl_entry_t ;
struct TYPE_7__ {int ae_flags; int ae_entry_type; int ae_perm; int ae_id; int ae_tag; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int VAR_1 ;

int
FUNC_3(acl_entry_t VAR_2, acl_entry_t VAR_3)
{

 if (VAR_3 == ((void*)0) || VAR_2 == ((void*)0) || VAR_3 == VAR_2) {
  VAR_1 = VAR_0;
  return (-1);
 }




 if (!FUNC_2(VAR_2, FUNC_0(VAR_3))) {
  VAR_1 = VAR_0;
  return (-1);
 }

 FUNC_1(VAR_2, FUNC_0(VAR_3));

 VAR_2->ae_tag = VAR_3->ae_tag;
 VAR_2->ae_id = VAR_3->ae_id;
 VAR_2->ae_perm = VAR_3->ae_perm;
 VAR_2->ae_entry_type = VAR_3->ae_entry_type;
 VAR_2->ae_flags = VAR_3->ae_flags;

 return (0);
}
