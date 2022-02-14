
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int initid; } ;
struct TYPE_4__ {TYPE_1__ nexus; } ;
union ctl_io {TYPE_2__ io_hdr; } ;
typedef int uint32_t ;


 scalar_t__ FUNC_0 (int) ;

union ctl_io *
FUNC_1(uint32_t VAR_0)
{
 union ctl_io *VAR_1;

 VAR_1 = (union ctl_io *)FUNC_0(sizeof(*VAR_1));
 if (VAR_1 == ((void*)0))
  goto bailout;

 VAR_1->io_hdr.nexus.initid = VAR_0;

bailout:
 return (VAR_1);
}
