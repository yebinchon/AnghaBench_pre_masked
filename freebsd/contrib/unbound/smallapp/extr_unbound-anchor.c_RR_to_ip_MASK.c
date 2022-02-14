
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct sockaddr_in6 {int sin6_addr; void* sin6_port; int sin6_family; } ;
struct sockaddr_in {int sin_addr; void* sin_port; int sin_family; } ;
struct ip_list {void* len; int addr; } ;
typedef void* socklen_t ;
typedef void* in_port_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (struct ip_list*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 (char*) ;
 scalar_t__ VAR_4 ;
 int FUNC_5 (char*,struct ip_list*) ;

__attribute__((used)) static struct ip_list*
FUNC_6(int VAR_5, char* VAR_6, int VAR_7, int VAR_8)
{
 struct ip_list* VAR_9 = (struct ip_list*)FUNC_0(1, sizeof(*VAR_9));
 uint16_t VAR_10 = (uint16_t)VAR_8;
 if(VAR_5 == VAR_2) {
  struct sockaddr_in* VAR_11 = (struct sockaddr_in*)&VAR_9->addr;
  VAR_9->len = (socklen_t)sizeof(*VAR_11);
  VAR_11->sin_family = VAR_0;
  VAR_11->sin_port = (in_port_t)FUNC_2(VAR_10);
  if(VAR_7 != (int)sizeof(VAR_11->sin_addr)) {
   if(VAR_4) FUNC_4("skipped badly formatted A\n");
   FUNC_1(VAR_9);
   return ((void*)0);
  }
  FUNC_3(&VAR_11->sin_addr, VAR_6, sizeof(VAR_11->sin_addr));

 } else if(VAR_5 == VAR_3) {
  struct sockaddr_in6* VAR_12 = (struct sockaddr_in6*)&VAR_9->addr;
  VAR_9->len = (socklen_t)sizeof(*VAR_12);
  VAR_12->sin6_family = VAR_1;
  VAR_12->sin6_port = (in_port_t)FUNC_2(VAR_10);
  if(VAR_7 != (int)sizeof(VAR_12->sin6_addr)) {
   if(VAR_4) FUNC_4("skipped badly formatted AAAA\n");
   FUNC_1(VAR_9);
   return ((void*)0);
  }
  FUNC_3(&VAR_12->sin6_addr, VAR_6, sizeof(VAR_12->sin6_addr));
 } else {
  if(VAR_4) FUNC_4("internal error: bad type in RRtoip\n");
  FUNC_1(VAR_9);
  return ((void*)0);
 }
 FUNC_5("resolved server address", VAR_9);
 return VAR_9;
}
