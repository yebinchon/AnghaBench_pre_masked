
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmd_info {int cmd; } ;


 struct cmd_info* VAR_0 ;

__attribute__((used)) static struct cmd_info *
FUNC_0 (int VAR_1)
{
 struct cmd_info *VAR_2;

 VAR_2 = VAR_0;
 while (VAR_2->cmd) {
  if (VAR_2->cmd == VAR_1)
   return (VAR_2);
  VAR_2++;
 }
 return (((void*)0));
}
