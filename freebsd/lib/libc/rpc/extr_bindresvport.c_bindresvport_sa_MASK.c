
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int16_t ;
struct sockaddr_storage {int dummy; } ;
struct sockaddr_in6 {scalar_t__ sin6_port; } ;
struct sockaddr_in {scalar_t__ sin_port; } ;
struct sockaddr {int sa_family; int sa_len; } ;
typedef int socklen_t ;
typedef int portlow ;
typedef int old ;
typedef int myaddr ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,struct sockaddr*,int) ;
 int FUNC_1 (int,struct sockaddr*,int*) ;
 int FUNC_2 (int,int,int,int*,int*) ;
 int FUNC_3 (int,int,int,int*,int) ;
 int VAR_7 ;
 int FUNC_4 (struct sockaddr*,int ,int) ;

int
FUNC_5(int VAR_8, struct sockaddr *VAR_9)
{
 int VAR_10, VAR_11, VAR_12;
 struct sockaddr_storage VAR_13;
 struct sockaddr_in *VAR_14;



 int VAR_15, VAR_16, VAR_17;
 u_int16_t *VAR_18;
 socklen_t VAR_19;

 if (VAR_9 == ((void*)0)) {
  VAR_19 = sizeof(VAR_13);
  VAR_9 = (struct sockaddr *)&VAR_13;

  if (FUNC_1(VAR_8, VAR_9, &VAR_19) == -1)
   return -1;

  VAR_12 = VAR_9->sa_family;
  FUNC_4(VAR_9, 0, VAR_19);
 } else
  VAR_12 = VAR_9->sa_family;

 switch (VAR_12) {
 case 129:
  VAR_15 = VAR_1;
  VAR_16 = VAR_5;
  VAR_17 = VAR_6;
  VAR_14 = (struct sockaddr_in *)VAR_9;
  VAR_19 = sizeof(struct sockaddr_in);
  VAR_18 = &VAR_14->sin_port;
  break;
 default:
  VAR_7 = VAR_0;
  return (-1);
 }
 VAR_9->sa_family = VAR_12;
 VAR_9->sa_len = VAR_19;

 if (*VAR_18 == 0) {
  socklen_t VAR_20 = sizeof(VAR_10);

  VAR_11 = FUNC_2(VAR_8, VAR_15, VAR_16, &VAR_10, &VAR_20);
  if (VAR_11 < 0)
   return (VAR_11);

  VAR_11 = FUNC_3(VAR_8, VAR_15, VAR_16, &VAR_17,
      sizeof(VAR_17));
  if (VAR_11 < 0)
   return (VAR_11);
 }

 VAR_11 = FUNC_0(VAR_8, VAR_9, VAR_19);

 if (*VAR_18 == 0) {
  int VAR_21 = VAR_7;

  if (VAR_11 < 0) {
   if (FUNC_3(VAR_8, VAR_15, VAR_16, &VAR_10,
       sizeof(VAR_10)) < 0)
    VAR_7 = VAR_21;
   return (VAR_11);
  }

  if (VAR_9 != (struct sockaddr *)&VAR_13) {

   if (FUNC_1(VAR_8, VAR_9, &VAR_19) < 0)
    VAR_7 = VAR_21;
   return (VAR_11);
  }
 }
 return (VAR_11);
}
