
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int acl_entry_type_t ;
typedef TYPE_1__* acl_entry_t ;
struct TYPE_4__ {int ae_entry_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int VAR_2 ;

int
FUNC_1(acl_entry_t VAR_3, acl_entry_type_t *VAR_4)
{

 if (VAR_3 == ((void*)0) || VAR_4 == ((void*)0)) {
  VAR_2 = VAR_1;
  return (-1);
 }

 if (!FUNC_0(VAR_3, VAR_0)) {
  VAR_2 = VAR_1;
  return (-1);
 }

 *VAR_4 = VAR_3->ae_entry_type;

 return (0);
}
