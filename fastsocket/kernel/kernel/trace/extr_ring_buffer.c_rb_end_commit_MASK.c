
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ring_buffer_per_cpu {int committing; int commits; } ;


 scalar_t__ FUNC_0 (struct ring_buffer_per_cpu*,int) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 unsigned long FUNC_4 (int *) ;
 int FUNC_5 (struct ring_buffer_per_cpu*) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(struct ring_buffer_per_cpu *VAR_0)
{
 unsigned long VAR_1;

 if (FUNC_0(VAR_0,
         !FUNC_4(&VAR_0->committing)))
  return;

 again:
 VAR_1 = FUNC_4(&VAR_0->commits);

 FUNC_1();
 if (FUNC_4(&VAR_0->committing) == 1)
  FUNC_5(VAR_0);

 FUNC_2(&VAR_0->committing);


 FUNC_1();






 if (FUNC_6(FUNC_4(&VAR_0->commits) != VAR_1) &&
     !FUNC_4(&VAR_0->committing)) {
  FUNC_3(&VAR_0->committing);
  goto again;
 }
}
