
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sound_queue {int busy; int non_blocking; int open_queue; } ;
struct file {int f_mode; int f_flags; } ;
typedef int fmode_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct sound_queue*,int,int) ;
 int FUNC_3 (struct sound_queue*,struct file*,int) ;

__attribute__((used)) static int FUNC_4(struct sound_queue *VAR_4, struct file *VAR_5, fmode_t VAR_6,
      int VAR_7, int VAR_8)
{
 int VAR_9 = 0;

 if (VAR_5->f_mode & VAR_6) {
  if (VAR_4->busy) {
   return -VAR_0 ;

  }
  VAR_4->busy = 1;






  if (( VAR_9 = FUNC_2(VAR_4, VAR_7, VAR_8))) {



   VAR_4->busy = 0 ;

   return VAR_9;
  }

  VAR_4->non_blocking = VAR_5->f_flags & VAR_2;
 }
 return VAR_9;
}
