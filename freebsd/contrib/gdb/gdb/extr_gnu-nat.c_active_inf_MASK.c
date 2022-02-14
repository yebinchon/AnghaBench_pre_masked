
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inf {int task; } ;


 struct inf* FUNC_0 () ;
 int FUNC_1 (char*) ;

__attribute__((used)) static struct inf *
FUNC_2 (void)
{
  struct inf *VAR_0 = FUNC_0 ();
  if (!VAR_0->task)
    FUNC_1 ("No current process.");
  return VAR_0;
}
