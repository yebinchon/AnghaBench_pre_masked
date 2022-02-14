
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ fd; TYPE_2__* manager; int pf; } ;
typedef TYPE_3__ isc_socket_t ;
typedef int isc_result_t ;
struct TYPE_11__ {int received_bytes; int acceptbuffer; int overlapped; TYPE_1__* adev; } ;
struct TYPE_9__ {int iocp_total; } ;
struct TYPE_8__ {TYPE_3__* newsocket; } ;
typedef scalar_t__ SOCKET ;
typedef int SOCKADDR_STORAGE ;
typedef int LPOVERLAPPED ;
typedef int LPDWORD ;
typedef TYPE_4__ IoCompletionInfo ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,scalar_t__,int ,int ,int,int,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int VAR_4 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int *,int ,int) ;
 scalar_t__ FUNC_5 (int ,int ,int ) ;

__attribute__((used)) static isc_result_t
FUNC_6(isc_socket_t *VAR_5, IoCompletionInfo *VAR_6)
{
 isc_socket_t *VAR_7 = VAR_6->adev->newsocket;
 SOCKET VAR_8;







 VAR_8 = FUNC_5(VAR_5->pf, VAR_4, VAR_1);
 if (VAR_7->fd == VAR_0) {
  return (VAR_2);
 }
 FUNC_2(VAR_7->fd);
 VAR_7->fd = VAR_8;

 FUNC_4(&VAR_6->overlapped, 0, sizeof(VAR_6->overlapped));

 FUNC_0(VAR_5->fd,
      VAR_7->fd,
      VAR_6->acceptbuffer,
      0,
      sizeof(SOCKADDR_STORAGE) + 16,
      sizeof(SOCKADDR_STORAGE) + 16,
      (LPDWORD)&VAR_6->received_bytes,
      (LPOVERLAPPED)VAR_6
      );

 FUNC_1(&VAR_7->manager->iocp_total);
 FUNC_3(VAR_7);

 return (VAR_3);
}
