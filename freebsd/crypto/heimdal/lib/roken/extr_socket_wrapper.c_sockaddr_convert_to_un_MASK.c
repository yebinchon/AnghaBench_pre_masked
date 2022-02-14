
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket_info {int type; } ;
struct sockaddr_un {int sun_family; } ;
struct sockaddr {int sa_family; } ;
typedef int socklen_t ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int FUNC_0 (struct socket_info*,struct sockaddr const*,struct sockaddr_un*,int*) ;
 int FUNC_1 (struct socket_info*,struct sockaddr const*,struct sockaddr_un*,int*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_2(struct socket_info *VAR_4, const struct sockaddr *VAR_5, socklen_t VAR_6,
      struct sockaddr_un *VAR_7, int VAR_8, int *VAR_9)
{
 if (!VAR_7)
  return 0;

 VAR_7->sun_family = VAR_0;

 switch (VAR_5->sa_family) {
 case 131:



  switch (VAR_4->type) {
  case 128:
  case 129:
   break;
  default:
   VAR_3 = VAR_2;
   return -1;
  }
  if (VAR_8) {
   return FUNC_0(VAR_4, VAR_5, VAR_7, VAR_9);
  } else {
   return FUNC_1(VAR_4, VAR_5, VAR_7, VAR_9);
  }
 default:
  break;
 }

 VAR_3 = VAR_1;
 return -1;
}
