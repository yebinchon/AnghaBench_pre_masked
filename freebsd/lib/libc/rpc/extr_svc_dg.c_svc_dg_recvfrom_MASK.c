
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; scalar_t__ sin_port; int sin_family; } ;
struct sockaddr {int dummy; } ;
struct msghdr {int msg_iovlen; int msg_namelen; char* msg_name; int msg_controllen; int msg_flags; scalar_t__ msg_control; struct iovec* msg_iov; } ;
struct iovec {char* iov_base; int iov_len; } ;
struct in_addr {int dummy; } ;
struct cmsghdr {scalar_t__ cmsg_level; scalar_t__ cmsg_type; } ;
typedef int socklen_t ;
typedef int msg ;
typedef scalar_t__ caddr_t ;
typedef int bool_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct cmsghdr*) ;
 struct cmsghdr* FUNC_1 (struct msghdr*) ;
 int FUNC_2 (int) ;
 struct cmsghdr* FUNC_3 (struct msghdr*,struct cmsghdr*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int,struct msghdr*,int ) ;
 int FUNC_5 (TYPE_1__*,struct in_addr*,int) ;
 int FUNC_6 (char*,int ,int) ;

__attribute__((used)) static int
FUNC_7(int VAR_7, char *VAR_8, int VAR_9,
    struct sockaddr *VAR_10, socklen_t *VAR_11,
    struct sockaddr *VAR_12, socklen_t *VAR_13)
{
 struct msghdr VAR_14;
 struct iovec VAR_15[1];
 struct sockaddr_in *VAR_16 = (struct sockaddr_in *)VAR_12;
 int VAR_17;
 bool_t VAR_18 = VAR_1;
 char VAR_19[FUNC_2(sizeof(*VAR_16))];
 struct cmsghdr *VAR_20;

 FUNC_6((char *)&VAR_14, 0, sizeof(VAR_14));
 VAR_15[0].iov_base = VAR_8;
 VAR_15[0].iov_len = VAR_9;
 VAR_14.msg_iov = VAR_15;
 VAR_14.msg_iovlen = 1;
 VAR_14.msg_namelen = *VAR_11;
 VAR_14.msg_name = (char *)VAR_10;
 if (VAR_12 != ((void*)0)) {
     VAR_14.msg_control = (caddr_t)VAR_19;
     VAR_14.msg_controllen = FUNC_2(sizeof(*VAR_16));
 }
 VAR_17 = FUNC_4(VAR_7, &VAR_14, 0);
 if (VAR_17 >= 0)
  *VAR_11 = VAR_14.msg_namelen;

 if (VAR_17 == -1 || VAR_12 == ((void*)0) ||
     VAR_14.msg_controllen < sizeof(struct cmsghdr) ||
     VAR_14.msg_flags & VAR_5)
  return VAR_17;

 for (VAR_20 = FUNC_1(&VAR_14); VAR_20 != ((void*)0);
      VAR_20 = FUNC_3(&VAR_14, VAR_20)) {
  if (VAR_20->cmsg_level == VAR_3 &&
      VAR_20->cmsg_type == VAR_4) {
   VAR_18 = VAR_6;
   FUNC_5(&VAR_16->sin_addr,
       (struct in_addr *)FUNC_0(VAR_20),
       sizeof(struct in_addr));
   break;
  }
 }

 VAR_16->sin_family = VAR_0;
 VAR_16->sin_port = 0;
 *VAR_13 = sizeof(struct sockaddr_in);

 if (!VAR_18)
  VAR_16->sin_addr.s_addr = VAR_2;

 return VAR_17;
}
