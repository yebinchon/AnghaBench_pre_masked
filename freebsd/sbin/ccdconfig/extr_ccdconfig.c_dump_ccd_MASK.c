
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int
FUNC_2(int VAR_0, char **VAR_1)
{
 int VAR_2, VAR_3;

 if (VAR_0 == 0) {
  VAR_3 = FUNC_0(-1);
 } else {
  VAR_3 = 0;
  for (VAR_2 = 0; VAR_3 == 0 && VAR_2 < VAR_0; VAR_2++)
   VAR_3 = FUNC_0(FUNC_1(VAR_1[VAR_2]));
 }
 return (VAR_3);
}
