
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucred {int dummy; } ;
struct socket {int so_cred; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ucred*,int ) ;
 scalar_t__ FUNC_1 (struct ucred*,int ) ;
 int FUNC_2 (struct ucred*,struct socket*) ;
 int FUNC_3 (struct ucred*,int ) ;

int
FUNC_4(struct ucred *VAR_1, struct socket *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_3(VAR_1, VAR_2->so_cred);
 if (VAR_3)
  return (VAR_0);





 if (FUNC_1(VAR_1, VAR_2->so_cred))
  return (VAR_0);
 if (FUNC_0(VAR_1, VAR_2->so_cred))
  return (VAR_0);

 return (0);
}
