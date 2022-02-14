
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xaddr {int af; int scope_id; int v6; int v4; } ;
struct sockaddr_in6 {int sin6_scope_id; int sin6_addr; } ;
struct sockaddr_in {int sin_addr; } ;
struct sockaddr {int sa_family; } ;
typedef int socklen_t ;




 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (struct xaddr*,char,int) ;

__attribute__((used)) static int
FUNC_2(struct sockaddr *VAR_0, socklen_t VAR_1, struct xaddr *VAR_2)
{
 struct sockaddr_in *VAR_3 = (struct sockaddr_in *)VAR_0;
 struct sockaddr_in6 *VAR_4 = (struct sockaddr_in6 *)VAR_0;

 FUNC_1(VAR_2, '\0', sizeof(*VAR_2));

 switch (VAR_0->sa_family) {
 case 129:
  if (VAR_1 < (socklen_t)sizeof(*VAR_3))
   return -1;
  VAR_2->af = 129;
  FUNC_0(&VAR_2->v4, &VAR_3->sin_addr, sizeof(VAR_2->v4));
  break;
 case 128:
  if (VAR_1 < (socklen_t)sizeof(*VAR_4))
   return -1;
  VAR_2->af = 128;
  FUNC_0(&VAR_2->v6, &VAR_4->sin6_addr, sizeof(VAR_2->v6));



  break;
 default:
  return -1;
 }

 return 0;
}
