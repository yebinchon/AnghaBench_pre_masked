
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct interface {int dummy; } ;
struct ctl_trap {int tr_flags; struct interface* tr_localaddr; int tr_addr; } ;
typedef int sockaddr_u ;


 scalar_t__ FUNC_0 (int *,int *) ;
 size_t FUNC_1 (struct ctl_trap*) ;
 int VAR_0 ;
 struct ctl_trap* VAR_1 ;

__attribute__((used)) static struct ctl_trap *
FUNC_2(
 sockaddr_u *VAR_2,
 struct interface *VAR_3
 )
{
 size_t VAR_4;

 for (VAR_4 = 0; VAR_4 < FUNC_1(VAR_1); VAR_4++)
  if ((VAR_1[VAR_4].tr_flags & VAR_0)
      && FUNC_0(VAR_2, &VAR_1[VAR_4].tr_addr)
      && (VAR_3 == VAR_1[VAR_4].tr_localaddr))
   return &VAR_1[VAR_4];

 return ((void*)0);
}
