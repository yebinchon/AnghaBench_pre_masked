
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct octeon_device {int * instr_queue; } ;


 int FUNC_0 (struct octeon_device*,int ,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct octeon_device*,int ) ;

__attribute__((used)) static inline void
FUNC_3(struct octeon_device *VAR_0, volatile int *VAR_1)
{

 while (!(*VAR_1)) {
  FUNC_1(1);
  FUNC_0(VAR_0, VAR_0->instr_queue[0], 0);
  FUNC_2(VAR_0, 0);
 }
}
