
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct file {int f_mode; int f_flags; } ;
struct TYPE_2__ {int dsp_minor; int play_ndelay; int rec_ndelay; int mixer_minor; int flags; scalar_t__ nresets; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_1__ VAR_8 ;
 int FUNC_0 (struct file*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int ,int *) ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_9, struct file *VAR_10)
{
 int VAR_11 = FUNC_1(VAR_9);
 int VAR_12 = 0;

 if (VAR_11 == VAR_8.dsp_minor) {
  if ((VAR_10->f_mode & VAR_3 &&
       FUNC_4(VAR_5, &VAR_8.flags)) ||
      (VAR_10->f_mode & VAR_2 &&
       FUNC_4(VAR_4, &VAR_8.flags)))
   return -VAR_0;

  if ((VAR_12 = FUNC_0(VAR_10)) >= 0) {
   VAR_8.nresets = 0;
   if (VAR_10->f_mode & VAR_3) {
    FUNC_2();
    if (!FUNC_4(VAR_6, &VAR_8.flags))
     VAR_8.play_ndelay = (VAR_10->f_flags & VAR_7) ? 1 : 0;
    else
     VAR_8.play_ndelay = 0;
   }
   if (VAR_10->f_mode & VAR_2) {
    FUNC_3();
    VAR_8.rec_ndelay = (VAR_10->f_flags & VAR_7) ? 1 : 0;
   }
  }
 }
 else if (VAR_11 == VAR_8.mixer_minor) {

 } else
  VAR_12 = -VAR_1;

 return VAR_12;
}
