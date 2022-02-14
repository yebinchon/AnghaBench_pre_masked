
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {int dummy; } ;
struct sockaddr_in6 {scalar_t__ sin6_family; struct sockaddr_storage sin6_addr; } ;
struct sockaddr_in {scalar_t__ sin_family; struct sockaddr_storage sin_addr; } ;
typedef scalar_t__ socklen_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct sockaddr_storage*,struct sockaddr_storage*,scalar_t__) ;

int
FUNC_2(struct sockaddr_storage* VAR_4, socklen_t VAR_5,
 struct sockaddr_storage* VAR_6, socklen_t VAR_7)
{
 struct sockaddr_in* VAR_8 = (struct sockaddr_in*)VAR_4;
 struct sockaddr_in* VAR_9 = (struct sockaddr_in*)VAR_6;
 struct sockaddr_in6* VAR_10 = (struct sockaddr_in6*)VAR_4;
 struct sockaddr_in6* VAR_11 = (struct sockaddr_in6*)VAR_6;
 if(VAR_5 < VAR_7)
  return -1;
 if(VAR_5 > VAR_7)
  return 1;
 FUNC_0(VAR_5 == VAR_7);
 if( VAR_8->sin_family < VAR_9->sin_family)
  return -1;
 if( VAR_8->sin_family > VAR_9->sin_family)
  return 1;
 FUNC_0( VAR_8->sin_family == VAR_9->sin_family );

 if( VAR_8->sin_family == VAR_0 ) {
  return FUNC_1(&VAR_8->sin_addr, &VAR_9->sin_addr, VAR_3);
 } else if (VAR_10->sin6_family == VAR_1) {
  return FUNC_1(&VAR_10->sin6_addr, &VAR_11->sin6_addr,
   VAR_2);
 } else {

  return FUNC_1(VAR_4, VAR_6, VAR_5);
 }
}
