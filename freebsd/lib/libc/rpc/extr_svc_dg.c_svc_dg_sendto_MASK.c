
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in_addr {scalar_t__ s_addr; } ;
struct sockaddr_in {struct in_addr sin_addr; } ;
struct sockaddr {scalar_t__ sa_family; } ;
struct msghdr {int msg_iovlen; char* msg_name; void* msg_controllen; scalar_t__ msg_control; int msg_namelen; struct iovec* msg_iov; } ;
struct iovec {char* iov_base; int iov_len; } ;
struct cmsghdr {int cmsg_type; int cmsg_level; void* cmsg_len; } ;
typedef int socklen_t ;
typedef int msg ;
typedef scalar_t__ caddr_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct cmsghdr*) ;
 struct cmsghdr* FUNC_1 (struct msghdr*) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int,struct msghdr*,int ) ;
 int FUNC_5 (int ,struct in_addr*,int) ;
 int FUNC_6 (char*,int ,int) ;

__attribute__((used)) static int
FUNC_7(int VAR_4, char *VAR_5, int VAR_6,
    const struct sockaddr *VAR_7, socklen_t VAR_8,
    const struct sockaddr *VAR_9, socklen_t VAR_10)
{
 struct msghdr VAR_11;
 struct iovec VAR_12[1];
 struct sockaddr_in *VAR_13 = (struct sockaddr_in *)VAR_9;
 struct in_addr *VAR_14 = &VAR_13->sin_addr;
 char VAR_15[FUNC_3(sizeof(*VAR_14))];
 struct cmsghdr *VAR_16;

 FUNC_6((char *)&VAR_11, 0, sizeof(VAR_11));
 VAR_12[0].iov_base = VAR_5;
 VAR_12[0].iov_len = VAR_6;
 VAR_11.msg_iov = VAR_12;
 VAR_11.msg_iovlen = 1;
 VAR_11.msg_namelen = VAR_8;
 VAR_11.msg_name = (char *)VAR_7;

 if (VAR_9 != ((void*)0) && VAR_9->sa_family == VAR_0 &&
     VAR_14->s_addr != VAR_1) {
  VAR_11.msg_control = (caddr_t)VAR_15;
  VAR_11.msg_controllen = FUNC_2(sizeof(*VAR_14));
  VAR_16 = FUNC_1(&VAR_11);
  VAR_16->cmsg_len = FUNC_2(sizeof(*VAR_14));
  VAR_16->cmsg_level = VAR_2;
  VAR_16->cmsg_type = VAR_3;
  FUNC_5(FUNC_0(VAR_16), VAR_14, sizeof(*VAR_14));
 }

 return FUNC_4(VAR_4, &VAR_11, 0);
}
