
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct msghdr {int to_addr_len; int to_addr; int msg_iovlen; int msg_iov; } ;
struct TYPE_3__ {int pending_send; int pending_iocp; int fd; } ;
typedef TYPE_1__ isc_socket_t ;
typedef int SOCKADDR ;
typedef int LPWSAOVERLAPPED ;
typedef int IoCompletionInfo ;
typedef int DWORD ;



 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ,int ,int*,int,int *,int ,int ,int *) ;




int
FUNC_2(isc_socket_t *VAR_1, IoCompletionInfo *VAR_2,
   struct msghdr *VAR_3, int VAR_4, int *VAR_5)
{
 int VAR_6;
 DWORD VAR_7;
 DWORD VAR_8 = VAR_4;
 int VAR_9;

 *VAR_5 = 0;
 VAR_6 = FUNC_1(VAR_1->fd, VAR_3->msg_iov,
      VAR_3->msg_iovlen, &VAR_7,
      VAR_8, (SOCKADDR *)&VAR_3->to_addr,
      VAR_3->to_addr_len, (LPWSAOVERLAPPED)VAR_2,
      ((void*)0));

 VAR_9 = (int)VAR_7;


 if (VAR_6 == VAR_0) {
  *VAR_5 = FUNC_0();

  switch (*VAR_5) {
  case 130:
  case 128:
  case 129:
  case 131:
   VAR_1->pending_iocp++;
   VAR_1->pending_send++;
   break;

  default:
   return (-1);
   break;
  }
 } else {
  VAR_1->pending_iocp++;
  VAR_1->pending_send++;
 }

 if (VAR_2 != ((void*)0))
  return (0);
 else
  return (VAR_9);
}
