
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct task_struct {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,int ,int *) ;
 int FUNC_1 (struct task_struct*,unsigned int) ;
 int FUNC_2 (struct task_struct*,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (struct task_struct*) ;

__attribute__((used)) static int FUNC_5(struct task_struct *VAR_4,
         unsigned int VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_1(VAR_4, VAR_5);
 if (VAR_6)
  return VAR_6;

 if (VAR_5 == VAR_2) {
  u32 VAR_7 = FUNC_3();
  u32 VAR_8 = FUNC_4(VAR_4);
  return FUNC_0(VAR_7, VAR_8, VAR_3, VAR_0, ((void*)0));
 }

 return FUNC_2(VAR_4, VAR_1);
}
