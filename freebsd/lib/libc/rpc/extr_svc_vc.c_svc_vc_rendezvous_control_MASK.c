
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int ;
struct cf_rendezvous {int maxrec; } ;
typedef int bool_t ;
struct TYPE_3__ {scalar_t__ xp_p1; } ;
typedef TYPE_1__ SVCXPRT ;


 int VAR_0 ;


 int VAR_1 ;

__attribute__((used)) static bool_t
FUNC_0(SVCXPRT *VAR_2, const u_int VAR_3, void *VAR_4)
{
 struct cf_rendezvous *VAR_5;

 VAR_5 = (struct cf_rendezvous *)VAR_2->xp_p1;
 if (VAR_5 == ((void*)0))
  return (VAR_0);
 switch (VAR_3) {
  case 129:
   *(int *)VAR_4 = VAR_5->maxrec;
   break;
  case 128:
   VAR_5->maxrec = *(int *)VAR_4;
   break;
  default:
   return (VAR_0);
 }
 return (VAR_1);
}
