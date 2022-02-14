
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,unsigned int,int,int,int) ;
 int FUNC_1 (unsigned long const*,int) ;
 int FUNC_2 (unsigned long const*,int,int) ;

int FUNC_3(char *VAR_0, unsigned int VAR_1,
 const unsigned long *VAR_2, int VAR_3)
{
 int VAR_4 = 0;

 int VAR_5, VAR_6, VAR_7;

 if (VAR_1 == 0)
  return 0;
 VAR_0[0] = 0;

 VAR_6 = VAR_5 = FUNC_1(VAR_2, VAR_3);
 while (VAR_5 < VAR_3) {
  VAR_7 = VAR_5;
  VAR_5 = FUNC_2(VAR_2, VAR_3, VAR_5+1);
  if (VAR_5 >= VAR_3 || VAR_5 > VAR_7 + 1) {
   VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_6, VAR_7, VAR_4);
   VAR_6 = VAR_5;
  }
 }
 return VAR_4;
}
