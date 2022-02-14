
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket_info {int type; } ;
struct sockaddr_un {int dummy; } ;
struct sockaddr {int dummy; } ;
typedef scalar_t__ socklen_t ;




 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (struct sockaddr_un const*,struct sockaddr*,scalar_t__*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_1(const struct socket_info *VAR_3,
        const struct sockaddr_un *VAR_4,
        socklen_t VAR_5,
        int VAR_6,
        struct sockaddr *VAR_7,
        socklen_t *VAR_8)
{
 if (VAR_7 == ((void*)0) || VAR_8 == ((void*)0))
  return 0;

 if (VAR_5 == 0) {
  *VAR_8 = 0;
  return 0;
 }

 switch (VAR_6) {
 case 131:



  switch (VAR_3->type) {
  case 128:
  case 129:
   break;
  default:
   VAR_2 = VAR_1;
   return -1;
  }
  return FUNC_0(VAR_4, VAR_7, VAR_8);
 default:
  break;
 }

 VAR_2 = VAR_0;
 return -1;
}
