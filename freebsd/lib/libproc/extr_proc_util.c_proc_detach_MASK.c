
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc_handle {int flags; } ;
typedef int pid_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct proc_handle*) ;
 int FUNC_2 (struct proc_handle*) ;
 scalar_t__ FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (int ,int*,int ) ;

int
FUNC_5(struct proc_handle *VAR_12, int VAR_13)
{
 int VAR_14;
 pid_t VAR_15;

 if (VAR_12 == ((void*)0))
  return (VAR_1);
 if (VAR_13 == VAR_4)
  return (VAR_1);
 if (VAR_13 == VAR_5) {
  FUNC_0(FUNC_2(VAR_12), VAR_8);
  goto free;
 }
 if ((VAR_12->flags & VAR_3) != 0)
  goto free;
 VAR_15 = FUNC_2(VAR_12);
 if (FUNC_3(VAR_6, VAR_15, 0, 0) != 0 && VAR_11 == VAR_2)
  goto free;
 if (VAR_11 == VAR_0) {
  FUNC_0(VAR_15, VAR_9);
  FUNC_4(VAR_15, &VAR_14, VAR_10);
  FUNC_3(VAR_6, VAR_15, 0, 0);
  FUNC_0(VAR_15, VAR_7);
 }
free:
 FUNC_1(VAR_12);
 return (0);
}
