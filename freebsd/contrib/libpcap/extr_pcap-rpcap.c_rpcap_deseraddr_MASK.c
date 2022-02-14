
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {int dummy; } ;
struct sockaddr_in6 {int sin6_port; void* sin6_scope_id; int sin6_addr; void* sin6_flowinfo; int sin6_family; } ;
struct sockaddr_in {int sin_port; int sin_zero; int sin_addr; int sin_family; } ;
struct rpcap_sockaddr_in6 {int scope_id; int addr; int flowinfo; int port; } ;
struct rpcap_sockaddr_in {int addr; int port; } ;
struct rpcap_sockaddr {int family; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int ,int ,int) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,int ,int ,char*) ;

__attribute__((used)) static int
FUNC_6(struct rpcap_sockaddr *VAR_4, struct sockaddr_storage **VAR_5, char *VAR_6)
{

 switch (FUNC_4(VAR_4->family))
 {
 case 130:
 case 132:
 case 131:
  {
  struct rpcap_sockaddr_in *VAR_7;
  struct sockaddr_in *VAR_8;

  (*VAR_5) = (struct sockaddr_storage *) FUNC_0(sizeof(struct sockaddr_in));
  if ((*VAR_5) == ((void*)0))
  {
   FUNC_5(VAR_6, VAR_2,
       VAR_3, "malloc() failed");
   return -1;
  }
  VAR_7 = (struct rpcap_sockaddr_in *) VAR_4;
  VAR_8 = (struct sockaddr_in *) (*VAR_5);
  VAR_8->sin_family = VAR_0;
  VAR_8->sin_port = FUNC_4(VAR_7->port);
  FUNC_1(&VAR_8->sin_addr, &VAR_7->addr, sizeof(VAR_8->sin_addr));
  FUNC_2(VAR_8->sin_zero, 0, sizeof(VAR_8->sin_zero));
  break;
  }
 default:




  *VAR_5 = ((void*)0);
  break;
 }
 return 0;
}
