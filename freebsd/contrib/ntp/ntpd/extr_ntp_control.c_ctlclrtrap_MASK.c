
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct interface {int dummy; } ;
struct ctl_trap {int tr_flags; } ;
typedef int sockaddr_u ;


 int VAR_0 ;
 int VAR_1 ;
 struct ctl_trap* FUNC_0 (int *,struct interface*) ;
 int VAR_2 ;

int
FUNC_1(
 sockaddr_u *VAR_3,
 struct interface *VAR_4,
 int VAR_5
 )
{
 register struct ctl_trap *VAR_6;

 if ((VAR_6 = FUNC_0(VAR_3, VAR_4)) == ((void*)0))
  return (0);

 if (VAR_6->tr_flags & VAR_0
     && VAR_5 != VAR_1)
  return (0);

 VAR_6->tr_flags = 0;
 VAR_2--;
 return (1);
}
