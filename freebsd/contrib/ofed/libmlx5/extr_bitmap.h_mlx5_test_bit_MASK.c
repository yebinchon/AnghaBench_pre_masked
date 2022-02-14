
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;

__attribute__((used)) static inline int FUNC_0(unsigned int VAR_1, const unsigned long *VAR_2)
{
 return !!(VAR_2[(VAR_1 / VAR_0)] & (1 << (VAR_1 % VAR_0)));
}
