
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 unsigned long long FUNC_0 (int ) ;

__attribute__((used)) static bool FUNC_1(unsigned *VAR_1, unsigned *VAR_2) {




  __asm__(".byte 0x0f, 0x01, 0xd0" : "=a"(*VAR_1), "=d"(*VAR_2) : "c"(0));
  return 0;
}
