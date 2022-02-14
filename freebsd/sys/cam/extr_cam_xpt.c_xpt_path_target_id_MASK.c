
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int target_id_t ;
struct cam_path {TYPE_1__* target; } ;
struct TYPE_2__ {int target_id; } ;


 int VAR_0 ;

target_id_t
FUNC_0(struct cam_path *VAR_1)
{
 if (VAR_1->target != ((void*)0))
  return (VAR_1->target->target_id);
 else
  return (VAR_0);
}
