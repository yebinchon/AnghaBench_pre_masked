
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline int FUNC_0(int VAR_0)
{
 int VAR_1 = 0;
 VAR_0 >>= 7;
 if (VAR_0 & 0xf0) {
  VAR_0 >>= 4;
  VAR_1 += 4;
 }
 if (VAR_0 & 0x0c) {
  VAR_0 >>= 2;
  VAR_1 += 2;
 }
 if (VAR_0 & 0x02)
  VAR_1 += 1;
 return VAR_1;
}
