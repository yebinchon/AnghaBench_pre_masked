
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;

int
FUNC_1(const char * __restrict VAR_0,
    const char * __restrict VAR_1, size_t VAR_2)
{
 int VAR_3, VAR_4;

 VAR_3 = VAR_4 = 1;

 while (VAR_3 && VAR_4 && VAR_3 == VAR_4 && VAR_2 != 0) {
  VAR_3 = FUNC_0(*VAR_0++);
  VAR_4 = FUNC_0(*VAR_1++);
  VAR_2--;
 }

 return ((VAR_3 == VAR_4) ? 0 : ((VAR_3 > VAR_4) ? 1 : -1));
}
