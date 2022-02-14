
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ pool; } ;
union ctl_io {TYPE_1__ io_hdr; } ;
struct ctl_io_pool {int zone; } ;


 int FUNC_0 (int ,union ctl_io*) ;

void
FUNC_1(union ctl_io *VAR_0)
{
 struct ctl_io_pool *VAR_1;

 if (VAR_0 == ((void*)0))
  return;

 VAR_1 = (struct ctl_io_pool *)VAR_0->io_hdr.pool;
 FUNC_0(VAR_1->zone, VAR_0);
}
