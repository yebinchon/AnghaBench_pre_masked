
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr_in6 {int sin6_addr; int sin6_scope_id; int sin6_port; } ;
struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; int sin_port; } ;
struct sockaddr {int sa_family; } ;




 int FUNC_0 (int *,int *) ;

__attribute__((used)) static int
FUNC_1(struct sockaddr *VAR_0, struct sockaddr *VAR_1) {
 struct sockaddr_in *VAR_2, *VAR_3;
 struct sockaddr_in6 *VAR_4, *VAR_5;

 if (VAR_0->sa_family != VAR_1->sa_family)
  return 0;
 switch (VAR_0->sa_family) {
 case 129:
  VAR_2 = (struct sockaddr_in *)VAR_0;
  VAR_3 = (struct sockaddr_in *)VAR_1;
  return VAR_2->sin_port == VAR_3->sin_port &&
      VAR_2->sin_addr.s_addr == VAR_3->sin_addr.s_addr;
 case 128:
  VAR_4 = (struct sockaddr_in6 *)VAR_0;
  VAR_5 = (struct sockaddr_in6 *)VAR_1;
  return VAR_4->sin6_port == VAR_5->sin6_port &&



      FUNC_0(&VAR_4->sin6_addr, &VAR_5->sin6_addr);
 default:
  return 0;
 }
}
