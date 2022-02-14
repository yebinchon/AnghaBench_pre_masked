
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {int dummy; } ;
struct sockaddr {int dummy; } ;
typedef int socklen_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;


 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (struct sockaddr_storage*,int ) ;
 scalar_t__ FUNC_1 (struct sockaddr_storage*,int ) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;

__attribute__((used)) static int
FUNC_2(struct sockaddr* VAR_9, socklen_t VAR_10)
{


 switch(VAR_7) {

  case 128:


  case 131:


  case 130:


  case 129:

   if(VAR_8 < VAR_5)
    return 0;
  default:
   break;
 }



 if( ((VAR_7 == VAR_4)




  ) && VAR_8 < VAR_6)
  return 0;
 if(VAR_7 == VAR_3 && FUNC_1(
  (struct sockaddr_storage*)VAR_9, VAR_10) &&
  VAR_8 < VAR_6)
  return 0;


 if(VAR_7 == VAR_0 && FUNC_0(
  (struct sockaddr_storage*)VAR_9, VAR_10) &&
  VAR_8 < VAR_6)
  return 0;
 return 1;
}
