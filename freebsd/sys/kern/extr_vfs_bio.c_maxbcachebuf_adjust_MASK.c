
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int) ;

__attribute__((used)) static void
FUNC_1(void)
{
 int VAR_5;




 VAR_5 = 2;
 while (VAR_5 * 2 <= VAR_4)
  VAR_5 *= 2;
 VAR_4 = VAR_5;
 if (VAR_4 < VAR_1)
  VAR_4 = VAR_1;
 if (VAR_4 > VAR_2)
  VAR_4 = VAR_2;
 if (VAR_3 != 0 && VAR_4 != VAR_0)
  FUNC_0("maxbcachebuf=%d\n", VAR_4);
}
