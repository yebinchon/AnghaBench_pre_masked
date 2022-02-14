
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
struct sctp_sndrcvinfo {scalar_t__ sinfo_assoc_id; } ;
struct sctp_extrcvinfo {int dummy; } ;
struct msghdr {int msg_iovlen; char* msg_control; int msg_controllen; int msg_flags; struct iovec* msg_iov; scalar_t__ msg_namelen; scalar_t__ msg_name; } ;
struct iovec {size_t iov_len; void* iov_base; } ;
struct cmsghdr {scalar_t__ cmsg_level; scalar_t__ cmsg_type; } ;
typedef int ssize_t ;
typedef scalar_t__ socklen_t ;
typedef int cmsgbuf ;
typedef scalar_t__ caddr_t ;


 int FUNC_0 (struct cmsghdr*) ;
 struct cmsghdr* FUNC_1 (struct msghdr*) ;
 struct cmsghdr* FUNC_2 (struct msghdr*,struct cmsghdr*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (struct sctp_sndrcvinfo*,int ,int) ;
 int FUNC_4 (int,struct msghdr*,int) ;
 int FUNC_5 (int ,int,struct iovec*,int,struct sockaddr*,scalar_t__*,struct sctp_sndrcvinfo*,int*) ;

ssize_t
FUNC_6(int VAR_7,
    void *VAR_8,
    size_t VAR_9,
    struct sockaddr *VAR_10,
    socklen_t * VAR_11,
    struct sctp_sndrcvinfo *VAR_12,
    int *VAR_13)
{
 ssize_t VAR_14;
 struct msghdr VAR_15;
 struct iovec VAR_16;
 char VAR_17[VAR_2];
 struct cmsghdr *VAR_18;

 if (VAR_13 == ((void*)0)) {
  VAR_6 = VAR_0;
  return (-1);
 }
 VAR_16.iov_base = VAR_8;
 VAR_16.iov_len = VAR_9;
 VAR_15.msg_name = (caddr_t)VAR_10;
 if (VAR_11 == ((void*)0))
  VAR_15.msg_namelen = 0;
 else
  VAR_15.msg_namelen = *VAR_11;
 VAR_15.msg_iov = &VAR_16;
 VAR_15.msg_iovlen = 1;
 VAR_15.msg_control = VAR_17;
 VAR_15.msg_controllen = sizeof(VAR_17);
 VAR_15.msg_flags = 0;
 VAR_14 = FUNC_4(VAR_7, &VAR_15, *VAR_13);
 *VAR_13 = VAR_15.msg_flags;
 if (VAR_14 <= 0) {
  return (VAR_14);
 }
 if (VAR_12) {
  VAR_12->sinfo_assoc_id = 0;
 }
 if ((VAR_15.msg_controllen > 0) && (VAR_12 != ((void*)0))) {




  for (VAR_18 = FUNC_1(&VAR_15); VAR_18; VAR_18 = FUNC_2(&VAR_15, VAR_18)) {
   if (VAR_18->cmsg_level != VAR_1) {
    continue;
   }
   if (VAR_18->cmsg_type == VAR_4) {
    FUNC_3(VAR_12, FUNC_0(VAR_18), sizeof(struct sctp_sndrcvinfo));
    break;
   }
   if (VAR_18->cmsg_type == VAR_3) {





    FUNC_3(VAR_12, FUNC_0(VAR_18), sizeof(struct sctp_extrcvinfo));
    break;
   }
  }
 }
 return (VAR_14);

}
