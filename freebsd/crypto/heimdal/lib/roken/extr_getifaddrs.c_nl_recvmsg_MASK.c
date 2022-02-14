
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_nl {int dummy; } ;
struct msghdr {int msg_namelen; int msg_iovlen; int msg_flags; scalar_t__ msg_controllen; int * msg_control; struct iovec* msg_iov; void* msg_name; } ;
struct iovec {void* member_0; size_t member_1; } ;
typedef int nladdr ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int,struct msghdr*,int ) ;

__attribute__((used)) static int
FUNC_1(int VAR_3, int VAR_4, int VAR_5,
    void *VAR_6, size_t VAR_7,
    int *VAR_8)
{
  struct msghdr VAR_9;
  struct iovec VAR_10 = { VAR_6, VAR_7 };
  struct sockaddr_nl VAR_11;
  int VAR_12;

  for (;;){
    VAR_9.msg_name = (void *)&VAR_11;
    VAR_9.msg_namelen = sizeof(VAR_11);
    VAR_9.msg_iov = &VAR_10;
    VAR_9.msg_iovlen = 1;
    VAR_9.msg_control = ((void*)0);
    VAR_9.msg_controllen = 0;
    VAR_9.msg_flags = 0;
    VAR_12 = FUNC_0(VAR_3, &VAR_9, 0);
    if ((VAR_12 < 0 && VAR_2 == VAR_0) || (VAR_9.msg_flags & VAR_1))
      continue;
    if (VAR_8) *VAR_8 = VAR_9.msg_flags;
    break;
  }
  return VAR_12;
}
