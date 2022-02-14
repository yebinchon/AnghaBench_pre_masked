
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_long ;
struct ucred {int dummy; } ;
struct thread {int dummy; } ;
struct TYPE_4__ {int cnt; } ;
struct TYPE_3__ {int cnt; } ;
struct pipe {int pipe_sigio; TYPE_2__ pipe_buffer; TYPE_1__ pipe_map; int pipe_state; int pipe_pair; } ;
struct file {int f_flag; struct pipe* f_data; } ;


 int VAR_0 ;





 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pipe*) ;
 int FUNC_1 (struct pipe*) ;


 int FUNC_2 (int *) ;
 int FUNC_3 (int,int *) ;
 int FUNC_4 (struct ucred*,int ,int ,void*) ;

__attribute__((used)) static int
FUNC_5(struct file *VAR_3, u_long VAR_4, void *VAR_5, struct ucred *VAR_6,
    struct thread *VAR_7)
{
 struct pipe *VAR_8 = VAR_3->f_data;
 int VAR_9;

 FUNC_0(VAR_8);
 VAR_9 = 0;
 switch (VAR_4) {

 case 132:
  break;

 case 134:
  if (*(int *)VAR_5) {
   VAR_8->pipe_state |= VAR_2;
  } else {
   VAR_8->pipe_state &= ~VAR_2;
  }
  break;

 case 131:
  if (!(VAR_3->f_flag & VAR_1)) {
   *(int *)VAR_5 = 0;
   FUNC_1(VAR_8);
   return (0);
  }
  if (VAR_8->pipe_map.cnt != 0)
   *(int *)VAR_5 = VAR_8->pipe_map.cnt;
  else
   *(int *)VAR_5 = VAR_8->pipe_buffer.cnt;
  break;

 case 130:
  FUNC_1(VAR_8);
  VAR_9 = FUNC_3(*(int *)VAR_5, &VAR_8->pipe_sigio);
  goto out_unlocked;

 case 133:
  *(int *)VAR_5 = FUNC_2(&VAR_8->pipe_sigio);
  break;


 case 128:
  FUNC_1(VAR_8);
  VAR_9 = FUNC_3(-(*(int *)VAR_5), &VAR_8->pipe_sigio);
  goto out_unlocked;


 case 129:
  *(int *)VAR_5 = -FUNC_2(&VAR_8->pipe_sigio);
  break;

 default:
  VAR_9 = VAR_0;
  break;
 }
 FUNC_1(VAR_8);
out_unlocked:
 return (VAR_9);
}
