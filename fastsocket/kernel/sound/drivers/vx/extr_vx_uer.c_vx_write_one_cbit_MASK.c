
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vx_core {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 scalar_t__ FUNC_2 (struct vx_core*) ;
 int FUNC_3 (struct vx_core*,int ,int) ;
 int FUNC_4 (struct vx_core*,int ,int) ;

__attribute__((used)) static void FUNC_5(struct vx_core *VAR_3, int VAR_4, int VAR_5)
{
 unsigned long VAR_6;
 VAR_5 = !!VAR_5;
 FUNC_0(&VAR_3->lock, VAR_6);
 if (FUNC_2(VAR_3)) {
  FUNC_3(VAR_3, VAR_0, 0);
  FUNC_3(VAR_3, VAR_1, (VAR_5 << 7) | (VAR_4 & VAR_2));
 } else {
  FUNC_4(VAR_3, VAR_0, 0);
  FUNC_4(VAR_3, VAR_1, (VAR_5 << 7) | (VAR_4 & VAR_2));
 }
 FUNC_1(&VAR_3->lock, VAR_6);
}
