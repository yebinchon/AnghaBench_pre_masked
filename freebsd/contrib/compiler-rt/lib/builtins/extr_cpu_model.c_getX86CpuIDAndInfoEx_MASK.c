
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int*,unsigned int,unsigned int) ;

__attribute__((used)) static bool FUNC_1(unsigned VAR_0, unsigned VAR_1,
                                 unsigned *VAR_2, unsigned *VAR_3, unsigned *VAR_4,
                                 unsigned *VAR_5) {




  __asm__("movq\t%%rbx, %%rsi\n\t"
          "cpuid\n\t"
          "xchgq\t%%rbx, %%rsi\n\t"
          : "=a"(*VAR_2), "=S"(*VAR_3), "=c"(*VAR_4), "=d"(*VAR_5)
          : "a"(VAR_0), "c"(VAR_1));
  return 0;
}
