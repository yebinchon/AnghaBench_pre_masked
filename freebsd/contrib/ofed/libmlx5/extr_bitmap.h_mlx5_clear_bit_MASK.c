
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;

__attribute__((used)) static inline void FUNC_0(unsigned int VAR_1, unsigned long *VAR_2)
{
 VAR_2[(VAR_1 / VAR_0)] &= ~(1 << (VAR_1 % VAR_0));
}
