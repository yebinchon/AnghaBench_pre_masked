
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vx_rmh {int LgCmd; int * Cmd; } ;
struct vx_pipe {int differed_type; int pcx_time; } ;
struct vx_core {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct vx_core*,int *,int *) ;

__attribute__((used)) static int FUNC_1(struct vx_core *VAR_8, struct vx_rmh *VAR_9,
    struct vx_pipe *VAR_10)
{

 if (! (VAR_10->differed_type & VAR_0))
  return 0;


 VAR_9->Cmd[0] |= VAR_4;


 FUNC_0(VAR_8, &VAR_10->pcx_time, &VAR_9->Cmd[1]);


 if (VAR_10->differed_type & VAR_2)
  VAR_9->Cmd[1] |= VAR_6 ;


 if (VAR_10->differed_type & VAR_1)
  VAR_9->Cmd[1] |= VAR_5;


 if (VAR_10->differed_type & VAR_3)
  VAR_9->Cmd[1] |= VAR_7;

 VAR_9->LgCmd += 2;
 return 2;
}
