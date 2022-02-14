
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct cf_conn {scalar_t__ strm_stat; int xdrs; } ;
typedef enum xprt_stat { ____Placeholder_xprt_stat } xprt_stat ;
struct TYPE_3__ {scalar_t__ xp_p1; } ;
typedef TYPE_1__ SVCXPRT ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static enum xprt_stat
FUNC_2(SVCXPRT *VAR_3)
{
 struct cf_conn *VAR_4;

 FUNC_0(VAR_3 != ((void*)0));

 VAR_4 = (struct cf_conn *)(VAR_3->xp_p1);

 if (VAR_4->strm_stat == VAR_0)
  return (VAR_0);
 if (! FUNC_1(&(VAR_4->xdrs)))
  return (VAR_2);
 return (VAR_1);
}
