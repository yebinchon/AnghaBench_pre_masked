
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* pool; } ;
union ctl_io {TYPE_1__ io_hdr; } ;


 int FUNC_0 (union ctl_io*,int ,int) ;

void
FUNC_1(union ctl_io *VAR_0)
{
 void *VAR_1;

 if (VAR_0 == ((void*)0))
  return;

 VAR_1 = VAR_0->io_hdr.pool;
 FUNC_0(VAR_0, 0, sizeof(*VAR_0));
 VAR_0->io_hdr.pool = VAR_1;
}
