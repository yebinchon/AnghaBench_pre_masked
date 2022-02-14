
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*) ;

int
FUNC_1(const char *VAR_0) {
 int VAR_1, VAR_2, VAR_3;

 VAR_2 = FUNC_0(VAR_0);
 for (VAR_1 = 0, VAR_3 = 0; VAR_1 < VAR_2; VAR_1++) {

  if (VAR_0[VAR_1] == '.')
   VAR_3++;
 }


 if (VAR_0[0] == '*')
  if (VAR_3)
   VAR_3--;




 if (VAR_2 > 0 && VAR_0[VAR_2-1] != '.')
  VAR_3++;
 return (VAR_3);
}
