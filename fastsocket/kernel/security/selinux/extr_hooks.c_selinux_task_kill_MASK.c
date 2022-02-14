
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct task_struct {int dummy; } ;
struct siginfo {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,int ,int ,scalar_t__,int *) ;
 int FUNC_1 (struct task_struct*,scalar_t__) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct task_struct*) ;

__attribute__((used)) static int FUNC_4(struct task_struct *VAR_2, struct siginfo *VAR_3,
    int VAR_4, u32 VAR_5)
{
 u32 VAR_6;
 int VAR_7;

 if (!VAR_4)
  VAR_6 = VAR_0;
 else
  VAR_6 = FUNC_2(VAR_4);
 if (VAR_5)
  VAR_7 = FUNC_0(VAR_5, FUNC_3(VAR_2),
      VAR_1, VAR_6, ((void*)0));
 else
  VAR_7 = FUNC_1(VAR_2, VAR_6);
 return VAR_7;
}
