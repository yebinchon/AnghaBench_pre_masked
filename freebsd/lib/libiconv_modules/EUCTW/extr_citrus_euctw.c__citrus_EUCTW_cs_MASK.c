
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;

__attribute__((used)) static __inline int
FUNC_0(unsigned int VAR_1)
{

 VAR_1 &= 0xff;

 return ((VAR_1 & 0x80) ? (VAR_1 == VAR_0 ? 2 : 1) : 0);
}
