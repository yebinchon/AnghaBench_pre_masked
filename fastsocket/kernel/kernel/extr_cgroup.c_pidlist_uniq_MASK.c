
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ pid_t ;


 scalar_t__ FUNC_0 (int,int) ;
 scalar_t__* FUNC_1 (scalar_t__*,int) ;

__attribute__((used)) static int FUNC_2(pid_t **VAR_0, int VAR_1)
{
 int VAR_2, VAR_3 = 1;
 pid_t *VAR_4 = *VAR_0;
 pid_t *VAR_5;





 if (VAR_1 == 0 || VAR_1 == 1)
  return VAR_1;

 for (VAR_2 = 1; VAR_2 < VAR_1; VAR_2++) {

  while (VAR_4[VAR_2] == VAR_4[VAR_2-1]) {
   VAR_2++;
   if (VAR_2 == VAR_1)
    goto after;
  }

  VAR_4[VAR_3] = VAR_4[VAR_2];
  VAR_3++;
 }
after:





 if (FUNC_0(VAR_1, VAR_3)) {
  VAR_5 = FUNC_1(VAR_4, VAR_3);
  if (VAR_5)
   *VAR_0 = VAR_5;
 }
 return VAR_3;
}
