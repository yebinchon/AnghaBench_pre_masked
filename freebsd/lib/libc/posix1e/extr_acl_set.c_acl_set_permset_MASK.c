
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int* acl_permset_t ;
typedef TYPE_1__* acl_entry_t ;
struct TYPE_5__ {int ae_perm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int VAR_4 ;

int
FUNC_2(acl_entry_t VAR_5, acl_permset_t VAR_6)
{

 if (!VAR_5) {
  VAR_4 = VAR_3;
  return (-1);
 }

 if ((*VAR_6 & VAR_2) != *VAR_6) {
  if ((*VAR_6 & VAR_1) != *VAR_6) {
   VAR_4 = VAR_3;
   return (-1);
  }
  if (!FUNC_1(VAR_5, VAR_0)) {
   VAR_4 = VAR_3;
   return (-1);
  }
  FUNC_0(VAR_5, VAR_0);
 }

 VAR_5->ae_perm = *VAR_6;

 return (0);
}
