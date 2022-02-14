
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int* pipe_fds; scalar_t__ maxsocks; } ;
typedef TYPE_1__ isc__socketmgr_t ;
typedef int fd_set ;


 int FUNC_0 (int,int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,int,int ,int ) ;

__attribute__((used)) static void
FUNC_3(isc__socketmgr_t *VAR_0, int VAR_1, fd_set *VAR_2,
     fd_set *VAR_3)
{
 int VAR_4;

 FUNC_1(VAR_1 <= (int)VAR_0->maxsocks);

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {




  FUNC_2(VAR_0, VAR_4, FUNC_0(VAR_4, VAR_2),
      FUNC_0(VAR_4, VAR_3));
 }
}
