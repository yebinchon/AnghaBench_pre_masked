
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {int dummy; } ;
struct sockaddr_in6 {int sin6_addr; int sin6_port; int sin6_family; } ;
struct sockaddr_in {int sin_addr; int sin_port; int sin_family; } ;
typedef int socklen_t ;
typedef int hashvalue_type ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct sockaddr_storage*,int ) ;
 int FUNC_1 (int *,int,int) ;

__attribute__((used)) static hashvalue_type
FUNC_2(struct sockaddr_storage* VAR_2, socklen_t VAR_3,
  int VAR_4)
{
 hashvalue_type VAR_5 = 0xab;

 if(FUNC_0(VAR_2, VAR_3)) {
  struct sockaddr_in6* VAR_6 = (struct sockaddr_in6*)VAR_2;
  VAR_5 = FUNC_1(&VAR_6->sin6_family, sizeof(VAR_6->sin6_family), VAR_5);
  if(VAR_4){
   VAR_5 = FUNC_1(&VAR_6->sin6_port, sizeof(VAR_6->sin6_port), VAR_5);
  }
  VAR_5 = FUNC_1(&VAR_6->sin6_addr, VAR_0, VAR_5);
 } else {
  struct sockaddr_in* VAR_7 = (struct sockaddr_in*)VAR_2;
  VAR_5 = FUNC_1(&VAR_7->sin_family, sizeof(VAR_7->sin_family), VAR_5);
  if(VAR_4){
   VAR_5 = FUNC_1(&VAR_7->sin_port, sizeof(VAR_7->sin_port), VAR_5);
  }
  VAR_5 = FUNC_1(&VAR_7->sin_addr, VAR_1, VAR_5);
 }
 return VAR_5;
}
