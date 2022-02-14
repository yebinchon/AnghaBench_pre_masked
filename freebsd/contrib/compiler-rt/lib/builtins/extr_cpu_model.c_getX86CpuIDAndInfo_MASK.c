
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int*,unsigned int) ;

__attribute__((used)) static bool FUNC_1(unsigned VAR_0, unsigned *VAR_1, unsigned *VAR_2,
                               unsigned *VAR_3, unsigned *VAR_4) {




  __asm__("movq\t%%rbx, %%rsi\n\t"
          "cpuid\n\t"
          "xchgq\t%%rbx, %%rsi\n\t"
          : "=a"(*VAR_1), "=S"(*VAR_2), "=c"(*VAR_3), "=d"(*VAR_4)
          : "a"(VAR_0));
  return 0;
}
