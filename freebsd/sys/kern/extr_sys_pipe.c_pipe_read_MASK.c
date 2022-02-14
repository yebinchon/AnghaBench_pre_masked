
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int ;
struct uio {int uio_resid; } ;
struct ucred {int dummy; } ;
struct thread {int dummy; } ;
struct TYPE_4__ {scalar_t__ size; scalar_t__ cnt; int out; scalar_t__ in; int * buffer; } ;
struct TYPE_3__ {int cnt; int pos; int ms; } ;
struct pipe {scalar_t__ pipe_busy; int pipe_state; TYPE_2__ pipe_buffer; int pipe_atime; TYPE_1__ pipe_map; int pipe_pair; } ;
struct file {int f_flag; struct pipe* f_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct pipe*) ;
 int FUNC_1 (struct pipe*) ;
 int FUNC_2 (struct pipe*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (struct ucred*,int ) ;
 int VAR_13 ;
 int FUNC_4 (struct pipe*,int ,int,char*,int ) ;
 int FUNC_5 (struct pipe*,int) ;
 int VAR_14 ;
 int FUNC_6 (struct pipe*) ;
 int FUNC_7 (struct pipe*,scalar_t__) ;
 int FUNC_8 (struct pipe*) ;
 int FUNC_9 (int *,int,struct uio*) ;
 int FUNC_10 (int ,int,int,struct uio*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct pipe*) ;

__attribute__((used)) static int
FUNC_13(struct file *VAR_15, struct uio *VAR_16, struct ucred *VAR_17,
    int VAR_18, struct thread *VAR_19)
{
 struct pipe *VAR_20;
 int VAR_21;
 int VAR_22 = 0;
 int VAR_23;

 VAR_20 = VAR_15->f_data;
 FUNC_0(VAR_20);
 ++VAR_20->pipe_busy;
 VAR_21 = FUNC_5(VAR_20, 1);
 if (VAR_21)
  goto unlocked_error;






 if (VAR_12 > (3 * VAR_13) / 4) {
  if (!(VAR_20->pipe_state & VAR_5) &&
   (VAR_20->pipe_buffer.size > VAR_11) &&
   (VAR_20->pipe_buffer.cnt <= VAR_11) &&
   (VAR_14 == 1)) {
   FUNC_2(VAR_20);
   FUNC_7(VAR_20, VAR_11);
   FUNC_0(VAR_20);
  }
 }

 while (VAR_16->uio_resid) {



  if (VAR_20->pipe_buffer.cnt > 0) {
   VAR_23 = VAR_20->pipe_buffer.size - VAR_20->pipe_buffer.out;
   if (VAR_23 > VAR_20->pipe_buffer.cnt)
    VAR_23 = VAR_20->pipe_buffer.cnt;
   if (VAR_23 > VAR_16->uio_resid)
    VAR_23 = VAR_16->uio_resid;

   FUNC_2(VAR_20);
   VAR_21 = FUNC_9(
       &VAR_20->pipe_buffer.buffer[VAR_20->pipe_buffer.out],
       VAR_23, VAR_16);
   FUNC_0(VAR_20);
   if (VAR_21)
    break;

   VAR_20->pipe_buffer.out += VAR_23;
   if (VAR_20->pipe_buffer.out >= VAR_20->pipe_buffer.size)
    VAR_20->pipe_buffer.out = 0;

   VAR_20->pipe_buffer.cnt -= VAR_23;






   if (VAR_20->pipe_buffer.cnt == 0) {
    VAR_20->pipe_buffer.in = 0;
    VAR_20->pipe_buffer.out = 0;
   }
   VAR_22 += VAR_23;




  } else if ((VAR_23 = VAR_20->pipe_map.cnt) != 0) {
   if (VAR_23 > VAR_16->uio_resid)
    VAR_23 = (u_int) VAR_16->uio_resid;
   FUNC_2(VAR_20);
   VAR_21 = FUNC_10(VAR_20->pipe_map.ms,
       VAR_20->pipe_map.pos, VAR_23, VAR_16);
   FUNC_0(VAR_20);
   if (VAR_21)
    break;
   VAR_22 += VAR_23;
   VAR_20->pipe_map.pos += VAR_23;
   VAR_20->pipe_map.cnt -= VAR_23;
   if (VAR_20->pipe_map.cnt == 0) {
    VAR_20->pipe_state &= ~VAR_9;
    FUNC_12(VAR_20);
   }

  } else {




   if (VAR_20->pipe_state & VAR_6)
    break;




   if (VAR_20->pipe_state & VAR_9) {
    VAR_20->pipe_state &= ~VAR_9;
    FUNC_12(VAR_20);
   }




   if (VAR_22 > 0)
    break;






   FUNC_8(VAR_20);





   if (VAR_15->f_flag & VAR_1) {
    VAR_21 = VAR_0;
   } else {
    VAR_20->pipe_state |= VAR_8;
    if ((VAR_21 = FUNC_4(VAR_20, FUNC_1(VAR_20),
        VAR_10 | VAR_3,
        "piperd", 0)) == 0)
     VAR_21 = FUNC_5(VAR_20, 1);
   }
   if (VAR_21)
    goto unlocked_error;
  }
 }



 FUNC_8(VAR_20);


 if (VAR_21 == 0)
  FUNC_11(&VAR_20->pipe_atime);
unlocked_error:
 --VAR_20->pipe_busy;




 if ((VAR_20->pipe_busy == 0) && (VAR_20->pipe_state & VAR_7)) {
  VAR_20->pipe_state &= ~(VAR_7|VAR_9);
  FUNC_12(VAR_20);
 } else if (VAR_20->pipe_buffer.cnt < VAR_2) {



  if (VAR_20->pipe_state & VAR_9) {
   VAR_20->pipe_state &= ~VAR_9;
   FUNC_12(VAR_20);
  }
 }

 if ((VAR_20->pipe_buffer.size - VAR_20->pipe_buffer.cnt) >= VAR_4)
  FUNC_6(VAR_20);

 FUNC_2(VAR_20);
 return (VAR_21);
}
