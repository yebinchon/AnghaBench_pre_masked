
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct uio {int uio_resid; scalar_t__ uio_segflg; TYPE_1__* uio_iov; } ;
struct ucred {int dummy; } ;
struct thread {int dummy; } ;
struct TYPE_6__ {int size; int cnt; int in; int * buffer; } ;
struct TYPE_5__ {scalar_t__ cnt; } ;
struct pipe {scalar_t__ pipe_present; int pipe_state; scalar_t__ pipe_busy; TYPE_3__ pipe_buffer; int pipe_mtime; TYPE_2__ pipe_map; int pipe_pair; } ;
struct file {int f_flag; struct pipe* f_data; } ;
typedef int ssize_t ;
struct TYPE_4__ {int iov_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,char*) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct pipe*) ;
 int VAR_10 ;
 int FUNC_2 (struct pipe*) ;
 struct pipe* FUNC_3 (struct pipe*) ;
 int FUNC_4 (struct pipe*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int FUNC_5 (struct ucred*,int ) ;
 int FUNC_6 (int,int) ;
 int VAR_18 ;
 int FUNC_7 (struct pipe*,int ,int,char*,int ) ;
 int FUNC_8 (struct pipe*,struct uio*) ;
 int FUNC_9 (struct pipe*,int) ;
 int VAR_19 ;
 int FUNC_10 (struct pipe*) ;
 int FUNC_11 (struct pipe*,int) ;
 int FUNC_12 (struct pipe*) ;
 int FUNC_13 (int *,int,struct uio*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (struct pipe*) ;

__attribute__((used)) static int
FUNC_16(struct file *VAR_20, struct uio *VAR_21, struct ucred *VAR_22,
    int VAR_23, struct thread *VAR_24)
{
 int VAR_25 = 0;
 int VAR_26;
 ssize_t VAR_27;
 struct pipe *VAR_28, *VAR_29;

 VAR_29 = VAR_20->f_data;
 VAR_28 = FUNC_3(VAR_29);
 FUNC_1(VAR_29);
 VAR_25 = FUNC_9(VAR_28, 1);
 if (VAR_25) {
  FUNC_4(VAR_29);
  return (VAR_25);
 }



 if (VAR_28->pipe_present != VAR_6 ||
     (VAR_28->pipe_state & VAR_9)) {
  FUNC_12(VAR_28);
  FUNC_4(VAR_29);
  return (VAR_3);
 }
 ++VAR_28->pipe_busy;


 VAR_26 = FUNC_6(VAR_15, VAR_28->pipe_buffer.size);
 while (VAR_26 < VAR_28->pipe_buffer.cnt + VAR_21->uio_resid) {
  if (VAR_19 != 1)
   break;
  if (VAR_17 > VAR_18 / 2)
   break;
  if (VAR_26 == VAR_0)
   break;
  VAR_26 = VAR_26 * 2;
 }


 if ((VAR_17 > (3 * VAR_18) / 4) &&
  (VAR_28->pipe_buffer.size > VAR_15) &&
  (VAR_28->pipe_buffer.cnt <= VAR_15) &&
  (VAR_19 == 1))
  VAR_26 = VAR_15;


 if ((VAR_26 != VAR_28->pipe_buffer.size) &&
  ((VAR_28->pipe_state & VAR_8) == 0)) {
  FUNC_4(VAR_28);
  FUNC_11(VAR_28, VAR_26);
  FUNC_1(VAR_28);
 }
 if (VAR_28->pipe_buffer.size == 0) {




  VAR_25 = VAR_2;
  --VAR_28->pipe_busy;
  FUNC_12(VAR_28);
  FUNC_4(VAR_28);
  return (VAR_25);
 }

 FUNC_12(VAR_28);

 VAR_27 = VAR_21->uio_resid;

 while (VAR_21->uio_resid) {
  int VAR_30;

  FUNC_9(VAR_28, 0);
  if (VAR_28->pipe_state & VAR_9) {
   FUNC_12(VAR_28);
   VAR_25 = VAR_3;
   break;
  }
  if (VAR_21->uio_segflg == VAR_16 &&
      VAR_21->uio_iov->iov_len >= VAR_10 &&
      VAR_28->pipe_buffer.size >= VAR_10 &&
      (VAR_20->f_flag & VAR_4) == 0) {
   FUNC_12(VAR_28);
   VAR_25 = FUNC_8(VAR_28, VAR_21);
   if (VAR_25)
    break;
   continue;
  }
  if (VAR_28->pipe_map.cnt != 0) {
   if (VAR_28->pipe_state & VAR_12) {
    VAR_28->pipe_state &= ~VAR_12;
    FUNC_15(VAR_28);
   }
   FUNC_10(VAR_28);
   VAR_28->pipe_state |= VAR_13;
   FUNC_12(VAR_28);
   VAR_25 = FUNC_7(VAR_28, FUNC_2(VAR_29), VAR_14 | VAR_5,
       "pipbww", 0);
   if (VAR_25)
    break;
   else
    continue;
  }

  VAR_30 = VAR_28->pipe_buffer.size - VAR_28->pipe_buffer.cnt;


  if ((VAR_30 < VAR_21->uio_resid) && (VAR_27 <= VAR_7))
   VAR_30 = 0;

  if (VAR_30 > 0) {
   int VAR_31;
   int VAR_32;





   if (VAR_30 > VAR_21->uio_resid)
    VAR_31 = VAR_21->uio_resid;
   else
    VAR_31 = VAR_30;







   VAR_32 = VAR_28->pipe_buffer.size -
    VAR_28->pipe_buffer.in;
   if (VAR_32 > VAR_31)
    VAR_32 = VAR_31;



   FUNC_4(VAR_29);
   VAR_25 = FUNC_13(&VAR_28->pipe_buffer.buffer[VAR_28->pipe_buffer.in],
     VAR_32, VAR_21);
   FUNC_1(VAR_29);

   if (VAR_25 == 0 && VAR_32 < VAR_31) {
    FUNC_0(VAR_28->pipe_buffer.in + VAR_32 ==
     VAR_28->pipe_buffer.size,
     ("Pipe buffer wraparound disappeared"));






    FUNC_4(VAR_29);
    VAR_25 = FUNC_13(
        &VAR_28->pipe_buffer.buffer[0],
        VAR_31 - VAR_32, VAR_21);
    FUNC_1(VAR_29);
   }
   if (VAR_25 == 0) {
    VAR_28->pipe_buffer.in += VAR_31;
    if (VAR_28->pipe_buffer.in >=
        VAR_28->pipe_buffer.size) {
     FUNC_0(VAR_28->pipe_buffer.in ==
      VAR_31 - VAR_32 +
      VAR_28->pipe_buffer.size,
      ("Expected wraparound bad"));
     VAR_28->pipe_buffer.in = VAR_31 - VAR_32;
    }

    VAR_28->pipe_buffer.cnt += VAR_31;
    FUNC_0(VAR_28->pipe_buffer.cnt <=
     VAR_28->pipe_buffer.size,
     ("Pipe buffer overflow"));
   }
   FUNC_12(VAR_28);
   if (VAR_25 != 0)
    break;
  } else {



   if (VAR_28->pipe_state & VAR_12) {
    VAR_28->pipe_state &= ~VAR_12;
    FUNC_15(VAR_28);
   }




   if (VAR_20->f_flag & VAR_4) {
    VAR_25 = VAR_1;
    FUNC_12(VAR_28);
    break;
   }





   FUNC_10(VAR_28);

   VAR_28->pipe_state |= VAR_13;
   FUNC_12(VAR_28);
   VAR_25 = FUNC_7(VAR_28, FUNC_2(VAR_29),
       VAR_14 | VAR_5, "pipewr", 0);
   if (VAR_25 != 0)
    break;
  }
 }

 FUNC_9(VAR_28, 0);
 --VAR_28->pipe_busy;

 if ((VAR_28->pipe_busy == 0) && (VAR_28->pipe_state & VAR_11)) {
  VAR_28->pipe_state &= ~(VAR_11 | VAR_12);
  FUNC_15(VAR_28);
 } else if (VAR_28->pipe_buffer.cnt > 0) {




  if (VAR_28->pipe_state & VAR_12) {
   VAR_28->pipe_state &= ~VAR_12;
   FUNC_15(VAR_28);
  }
 }







 if (VAR_21->uio_resid != VAR_27 && VAR_25 == VAR_3)
  VAR_25 = 0;

 if (VAR_25 == 0)
  FUNC_14(&VAR_28->pipe_mtime);





 if (VAR_28->pipe_buffer.cnt)
  FUNC_10(VAR_28);

 FUNC_12(VAR_28);
 FUNC_4(VAR_29);
 return (VAR_25);
}
