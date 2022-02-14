
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ vdev_ms_count; scalar_t__ vdev_id; } ;
typedef TYPE_1__ vdev_t ;
typedef int u_longlong_t ;


 int FUNC_0 (char*,char*,char*,char*,char*,...) ;

__attribute__((used)) static void
FUNC_1(vdev_t *VAR_0)
{
 (void) FUNC_0("\tvdev %10llu\n\t%-10s%5llu   %-19s   %-15s   %-10s\n",
     (u_longlong_t)VAR_0->vdev_id,
     "metaslabs", (u_longlong_t)VAR_0->vdev_ms_count,
     "offset", "spacemap", "free");
 (void) FUNC_0("\t%15s   %19s   %15s   %10s\n",
     "---------------", "-------------------",
     "---------------", "-------------");
}
