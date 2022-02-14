
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ucred {int dummy; } ;
struct thread {int dummy; } ;
struct TYPE_4__ {scalar_t__ cnt; scalar_t__ size; } ;
struct TYPE_3__ {scalar_t__ cnt; } ;
struct pipe {scalar_t__ pipe_present; int pipe_state; scalar_t__ pipe_wgen; int pipe_sel; TYPE_2__ pipe_buffer; TYPE_1__ pipe_map; int pipe_pair; } ;
struct file {int f_flag; scalar_t__ f_pipegen; struct pipe* f_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct pipe*) ;
 int VAR_6 ;
 struct pipe* FUNC_1 (struct pipe*) ;
 int VAR_7 ;
 int FUNC_2 (struct pipe*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (struct ucred*,int ) ;
 int FUNC_5 (struct thread*,int *) ;

__attribute__((used)) static int
FUNC_6(struct file *VAR_16, int VAR_17, struct ucred *VAR_18,
    struct thread *VAR_19)
{
 struct pipe *VAR_20;
 struct pipe *VAR_21;
 int VAR_22, VAR_23;




 VAR_23 = 0;
 VAR_20 = VAR_16->f_data;
 VAR_21 = FUNC_1(VAR_20);
 FUNC_0(VAR_20);





 if (VAR_16->f_flag & VAR_0 && VAR_17 & (VAR_9 | VAR_14))
  if (VAR_20->pipe_map.cnt > 0 || VAR_20->pipe_buffer.cnt > 0)
   VAR_23 |= VAR_17 & (VAR_9 | VAR_14);

 if (VAR_16->f_flag & VAR_1 && VAR_17 & (VAR_11 | VAR_15))
  if (VAR_21->pipe_present != VAR_2 ||
      (VAR_21->pipe_state & VAR_5) ||
      ((VAR_21->pipe_state & VAR_4) == 0 &&
       ((VAR_21->pipe_buffer.size - VAR_21->pipe_buffer.cnt) >= VAR_3 ||
    VAR_21->pipe_buffer.size == 0)))
   VAR_23 |= VAR_17 & (VAR_11 | VAR_15);

 VAR_22 = VAR_17 &
     (VAR_9 | VAR_10 | VAR_12 | VAR_14 | VAR_13);
 if (VAR_20->pipe_state & VAR_6 && VAR_16->f_flag & VAR_0 && VAR_22 &&
     VAR_16->f_pipegen == VAR_20->pipe_wgen)
  VAR_17 |= VAR_10;

 if ((VAR_17 & VAR_10) == 0) {
  if (VAR_20->pipe_state & VAR_5) {
   VAR_23 |= (VAR_17 & (VAR_9 | VAR_14));
   if (VAR_21->pipe_present != VAR_2 ||
       (VAR_21->pipe_state & VAR_5))
    VAR_23 |= VAR_8;
  }
 }

 if (VAR_23 == 0) {
  if (VAR_16->f_flag & VAR_0 && VAR_17 & (VAR_9 | VAR_14)) {
   FUNC_5(VAR_19, &VAR_20->pipe_sel);
   if (FUNC_3(&VAR_20->pipe_sel))
    VAR_20->pipe_state |= VAR_7;
  }

  if (VAR_16->f_flag & VAR_1 && VAR_17 & (VAR_11 | VAR_15)) {
   FUNC_5(VAR_19, &VAR_21->pipe_sel);
   if (FUNC_3(&VAR_21->pipe_sel))
    VAR_21->pipe_state |= VAR_7;
  }
 }



 FUNC_2(VAR_20);

 return (VAR_23);
}
