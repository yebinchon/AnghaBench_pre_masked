
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_char ;
struct udp_port {int dstaddr; } ;
struct tport {int dummy; } ;
struct sockcred {int dummy; } ;
struct port_input {size_t length; scalar_t__ cred; int fd; int buflen; int * buf; int peerlen; int peer; } ;
struct msghdr {int msg_iovlen; char* msg_control; int msg_controllen; int msg_flags; struct iovec* msg_iov; int msg_namelen; int msg_name; } ;
struct iovec {int iov_len; int * iov_base; } ;
struct in_addr {int dummy; } ;
struct cmsghdr {scalar_t__ cmsg_level; scalar_t__ cmsg_type; } ;
typedef int ssize_t ;
typedef int embuf ;
typedef int cbuf ;
struct TYPE_2__ {int inTooLong; int silentDrops; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct cmsghdr*) ;
 struct cmsghdr* FUNC_1 (struct msghdr*) ;
 struct cmsghdr* FUNC_2 (struct msghdr*,struct cmsghdr*) ;
 int FUNC_3 (int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_5 ;
 int * FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct port_input*,struct sockcred*) ;
 int FUNC_8 (int *,scalar_t__,int) ;
 int FUNC_9 (char*,int ,int) ;
 int FUNC_10 (int ,int *,int,int ,int *,int *) ;
 int FUNC_11 (int ,struct msghdr*,int ) ;
 TYPE_1__ VAR_6 ;

__attribute__((used)) static ssize_t
FUNC_12(struct tport *VAR_7, struct port_input *VAR_8)
{
 u_char VAR_9[1000];
 char VAR_10[FUNC_3(FUNC_4(VAR_0)) +
     FUNC_3(sizeof(struct in_addr))];
 struct udp_port *VAR_11 = (struct udp_port *)VAR_7;
 struct msghdr VAR_12;
 struct iovec VAR_13[1];
 ssize_t VAR_14;
 struct cmsghdr *VAR_15;
 struct sockcred *VAR_16 = ((void*)0);

 if (VAR_8->buf == ((void*)0)) {

  if ((VAR_8->buf = FUNC_5(0)) == ((void*)0)) {


   (void)FUNC_10(VAR_8->fd, VAR_9, sizeof(VAR_9),
       0, ((void*)0), ((void*)0));

   return (-1);
  }
  VAR_8->buflen = FUNC_6(0);
 }


 VAR_12.msg_name = VAR_8->peer;
 VAR_12.msg_namelen = VAR_8->peerlen;
 VAR_12.msg_iov = VAR_13;
 VAR_12.msg_iovlen = 1;
 FUNC_9(VAR_10, 0, sizeof(VAR_10));
 VAR_12.msg_control = VAR_10;
 VAR_12.msg_controllen = sizeof(VAR_10);
 VAR_12.msg_flags = 0;

 VAR_13[0].iov_base = VAR_8->buf;
 VAR_13[0].iov_len = VAR_8->buflen;

 VAR_14 = FUNC_11(VAR_8->fd, &VAR_12, 0);

 if (VAR_14 == -1 || VAR_14 == 0)

  return (-1);

 if (VAR_12.msg_flags & VAR_3) {

  VAR_6.silentDrops++;
  VAR_6.inTooLong++;
  return (-1);
 }

 VAR_8->length = (size_t)VAR_14;

 for (VAR_15 = FUNC_1(&VAR_12); VAR_15 != ((void*)0);
     VAR_15 = FUNC_2(&VAR_12, VAR_15)) {
  if (VAR_15->cmsg_level == VAR_1 &&
      VAR_15->cmsg_type == VAR_2)
   FUNC_8(&VAR_11->dstaddr, FUNC_0(VAR_15),
       sizeof(struct in_addr));
  if (VAR_15->cmsg_level == VAR_5 &&
      VAR_15->cmsg_type == VAR_4)
   VAR_16 = (struct sockcred *)(void *)FUNC_0(VAR_15);
 }

 if (VAR_8->cred)
  FUNC_7(VAR_8, VAR_16);

 return (0);
}
