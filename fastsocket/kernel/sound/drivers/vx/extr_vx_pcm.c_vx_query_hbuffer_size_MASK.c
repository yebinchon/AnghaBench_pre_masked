
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vx_rmh {int* Cmd; int* Stat; } ;
struct vx_pipe {int is_capture; int number; } ;
struct vx_core {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct vx_rmh*,int ) ;
 int FUNC_1 (struct vx_core*,struct vx_rmh*) ;
 int FUNC_2 (struct vx_rmh*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct vx_core *VAR_1, struct vx_pipe *VAR_2)
{
 int VAR_3;
 struct vx_rmh VAR_4;

 FUNC_0(&VAR_4, VAR_0);
 FUNC_2(&VAR_4, VAR_2->is_capture, VAR_2->number, 0);
 if (VAR_2->is_capture)
  VAR_4.Cmd[0] |= 0x00000001;
 VAR_3 = FUNC_1(VAR_1, &VAR_4);
 if (! VAR_3)
  VAR_3 = VAR_4.Stat[0] & 0xffff;
 return VAR_3;
}
