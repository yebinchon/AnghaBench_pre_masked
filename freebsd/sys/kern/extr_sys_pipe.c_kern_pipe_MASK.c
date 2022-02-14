
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct pipe {int dummy; } ;
struct pipepair {struct pipe pp_wpipe; struct pipe pp_rpipe; } ;
struct filecaps {int dummy; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct thread*,struct file**,int*,int,struct filecaps*) ;
 int FUNC_1 (struct thread*,struct file*,int) ;
 int FUNC_2 (struct file*,struct thread*) ;
 int FUNC_3 (struct file*,int,int ,struct pipe*,int *) ;
 int FUNC_4 (struct thread*,struct pipepair**) ;
 int FUNC_5 (struct pipe*) ;
 int VAR_5 ;

int
FUNC_6(struct thread *VAR_6, int VAR_7[2], int VAR_8, struct filecaps *VAR_9,
    struct filecaps *VAR_10)
{
 struct file *VAR_11, *VAR_12;
 struct pipe *VAR_13, *VAR_14;
 struct pipepair *VAR_15;
 int VAR_16, VAR_17, VAR_18;

 FUNC_4(VAR_6, &VAR_15);
 VAR_13 = &VAR_15->pp_rpipe;
 VAR_14 = &VAR_15->pp_wpipe;
 VAR_18 = FUNC_0(VAR_6, &VAR_11, &VAR_16, VAR_8, VAR_9);
 if (VAR_18) {
  FUNC_5(VAR_13);
  FUNC_5(VAR_14);
  return (VAR_18);
 }

 VAR_7[0] = VAR_16;

 VAR_17 = VAR_2 | VAR_3;
 if ((VAR_8 & VAR_4) != 0)
  VAR_17 |= VAR_1;







 FUNC_3(VAR_11, VAR_17, VAR_0, VAR_13, &VAR_5);
 VAR_18 = FUNC_0(VAR_6, &VAR_12, &VAR_16, VAR_8, VAR_10);
 if (VAR_18) {
  FUNC_1(VAR_6, VAR_11, VAR_7[0]);
  FUNC_2(VAR_11, VAR_6);

  FUNC_5(VAR_14);
  return (VAR_18);
 }

 FUNC_3(VAR_12, VAR_17, VAR_0, VAR_14, &VAR_5);
 FUNC_2(VAR_12, VAR_6);
 VAR_7[1] = VAR_16;
 FUNC_2(VAR_11, VAR_6);

 return (0);
}
