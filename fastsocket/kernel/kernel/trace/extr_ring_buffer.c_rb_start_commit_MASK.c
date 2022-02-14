
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ring_buffer_per_cpu {int commits; int committing; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct ring_buffer_per_cpu *VAR_0)
{
 FUNC_0(&VAR_0->committing);
 FUNC_0(&VAR_0->commits);
}
