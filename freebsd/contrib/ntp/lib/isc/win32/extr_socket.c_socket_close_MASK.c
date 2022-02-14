
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ fd; TYPE_1__* manager; } ;
typedef TYPE_2__ isc_socket_t ;
struct TYPE_5__ {int totalSockets; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (scalar_t__) ;

void
FUNC_4(isc_socket_t *VAR_2) {

 FUNC_1(VAR_2 != ((void*)0));

 if (VAR_2->fd != VAR_0) {
  FUNC_3(VAR_2->fd);
  VAR_2->fd = VAR_0;
  FUNC_2(VAR_2, VAR_1);
  FUNC_0(&VAR_2->manager->totalSockets);
 }
}
