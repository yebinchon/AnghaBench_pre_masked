
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_iterator {int iter_flags; } ;
struct inode {scalar_t__ i_private; } ;
struct file {int f_mode; int f_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct trace_iterator*) ;
 int VAR_2 ;
 int FUNC_1 (struct trace_iterator*) ;
 int VAR_3 ;
 int VAR_4 ;
 long VAR_5 ;
 struct trace_iterator* FUNC_2 (struct inode*,struct file*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int *,long) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_8, struct file *VAR_9)
{
 struct trace_iterator *VAR_10;
 int VAR_11 = 0;


 if ((VAR_9->f_mode & VAR_1) &&
     (VAR_9->f_flags & VAR_2)) {
  long VAR_12 = (long) VAR_8->i_private;

  if (VAR_12 == VAR_5)
   FUNC_4(&VAR_6);
  else
   FUNC_3(&VAR_6, VAR_12);
 }

 if (VAR_9->f_mode & VAR_0) {
  VAR_10 = FUNC_2(VAR_8, VAR_9);
  if (FUNC_0(VAR_10))
   VAR_11 = FUNC_1(VAR_10);
  else if (VAR_7 & VAR_4)
   VAR_10->iter_flags |= VAR_3;
 }
 return VAR_11;
}
