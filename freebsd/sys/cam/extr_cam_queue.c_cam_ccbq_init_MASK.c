
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cam_ccbq {int total_openings; int dev_openings; int queue; } ;


 int FUNC_0 (struct cam_ccbq*,int) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int) ;

int
FUNC_4(struct cam_ccbq *VAR_0, int VAR_1)
{
 FUNC_0(VAR_0, sizeof(*VAR_0));
 if (FUNC_1(&VAR_0->queue,
     FUNC_3(64, 1 << FUNC_2(VAR_1 + VAR_1 / 2))) != 0)
  return (1);
 VAR_0->total_openings = VAR_1;
 VAR_0->dev_openings = VAR_1;
 return (0);
}
