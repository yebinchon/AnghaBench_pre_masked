
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vx_core {int lock; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (struct vx_core*,int) ;

int FUNC_3(struct vx_core *VAR_0, int VAR_1)
{
 unsigned long VAR_2;
 int VAR_3;

 FUNC_0(&VAR_0->lock, VAR_2);
 VAR_3 = FUNC_2(VAR_0, VAR_1);
 FUNC_1(&VAR_0->lock, VAR_2);
 return VAR_3;
}
