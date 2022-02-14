
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (unsigned long) ;

int FUNC_2(unsigned int VAR_0, unsigned int VAR_1,
      unsigned long VAR_2,
      unsigned long VAR_3)
{
 FUNC_0(!FUNC_1(VAR_3));

 VAR_2 = (VAR_2 + VAR_0) & (VAR_3 - 1);
 return VAR_2 + VAR_1 > VAR_3;
}
