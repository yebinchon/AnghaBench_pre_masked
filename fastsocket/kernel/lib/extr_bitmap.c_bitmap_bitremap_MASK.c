
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned long const*,int,int) ;
 int FUNC_1 (unsigned long const*,int,int) ;
 int FUNC_2 (unsigned long const*,int) ;

int FUNC_3(int VAR_0, const unsigned long *VAR_1,
    const unsigned long *VAR_2, int VAR_3)
{
 int VAR_4 = FUNC_2(VAR_2, VAR_3);
 int VAR_5 = FUNC_1(VAR_1, VAR_0, VAR_3);
 if (VAR_5 < 0 || VAR_4 == 0)
  return VAR_0;
 else
  return FUNC_0(VAR_2, VAR_5 % VAR_4, VAR_3);
}
