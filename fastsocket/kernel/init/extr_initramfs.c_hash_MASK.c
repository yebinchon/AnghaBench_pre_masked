
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline int FUNC_0(int VAR_0, int VAR_1, int VAR_2)
{
 unsigned long VAR_3 = VAR_2 + VAR_1 + (VAR_0 << 3);
 VAR_3 += VAR_3 >> 5;
 return VAR_3 & 31;
}
