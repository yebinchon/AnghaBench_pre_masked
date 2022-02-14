
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct sockaddr_storage {int dummy; } ;
struct sockaddr_in6 {scalar_t__ sin6_port; } ;
struct sockaddr_in {scalar_t__ sin_port; } ;
struct sockaddr {int sa_family; int sa_len; } ;
struct sctp_getaddresses {TYPE_1__* addr; scalar_t__ sget_assoc_id; } ;
typedef int socklen_t ;
typedef int caddr_t ;
struct TYPE_2__ {int sa_family; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct sctp_getaddresses*) ;
 scalar_t__ FUNC_1 (size_t) ;
 int FUNC_2 (TYPE_1__*,struct sockaddr*,int) ;
 int FUNC_3 (struct sctp_getaddresses*,int ,size_t) ;
 scalar_t__ FUNC_4 (int,int ,int,struct sctp_getaddresses*,int ) ;

int
FUNC_5(int VAR_8, struct sockaddr *VAR_9, int VAR_10, int VAR_11)
{
 struct sctp_getaddresses *VAR_12;
 struct sockaddr *VAR_13;
 struct sockaddr_in *VAR_14;
 struct sockaddr_in6 *VAR_15;
 int VAR_16;
 size_t VAR_17;
 uint16_t VAR_18 = 0;


 if ((VAR_11 != VAR_5) &&
     (VAR_11 != VAR_6)) {
  VAR_7 = VAR_1;
  return (-1);
 }

 if ((VAR_10 <= 0) || (VAR_9 == ((void*)0))) {
  VAR_7 = VAR_2;
  return (-1);
 }

 VAR_13 = VAR_9;
 for (VAR_16 = 0; VAR_16 < VAR_10; VAR_16++) {
  switch (VAR_13->sa_family) {
  case 129:
   if (VAR_13->sa_len != sizeof(struct sockaddr_in)) {
    VAR_7 = VAR_2;
    return (-1);
   }
   VAR_14 = (struct sockaddr_in *)VAR_13;
   if (VAR_14->sin_port) {

    if (VAR_18) {

     if (VAR_18 != VAR_14->sin_port) {
      VAR_7 = VAR_2;
      return (-1);
     }
    } else {

     VAR_18 = VAR_14->sin_port;
    }
   }
   break;
  case 128:
   if (VAR_13->sa_len != sizeof(struct sockaddr_in6)) {
    VAR_7 = VAR_2;
    return (-1);
   }
   VAR_15 = (struct sockaddr_in6 *)VAR_13;
   if (VAR_15->sin6_port) {

    if (VAR_18) {

     if (VAR_18 != VAR_15->sin6_port) {
      VAR_7 = VAR_2;
      return (-1);
     }
    } else {

     VAR_18 = VAR_15->sin6_port;
    }
   }
   break;
  default:

   VAR_7 = VAR_0;
   return (-1);
  }
  VAR_13 = (struct sockaddr *)((caddr_t)VAR_13 + VAR_13->sa_len);
 }
 VAR_17 = sizeof(struct sctp_getaddresses) +
     sizeof(struct sockaddr_storage);
 if ((VAR_12 = (struct sctp_getaddresses *)FUNC_1(VAR_17)) == ((void*)0)) {
  VAR_7 = VAR_3;
  return (-1);
 }
 VAR_13 = VAR_9;
 for (VAR_16 = 0; VAR_16 < VAR_10; VAR_16++) {
  FUNC_3(VAR_12, 0, VAR_17);
  VAR_12->sget_assoc_id = 0;
  FUNC_2(VAR_12->addr, VAR_13, VAR_13->sa_len);





  if ((VAR_16 == 0) && (VAR_18 != 0)) {
   switch (VAR_12->addr->sa_family) {
   case 129:
    VAR_14 = (struct sockaddr_in *)VAR_12->addr;
    VAR_14->sin_port = VAR_18;
    break;
   case 128:
    VAR_15 = (struct sockaddr_in6 *)VAR_12->addr;
    VAR_15->sin6_port = VAR_18;
    break;
   }
  }
  if (FUNC_4(VAR_8, VAR_4, VAR_11, VAR_12,
      (socklen_t) VAR_17) != 0) {
   FUNC_0(VAR_12);
   return (-1);
  }
  VAR_13 = (struct sockaddr *)((caddr_t)VAR_13 + VAR_13->sa_len);
 }
 FUNC_0(VAR_12);
 return (0);
}
