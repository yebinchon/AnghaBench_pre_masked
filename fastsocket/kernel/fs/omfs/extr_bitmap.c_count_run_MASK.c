
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned long*,int,int) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static int FUNC_2(unsigned long **VAR_0, int VAR_1,
  int VAR_2, int VAR_3, int VAR_4)
{
 int VAR_5 = 0;
 int VAR_6;

 for (; VAR_2 > 0; VAR_2--, VAR_0++) {
  VAR_6 = FUNC_0(*VAR_0, VAR_1, VAR_3);
  VAR_5 += VAR_6 - VAR_3;

  if (VAR_6 < VAR_1 || VAR_5 > VAR_4)
   return FUNC_1(VAR_5, VAR_4);

  VAR_3 = 0;
 }
 return FUNC_1(VAR_5, VAR_4);
}
