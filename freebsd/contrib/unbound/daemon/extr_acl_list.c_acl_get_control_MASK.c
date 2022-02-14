
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acl_addr {int control; } ;
typedef enum acl_access { ____Placeholder_acl_access } acl_access ;


 int VAR_0 ;

enum acl_access
FUNC_0(struct acl_addr* VAR_1)
{
 if(VAR_1) return VAR_1->control;
 return VAR_0;
}
