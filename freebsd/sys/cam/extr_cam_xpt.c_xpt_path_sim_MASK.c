
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cam_sim {int dummy; } ;
struct cam_path {TYPE_1__* bus; } ;
struct TYPE_2__ {struct cam_sim* sim; } ;



struct cam_sim *
FUNC_0(struct cam_path *VAR_0)
{

 return (VAR_0->bus->sim);
}
