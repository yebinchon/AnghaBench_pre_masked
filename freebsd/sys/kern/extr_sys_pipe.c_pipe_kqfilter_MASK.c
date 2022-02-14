
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int si_note; } ;
struct pipe {TYPE_2__ pipe_sel; TYPE_1__* pipe_peer; } ;
struct knote {int kn_filter; struct pipe* kn_hook; int * kn_fop; } ;
struct file {int f_flag; struct pipe* f_data; } ;
struct TYPE_3__ {int pipe_present; } ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct pipe*) ;
 struct pipe* FUNC_1 (struct pipe*) ;
 int FUNC_2 (struct pipe*) ;
 int FUNC_3 (int *,struct knote*,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int
FUNC_4(struct file *VAR_8, struct knote *VAR_9)
{
 struct pipe *VAR_10;






 if ((VAR_9->kn_filter == 129) && !(VAR_8->f_flag & VAR_2)) {
  VAR_9->kn_fop = &VAR_5;
  return (0);
 }
 if ((VAR_9->kn_filter == 128) && !(VAR_8->f_flag & VAR_3)) {
  VAR_9->kn_fop = &VAR_5;
  return (0);
 }
 VAR_10 = VAR_8->f_data;
 FUNC_0(VAR_10);
 switch (VAR_9->kn_filter) {
 case 129:
  VAR_9->kn_fop = &VAR_6;
  break;
 case 128:
  VAR_9->kn_fop = &VAR_7;
  if (VAR_10->pipe_peer->pipe_present != VAR_4) {

   FUNC_2(VAR_10);
   return (VAR_1);
  }
  VAR_10 = FUNC_1(VAR_10);
  break;
 default:
  FUNC_2(VAR_10);
  return (VAR_0);
 }

 VAR_9->kn_hook = VAR_10;
 FUNC_3(&VAR_10->pipe_sel.si_note, VAR_9, 1);
 FUNC_2(VAR_10);
 return (0);
}
