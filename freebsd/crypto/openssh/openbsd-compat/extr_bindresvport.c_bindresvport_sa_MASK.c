
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int16_t ;
struct sockaddr_storage {int dummy; } ;
struct sockaddr_in6 {scalar_t__ sin6_port; } ;
struct sockaddr_in {scalar_t__ sin_port; } ;
struct sockaddr {int sa_family; } ;
typedef int socklen_t ;
typedef int myaddr ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int,struct sockaddr*,int) ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (int,struct sockaddr*,int*) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct sockaddr_storage*,int ,int) ;
 scalar_t__ FUNC_5 (scalar_t__) ;

int
FUNC_6(int VAR_9, struct sockaddr *VAR_10)
{
 int VAR_11, VAR_12;
 struct sockaddr_storage VAR_13;
 struct sockaddr_in *VAR_14;
 struct sockaddr_in6 *VAR_15;
 u_int16_t *VAR_16;
 u_int16_t VAR_17;
 socklen_t VAR_18;
 int VAR_19;

 if (VAR_10 == ((void*)0)) {
  FUNC_4(&VAR_13, 0, sizeof(VAR_13));
  VAR_10 = (struct sockaddr *)&VAR_13;
  VAR_18 = sizeof(VAR_13);

  if (FUNC_2(VAR_9, VAR_10, &VAR_18) == -1)
   return -1;

  VAR_12 = VAR_10->sa_family;
  FUNC_4(&VAR_13, 0, VAR_18);
 } else
  VAR_12 = VAR_10->sa_family;

 if (VAR_12 == VAR_0) {
  VAR_14 = (struct sockaddr_in *)VAR_10;
  VAR_18 = sizeof(struct sockaddr_in);
  VAR_16 = &VAR_14->sin_port;
 } else if (VAR_12 == VAR_1) {
  VAR_15 = (struct sockaddr_in6 *)VAR_10;
  VAR_18 = sizeof(struct sockaddr_in6);
  VAR_16 = &VAR_15->sin6_port;
 } else {
  VAR_8 = VAR_5;
  return (-1);
 }
 VAR_10->sa_family = VAR_12;

 VAR_17 = FUNC_5(*VAR_16);
 if (VAR_17 == 0)
  VAR_17 = FUNC_0(VAR_6) + VAR_7;


 VAR_11 = -1;

 for(VAR_19 = 0; VAR_19 < VAR_6; VAR_19++) {
  *VAR_16 = FUNC_3(VAR_17);

  VAR_11 = FUNC_1(VAR_9, VAR_10, VAR_18);


  if (VAR_11 == 0)
   break;


  if ((VAR_11 < 0) && !((VAR_8 == VAR_2) || (VAR_8 == VAR_3)))
   break;

  VAR_17++;
  if (VAR_17 > VAR_4)
   VAR_17 = VAR_7;
 }

 return (VAR_11);
}
