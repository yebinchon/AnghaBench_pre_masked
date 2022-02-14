
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;

__attribute__((used)) static inline
unsigned FUNC_0(unsigned VAR_1, unsigned VAR_2)
{
 unsigned VAR_3 = 0;

 if (VAR_1 != VAR_0 &&
     VAR_2 != VAR_0)
  VAR_3 = (VAR_1 > VAR_2)
   ? 0x1 << 1 : 0;

 return VAR_3;
}
