
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
struct sctp_sndrcvinfo {int dummy; } ;
struct msghdr {int msg_iovlen; char* msg_control; int msg_controllen; scalar_t__ msg_flags; struct iovec* msg_iov; scalar_t__ msg_namelen; int * msg_name; } ;
struct iovec {char* iov_base; size_t iov_len; } ;
struct cmsghdr {int cmsg_len; int cmsg_type; int cmsg_level; } ;
typedef int ssize_t ;


 int FUNC_0 (struct cmsghdr*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ,struct sctp_sndrcvinfo const*,int) ;
 int FUNC_4 (int,struct msghdr*,int) ;
 int FUNC_5 (int ,int,void const*,size_t,struct sockaddr*,int ,struct sctp_sndrcvinfo const*,int) ;

ssize_t
FUNC_6(int VAR_5, const void *VAR_6, size_t VAR_7,
    const struct sctp_sndrcvinfo *VAR_8,
    int VAR_9)
{







 struct msghdr VAR_10;
 struct iovec VAR_11;
 char VAR_12[FUNC_2(sizeof(struct sctp_sndrcvinfo))];
 struct cmsghdr *VAR_13;

 if (VAR_8 == ((void*)0)) {
  VAR_4 = VAR_0;
  return (-1);
 }
 VAR_11.iov_base = (char *)VAR_6;
 VAR_11.iov_len = VAR_7;

 VAR_10.msg_name = ((void*)0);
 VAR_10.msg_namelen = 0;
 VAR_10.msg_iov = &VAR_11;
 VAR_10.msg_iovlen = 1;
 VAR_10.msg_control = VAR_12;
 VAR_10.msg_controllen = FUNC_2(sizeof(struct sctp_sndrcvinfo));
 VAR_10.msg_flags = 0;
 VAR_13 = (struct cmsghdr *)VAR_12;
 VAR_13->cmsg_level = VAR_1;
 VAR_13->cmsg_type = VAR_2;
 VAR_13->cmsg_len = FUNC_1(sizeof(struct sctp_sndrcvinfo));
 FUNC_3(FUNC_0(VAR_13), VAR_8, sizeof(struct sctp_sndrcvinfo));
 return (FUNC_4(VAR_5, &VAR_10, VAR_9));

}
