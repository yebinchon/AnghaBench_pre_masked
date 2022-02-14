
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __u32 ;



__attribute__((used)) static inline int FUNC_0(int VAR_0, void *VAR_1)
{
 return *((__u32 *) VAR_1 + (VAR_0 >> 5)) & ((__u32) 1 << (VAR_0 & 31));
}
