
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int * acl_flagset_t ;
typedef TYPE_1__* acl_entry_t ;
struct TYPE_5__ {int ae_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_2 ;

int
FUNC_3(acl_entry_t VAR_3, acl_flagset_t VAR_4)
{

 if (VAR_3 == ((void*)0)) {
  VAR_2 = VAR_1;
  return (-1);
 }

 if (!FUNC_1(VAR_3, VAR_0)) {
  VAR_2 = VAR_1;
  return (-1);
 }

 FUNC_0(VAR_3, VAR_0);

 if (FUNC_2(*VAR_4))
  return (-1);

 VAR_3->ae_flags = *VAR_4;

 return (0);
}
