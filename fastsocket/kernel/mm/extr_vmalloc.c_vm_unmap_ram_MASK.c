
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned long) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_1 (void const*,unsigned long) ;
 int FUNC_2 (unsigned long) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (void const*,unsigned long) ;
 int FUNC_5 (unsigned long,unsigned long) ;

void FUNC_6(const void *VAR_5, unsigned int VAR_6)
{
 unsigned long VAR_7 = VAR_6 << VAR_0;
 unsigned long VAR_8 = (unsigned long)VAR_5;

 FUNC_0(!VAR_8);
 FUNC_0(VAR_8 < VAR_3);
 FUNC_0(VAR_8 > VAR_2);
 FUNC_0(VAR_8 & (VAR_1-1));

 FUNC_1(VAR_5, VAR_7);
 FUNC_5(VAR_8, VAR_8+VAR_7);

 if (FUNC_3(VAR_6 <= VAR_4))
  FUNC_4(VAR_5, VAR_7);
 else
  FUNC_2(VAR_8);
}
