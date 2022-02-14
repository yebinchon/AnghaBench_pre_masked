
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {int dummy; } ;
struct acl_list {int tree; } ;
struct acl_addr {int dummy; } ;
typedef int socklen_t ;


 scalar_t__ FUNC_0 (int *,struct sockaddr_storage*,int ) ;

struct acl_addr*
FUNC_1(struct acl_list* VAR_0, struct sockaddr_storage* VAR_1,
        socklen_t VAR_2)
{
 return (struct acl_addr*)FUNC_0(&VAR_0->tree,
  VAR_1, VAR_2);
}
