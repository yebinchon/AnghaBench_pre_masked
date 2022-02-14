
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* s6_addr; int s_addr; } ;
struct sockaddr_in6 {void* sin_port; void* sin_family; TYPE_1__ sin_addr; void* sin6_port; void* sin6_family; TYPE_1__ sin6_addr; } ;
struct sockaddr_in {void* sin_port; void* sin_family; TYPE_1__ sin_addr; void* sin6_port; void* sin6_family; TYPE_1__ sin6_addr; } ;
struct sockaddr {int dummy; } ;
struct evutil_addrinfo {scalar_t__ ai_family; int ai_flags; int ai_protocol; } ;
typedef int sin6 ;
typedef int sin ;


 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 struct evutil_addrinfo* FUNC_0 (struct evutil_addrinfo*,struct evutil_addrinfo*) ;
 int FUNC_1 (struct evutil_addrinfo*) ;
 int FUNC_2 (struct evutil_addrinfo*) ;
 int FUNC_3 (void*,char const*,TYPE_1__*) ;
 struct evutil_addrinfo* FUNC_4 (struct sockaddr*,int,struct evutil_addrinfo*) ;
 int FUNC_5 (char const*,char const*,struct evutil_addrinfo*) ;
 char* FUNC_6 (int ) ;
 int FUNC_7 (int) ;
 void* FUNC_8 (int) ;
 int FUNC_9 (struct sockaddr_in6*,int ,int) ;

int
FUNC_10(const char *VAR_11, const char *VAR_12,
    struct evutil_addrinfo *VAR_13, struct evutil_addrinfo **VAR_14, int *VAR_15)
{
 int VAR_16 = 0;
 const char *VAR_17;

 if (VAR_11 == ((void*)0) && VAR_12 == ((void*)0))
  return VAR_7;


 if (VAR_13->ai_family != VAR_10 && VAR_13->ai_family != VAR_8 &&
     VAR_13->ai_family != VAR_9)
  return VAR_4;

 FUNC_2(VAR_13);


 VAR_17 = FUNC_6(VAR_13->ai_protocol);
 if (VAR_12) {


  VAR_16 = FUNC_5(VAR_12, VAR_17, VAR_13);
  if (VAR_16 < 0) {
   return VAR_7;
  }
 }



 if (VAR_11 == ((void*)0)) {
  struct evutil_addrinfo *VAR_18=((void*)0), *VAR_19=((void*)0);
  if (VAR_13->ai_family != VAR_8) {
   struct sockaddr_in6 VAR_20;
   FUNC_9(&VAR_20, 0, sizeof(VAR_20));
   VAR_20 = VAR_1;
   VAR_20 = FUNC_8(VAR_16);
   if (VAR_13->ai_flags & VAR_3) {

   } else {

    VAR_20[15] = 1;
   }
   VAR_19 = FUNC_4((struct sockaddr*)&VAR_20,
       sizeof(VAR_20), VAR_13);
   if (!VAR_19)
    return VAR_5;
  }

  if (VAR_13->ai_family != VAR_9) {
   struct sockaddr_in VAR_21;
   FUNC_9(&VAR_21, 0, sizeof(VAR_21));
   VAR_21.sin_family = VAR_0;
   VAR_21.sin_port = FUNC_8(VAR_16);
   if (VAR_13->ai_flags & VAR_3) {

   } else {

    VAR_21.sin_addr.s_addr = FUNC_7(0x7f000001);
   }
   VAR_18 = FUNC_4((struct sockaddr*)&VAR_21,
       sizeof(VAR_21), VAR_13);
   if (!VAR_18) {
    if (VAR_19)
     FUNC_1(VAR_19);
    return VAR_5;
   }
  }
  *VAR_14 = FUNC_0(VAR_18, VAR_19);
  return 0;
 }




 if (VAR_13->ai_family == VAR_9 || VAR_13->ai_family == VAR_10) {
  struct sockaddr_in6 VAR_22;
  FUNC_9(&VAR_22, 0, sizeof(VAR_22));
  if (1==FUNC_3(VAR_1, VAR_11, &VAR_22)) {

   VAR_22 = VAR_1;
   VAR_22 = FUNC_8(VAR_16);
   *VAR_14 = FUNC_4((struct sockaddr*)&VAR_22,
       sizeof(VAR_22), VAR_13);
   if (!*VAR_14)
    return VAR_5;
   return 0;
  }
 }


 if (VAR_13->ai_family == VAR_8 || VAR_13->ai_family == VAR_10) {
  struct sockaddr_in VAR_23;
  FUNC_9(&VAR_23, 0, sizeof(VAR_23));
  if (1==FUNC_3(VAR_0, VAR_11, &VAR_23.sin_addr)) {

   VAR_23.sin_family = VAR_0;
   VAR_23.sin_port = FUNC_8(VAR_16);
   *VAR_14 = FUNC_4((struct sockaddr*)&VAR_23,
       sizeof(VAR_23), VAR_13);
   if (!*VAR_14)
    return VAR_5;
   return 0;
  }
 }




 if ((VAR_13->ai_flags & VAR_2)) {

  return VAR_7;
 }
 *VAR_15 = VAR_16;
 return VAR_6;
}
