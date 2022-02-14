
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cam_path {TYPE_1__* bus; } ;
typedef int path_id_t ;
struct TYPE_2__ {int path_id; } ;



path_id_t
FUNC_0(struct cam_path *VAR_0)
{
 return(VAR_0->bus->path_id);
}
