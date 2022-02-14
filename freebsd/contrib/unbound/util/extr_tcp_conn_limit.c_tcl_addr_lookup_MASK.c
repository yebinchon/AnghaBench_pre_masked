
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcl_list {int tree; } ;
struct tcl_addr {int dummy; } ;
struct sockaddr_storage {int dummy; } ;
typedef int socklen_t ;


 scalar_t__ FUNC_0 (int *,struct sockaddr_storage*,int ) ;

struct tcl_addr*
FUNC_1(struct tcl_list* VAR_0, struct sockaddr_storage* VAR_1,
        socklen_t VAR_2)
{
 return (struct tcl_addr*)FUNC_0(&VAR_0->tree,
  VAR_1, VAR_2);
}
