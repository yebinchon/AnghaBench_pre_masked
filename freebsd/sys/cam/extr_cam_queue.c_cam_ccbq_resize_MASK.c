
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int32_t ;
struct TYPE_2__ {int array_size; } ;
struct cam_ccbq {int dev_active; int dev_openings; int total_openings; TYPE_1__ queue; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;

u_int32_t
FUNC_3(struct cam_ccbq *VAR_1, int VAR_2)
{
 int VAR_3;

 VAR_3 = VAR_2 - (VAR_1->dev_active + VAR_1->dev_openings);
 VAR_1->total_openings += VAR_3;
 VAR_1->dev_openings += VAR_3;

 VAR_2 = FUNC_2(64, 1 << FUNC_1(VAR_2 + VAR_2 / 2));
 if (VAR_2 > VAR_1->queue.array_size)
  return (FUNC_0(&VAR_1->queue, VAR_2));
 else
  return (VAR_0);
}
