
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vx_rmh {int dummy; } ;
struct vx_pipe {int number; } ;
struct vx_core {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vx_rmh*,int ) ;
 int FUNC_1 (struct vx_core*,struct vx_rmh*) ;
 int FUNC_2 (struct vx_core*,int ) ;
 int FUNC_3 (struct vx_rmh*,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct vx_core *VAR_2, struct vx_pipe *VAR_3)
{
 int VAR_4;
 struct vx_rmh VAR_5;


 FUNC_2(VAR_2, VAR_1);
 FUNC_0(&VAR_5, VAR_0);
 FUNC_3(&VAR_5, 0, VAR_3->number);
 VAR_4 = FUNC_1(VAR_2, &VAR_5);
 if (VAR_4 < 0)
  return VAR_4;

 FUNC_2(VAR_2, VAR_1);
 return 0;
}
