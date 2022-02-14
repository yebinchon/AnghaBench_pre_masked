
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr_in6 {int sin6_port; } ;
struct sockaddr_in {int sin_port; } ;
struct addrinfo {TYPE_1__* ai_addr; struct addrinfo* ai_next; void* ai_protocol; int ai_socktype; void* ai_family; } ;
typedef int hints ;
struct TYPE_2__ {scalar_t__ sa_family; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct addrinfo*) ;
 int FUNC_1 (int *,char const*,struct addrinfo*,struct addrinfo**) ;
 int FUNC_2 (struct addrinfo*,int ,int) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (char const*,char*) ;
 int FUNC_5 (char*,char const*) ;

int
FUNC_6(const char *VAR_9, int *VAR_10, int *VAR_11)
{
 struct addrinfo VAR_12, *VAR_13, *VAR_14;
 int VAR_15;
 struct sockaddr_in *VAR_16;



 int VAR_17 = -1;
 int VAR_18 = -1;





 FUNC_2(&VAR_12, 0, sizeof(VAR_12));
 VAR_12.ai_family = VAR_5;
 VAR_12.ai_socktype = VAR_8;
 VAR_12.ai_protocol = VAR_3;
 VAR_15 = FUNC_1(((void*)0), VAR_9, &VAR_12, &VAR_13);
 if (VAR_15 != 0) {
  if (VAR_15 != VAR_2) {





   return 0;
  }
 } else {



  for (VAR_14 = VAR_13; VAR_14 != ((void*)0); VAR_14 = VAR_14->ai_next) {



   if (VAR_14->ai_addr != ((void*)0)) {



    if (VAR_14->ai_addr->sa_family == VAR_0) {
     VAR_16 = (struct sockaddr_in *)VAR_14->ai_addr;
     VAR_17 = FUNC_3(VAR_16->sin_port);
     break;
    }







   }
  }
  FUNC_0(VAR_13);
 }

 FUNC_2(&VAR_12, 0, sizeof(VAR_12));
 VAR_12.ai_family = VAR_5;
 VAR_12.ai_socktype = VAR_7;
 VAR_12.ai_protocol = VAR_4;
 VAR_15 = FUNC_1(((void*)0), VAR_9, &VAR_12, &VAR_13);
 if (VAR_15 != 0) {
  if (VAR_15 != VAR_2) {





   return 0;
  }
 } else {



  for (VAR_14 = VAR_13; VAR_14 != ((void*)0); VAR_14 = VAR_14->ai_next) {



   if (VAR_14->ai_addr != ((void*)0)) {



    if (VAR_14->ai_addr->sa_family == VAR_0) {
     VAR_16 = (struct sockaddr_in *)VAR_14->ai_addr;
     VAR_18 = FUNC_3(VAR_16->sin_port);
     break;
    }







   }
  }
  FUNC_0(VAR_13);
 }







 if (VAR_17 >= 0) {
  *VAR_10 = VAR_17;
  *VAR_11 = VAR_3;
  if (VAR_18 >= 0) {
   if (VAR_18 == VAR_17)
    *VAR_11 = VAR_6;







  }
  return 1;
 }
 if (VAR_18 >= 0) {
  *VAR_10 = VAR_18;
  *VAR_11 = VAR_4;
  return 1;
 }
 return 0;
}
