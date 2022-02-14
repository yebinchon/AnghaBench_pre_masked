
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in6 {int dummy; } ;
struct sockaddr_in {int dummy; } ;
struct sockaddr {scalar_t__ sa_family; scalar_t__ sa_len; } ;
struct sctp_sndrcvinfo {scalar_t__ sinfo_assoc_id; } ;
typedef int ssize_t ;
typedef scalar_t__ socklen_t ;
typedef scalar_t__ caddr_t ;
typedef int __sinfo ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (size_t) ;
 int FUNC_2 (scalar_t__,struct sockaddr*,size_t) ;
 int FUNC_3 (struct sctp_sndrcvinfo*,int ,int) ;
 void* FUNC_4 (int,struct sockaddr*) ;
 int FUNC_5 (int,void const*,size_t,struct sctp_sndrcvinfo*,int) ;
 int FUNC_6 (int,int ,int ,void*,scalar_t__) ;
 int FUNC_7 (int ,int,void const*,size_t,struct sockaddr*,scalar_t__,struct sctp_sndrcvinfo*,int) ;

ssize_t
FUNC_8(int VAR_11, const void *VAR_12, size_t VAR_13,
    struct sockaddr *VAR_14, int VAR_15,
    struct sctp_sndrcvinfo *VAR_16,
    int VAR_17)
{
 struct sctp_sndrcvinfo VAR_18;
 ssize_t VAR_19;
 int VAR_20, VAR_21, *VAR_22, VAR_23;
 char *VAR_24;
 int VAR_25 = 0;
 size_t VAR_26, VAR_27;
 struct sockaddr *VAR_28;

 if (VAR_14 == ((void*)0)) {
  VAR_10 = VAR_3;
  return (-1);
 }
 VAR_26 = sizeof(int);
 VAR_28 = VAR_14;
 VAR_21 = 0;

 for (VAR_20 = 0; VAR_20 < VAR_15; VAR_20++) {
  if (VAR_28->sa_family == VAR_0) {
   VAR_27 = sizeof(struct sockaddr_in);
  } else if (VAR_28->sa_family == VAR_1) {
   VAR_27 = sizeof(struct sockaddr_in6);
  } else {
   VAR_10 = VAR_3;
   return (-1);
  }
  VAR_26 += VAR_27;
  VAR_28 = (struct sockaddr *)((caddr_t)VAR_28 + VAR_27);
  VAR_21++;
 }

 if (VAR_21 == 0) {
  VAR_10 = VAR_3;
  return (-1);
 }
 VAR_24 = FUNC_1(VAR_26);
 if (VAR_24 == ((void*)0)) {
  VAR_10 = VAR_5;
  return (-1);
 }
 VAR_22 = (int *)VAR_24;
 *VAR_22 = VAR_21;
 VAR_22++;
 FUNC_2((caddr_t)VAR_22, VAR_14, (size_t)(VAR_26 - sizeof(int)));
 VAR_19 = FUNC_6(VAR_11, VAR_6, VAR_8, (void *)VAR_24,
     (socklen_t) VAR_26);

 FUNC_0(VAR_24);
 if (VAR_19 != 0) {
  if (VAR_10 == VAR_2) {
   VAR_25 = 1;
   goto continue_send;
  }
  return (VAR_19);
 }
continue_send:
 if (VAR_16 == ((void*)0)) {
  VAR_16 = &VAR_18;
  FUNC_3(&VAR_18, 0, sizeof(VAR_18));
 }
 VAR_16->sinfo_assoc_id = FUNC_4(VAR_11, VAR_14);
 if (VAR_16->sinfo_assoc_id == 0) {
  (void)FUNC_6(VAR_11, VAR_6, VAR_7, (void *)VAR_14,
      (socklen_t) VAR_14->sa_len);
  VAR_10 = VAR_4;
  return (-1);
 }
 VAR_19 = FUNC_5(VAR_11, VAR_12, VAR_13, VAR_16, VAR_17);
 VAR_23 = VAR_10;
 if (VAR_25 == 0)
  (void)FUNC_6(VAR_11, VAR_6, VAR_7, (void *)VAR_14,
      (socklen_t) VAR_14->sa_len);

 VAR_10 = VAR_23;
 return (VAR_19);
}
