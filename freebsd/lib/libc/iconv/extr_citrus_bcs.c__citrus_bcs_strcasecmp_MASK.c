
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;

int
FUNC_1(const char * __restrict VAR_0,
    const char * __restrict VAR_1)
{
 int VAR_2, VAR_3;

 VAR_2 = VAR_3 = 1;

 while (VAR_2 && VAR_3 && VAR_2 == VAR_3) {
  VAR_2 = FUNC_0(*VAR_0++);
  VAR_3 = FUNC_0(*VAR_1++);
 }

 return ((VAR_2 == VAR_3) ? 0 : ((VAR_2 > VAR_3) ? 1 : -1));
}
