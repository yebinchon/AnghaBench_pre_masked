
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* pool; } ;
union ctl_io {TYPE_1__ io_hdr; } ;
struct ctl_io_pool {TYPE_3__* ctl_softc; int zone; } ;
struct TYPE_5__ {int blocked_queue; } ;
struct TYPE_6__ {TYPE_2__ io_hdr; } ;
typedef TYPE_3__* CTL_SOFTC ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 union ctl_io* FUNC_1 (int ,int ) ;

union ctl_io *
FUNC_2(void *VAR_1)
{
 struct ctl_io_pool *VAR_2 = (struct ctl_io_pool *)VAR_1;
 union ctl_io *VAR_3;

 VAR_3 = FUNC_1(VAR_2->zone, VAR_0);
 if (VAR_3 != ((void*)0)) {
  VAR_3->io_hdr.pool = VAR_1;
  CTL_SOFTC(VAR_4) = VAR_2->ctl_softc;
  FUNC_0(&VAR_4->io_hdr.blocked_queue);
 }
 return (VAR_3);
}
