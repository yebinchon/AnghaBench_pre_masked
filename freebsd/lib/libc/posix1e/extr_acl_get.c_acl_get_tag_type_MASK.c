
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int acl_tag_t ;
typedef TYPE_1__* acl_entry_t ;
struct TYPE_3__ {int ae_tag; } ;


 int VAR_0 ;
 int VAR_1 ;

int
FUNC_0(acl_entry_t VAR_2, acl_tag_t *VAR_3)
{

 if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0)) {
  VAR_1 = VAR_0;
  return (-1);
 }

 *VAR_3 = VAR_2->ae_tag;

 return (0);
}
