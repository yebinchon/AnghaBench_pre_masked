
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wavefront_command {int cmd; } ;


 struct wavefront_command* VAR_0 ;

__attribute__((used)) static struct wavefront_command *
FUNC_0 (int VAR_1)

{
 int VAR_2;

 for (VAR_2 = 0; VAR_0[VAR_2].cmd != 0; VAR_2++) {
  if (VAR_1 == VAR_0[VAR_2].cmd) {
   return &VAR_0[VAR_2];
  }
 }

 return ((void*)0);
}
