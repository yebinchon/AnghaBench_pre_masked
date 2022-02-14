
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned long const*,int) ;
 int FUNC_1 (unsigned long const*,int,int) ;

__attribute__((used)) static int FUNC_2(const unsigned long *VAR_0, int VAR_1, int VAR_2)
{
 int VAR_3 = 0;

 if (VAR_1 >= 0 && VAR_1 < VAR_2) {
  int VAR_4;

  for (VAR_4 = FUNC_0(VAR_0, VAR_2);
       VAR_4 < VAR_2 && VAR_1 > 0;
       VAR_4 = FUNC_1(VAR_0, VAR_2, VAR_4 + 1))
        VAR_1--;
  if (VAR_4 < VAR_2 && VAR_1 == 0)
   VAR_3 = VAR_4;
 }

 return VAR_3;
}
