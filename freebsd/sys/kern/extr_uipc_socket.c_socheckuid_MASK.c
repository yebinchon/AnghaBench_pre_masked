
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uid_t ;
struct socket {TYPE_1__* so_cred; } ;
struct TYPE_2__ {scalar_t__ cr_uid; } ;


 int VAR_0 ;

int
FUNC_0(struct socket *VAR_1, uid_t VAR_2)
{

 if (VAR_1 == ((void*)0))
  return (VAR_0);
 if (VAR_1->so_cred->cr_uid != VAR_2)
  return (VAR_0);
 return (0);
}
