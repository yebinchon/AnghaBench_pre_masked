
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (char*,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct task_struct*) ;

__attribute__((used)) static int FUNC_4(struct task_struct *VAR_3, char *VAR_4, char **VAR_5)
{
 char *VAR_6;
 int VAR_7;

 if (FUNC_1(VAR_4, "current") != 0)
  return -VAR_0;

 VAR_6 = FUNC_0(FUNC_3(VAR_3), VAR_2);
 if (VAR_6 == ((void*)0))
  return -VAR_1;

 VAR_7 = FUNC_2(VAR_6);
 *VAR_5 = VAR_6;
 return VAR_7;
}
