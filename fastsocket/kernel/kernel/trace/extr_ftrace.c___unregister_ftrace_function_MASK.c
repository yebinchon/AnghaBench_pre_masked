
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ftrace_ops {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int * VAR_8 ;
 int VAR_9 ;
 int * VAR_10 ;
 struct ftrace_ops VAR_11 ;
 int FUNC_2 (int **,struct ftrace_ops*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;

__attribute__((used)) static int FUNC_5(struct ftrace_ops *VAR_12)
{
 int VAR_13;

 if (VAR_6)
  return -VAR_2;

 if (FUNC_1(!(VAR_12->flags & VAR_4)))
  return -VAR_0;

 if (FUNC_0(VAR_12 == &VAR_11))
  return -VAR_1;

 if (VAR_12->flags & VAR_5) {
  VAR_13 = FUNC_2(&VAR_8, VAR_12);
  if (!VAR_13 && VAR_8 == &VAR_9)
   VAR_13 = FUNC_2(&VAR_10, &VAR_11);
  if (!VAR_13)
   VAR_12->flags &= ~VAR_4;
 } else
  VAR_13 = FUNC_2(&VAR_10, VAR_12);

 if (VAR_13 < 0)
  return VAR_13;

 if (VAR_7)
  FUNC_4();





 if (VAR_12->flags & VAR_3)
  FUNC_3();

 return 0;
}
