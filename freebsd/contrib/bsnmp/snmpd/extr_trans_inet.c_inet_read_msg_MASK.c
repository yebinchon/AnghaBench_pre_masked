
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct port_input {size_t length; int fd; int peerlen; int peer; int buflen; int buf; } ;
struct msghdr {int msg_iovlen; char* msg_control; int msg_flags; int msg_controllen; struct iovec* msg_iov; int msg_namelen; int msg_name; } ;
struct iovec {int iov_len; int iov_base; } ;
typedef int ssize_t ;
struct TYPE_2__ {int inTooLong; int silentDrops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (int ,struct msghdr*,int ) ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static int
FUNC_2(struct port_input *VAR_3, struct msghdr *VAR_4, char *VAR_5)
{
 struct iovec VAR_6[1];

 VAR_6[0].iov_base = VAR_3->buf;
 VAR_6[0].iov_len = VAR_3->buflen;

 VAR_4->msg_name = VAR_3->peer;
 VAR_4->msg_namelen = VAR_3->peerlen;
 VAR_4->msg_iov = VAR_6;
 VAR_4->msg_iovlen = 1;
 VAR_4->msg_control = VAR_5;
 VAR_4->msg_controllen = VAR_1;
 VAR_4->msg_flags = 0;

 FUNC_0(VAR_5, 0, VAR_1);

 const ssize_t VAR_7 = FUNC_1(VAR_3->fd, VAR_4, 0);

 if (VAR_7 == -1 || VAR_7 == 0)

  return (-1);

 if (VAR_4->msg_flags & VAR_0) {

  VAR_2.silentDrops++;
  VAR_2.inTooLong++;
  return (-1);
 }

 VAR_3->length = (size_t)VAR_7;

 return (0);
}
