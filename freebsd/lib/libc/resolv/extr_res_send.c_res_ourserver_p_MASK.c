
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct sockaddr_in6 {int sin6_addr; int sin6_scope_id; int sin6_port; int sin6_family; } ;
struct TYPE_7__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; int sin_port; int sin_family; } ;
struct sockaddr {int sa_family; } ;
typedef TYPE_2__* res_state ;
struct TYPE_9__ {int * ext; } ;
struct TYPE_8__ {int nscount; } ;




 TYPE_5__ FUNC_0 (TYPE_2__* const) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (TYPE_2__* const,int) ;

int
FUNC_4(const res_state VAR_1, const struct sockaddr *VAR_2) {
 const struct sockaddr_in *VAR_3, *VAR_4;
 const struct sockaddr_in6 *VAR_5, *VAR_6;
 int VAR_7;

 switch (VAR_2->sa_family) {
 case 129:
  VAR_3 = (const struct sockaddr_in *)VAR_2;
  for (VAR_7 = 0; VAR_7 < VAR_1->nscount; VAR_7++) {
   VAR_4 = (struct sockaddr_in *)FUNC_3(VAR_1, VAR_7);
   if (VAR_4->sin_family == VAR_3->sin_family &&
       VAR_4->sin_port == VAR_3->sin_port &&
       (VAR_4->sin_addr.s_addr == VAR_0 ||
        VAR_4->sin_addr.s_addr == VAR_3->sin_addr.s_addr))
    return (1);
  }
  break;
 case 128:
  if (FUNC_0(VAR_1).ext == ((void*)0))
   break;
  VAR_5 = (const struct sockaddr_in6 *)VAR_2;
  for (VAR_7 = 0; VAR_7 < VAR_1->nscount; VAR_7++) {
   VAR_6 = (struct sockaddr_in6 *)FUNC_3(VAR_1, VAR_7);
   if (VAR_6->sin6_family == VAR_5->sin6_family &&
       VAR_6->sin6_port == VAR_5->sin6_port &&




       (FUNC_2(&VAR_6->sin6_addr) ||
        FUNC_1(&VAR_6->sin6_addr, &VAR_5->sin6_addr)))
    return (1);
  }
  break;
 default:
  break;
 }
 return (0);
}
