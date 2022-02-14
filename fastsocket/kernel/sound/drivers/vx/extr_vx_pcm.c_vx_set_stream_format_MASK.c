
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vx_rmh {int* Cmd; size_t LgCmd; } ;
struct vx_pipe {int number; scalar_t__ is_capture; } ;
struct vx_core {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct vx_rmh*,int ) ;
 int FUNC_1 (struct vx_core*,struct vx_rmh*) ;
 int FUNC_2 (struct vx_core*,struct vx_rmh*,struct vx_pipe*) ;

__attribute__((used)) static int FUNC_3(struct vx_core *VAR_3, struct vx_pipe *VAR_4,
    unsigned int VAR_5)
{
 struct vx_rmh VAR_6;

 FUNC_0(&VAR_6, VAR_4->is_capture ?
      VAR_0 : VAR_1);
 VAR_6.Cmd[0] |= VAR_4->number << VAR_2;


 FUNC_2(VAR_3, &VAR_6, VAR_4);

 VAR_6.Cmd[VAR_6.LgCmd] = (VAR_5 & 0xFFFFFF00) >> 8;
 VAR_6.Cmd[VAR_6.LgCmd + 1] = (VAR_5 & 0xFF) << 16 ;
 VAR_6.LgCmd += 2;

 return FUNC_1(VAR_3, &VAR_6);
}
