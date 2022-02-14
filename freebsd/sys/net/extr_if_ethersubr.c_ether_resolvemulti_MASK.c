
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_char ;
struct sockaddr_in6 {int sin6_addr; } ;
struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; } ;
struct sockaddr_dl {void* sdl_alen; } ;
struct sockaddr {int sa_family; } ;
struct ifnet {int if_flags; } ;





 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int * FUNC_6 (struct sockaddr_dl*) ;
 struct sockaddr_dl* FUNC_7 (struct ifnet*,struct sockaddr*,int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int
FUNC_9(struct ifnet *VAR_5, struct sockaddr **VAR_6,
 struct sockaddr *VAR_7)
{
 struct sockaddr_dl *VAR_8;






 u_char *VAR_9;

 switch(VAR_7->sa_family) {
 case 128:



  VAR_8 = (struct sockaddr_dl *)VAR_7;
  VAR_9 = FUNC_6(VAR_8);
  if (!FUNC_0(VAR_9))
   return VAR_0;
  *VAR_6 = ((void*)0);
  return 0;
 default:




  return VAR_1;
 }
}
