
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ set_el_t ;
typedef scalar_t__* reserv_sets_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static int
FUNC_1 (reserv_sets_t VAR_1, reserv_sets_t VAR_2)
{
  int VAR_3;
  set_el_t *VAR_4;
  set_el_t *VAR_5;

  FUNC_0 (VAR_1 && VAR_2);
  VAR_3 = VAR_0;
  VAR_4 = VAR_1;
  VAR_5 = VAR_2;
  while (VAR_3 != 0 && *VAR_4 == *VAR_5)
    {
      VAR_3--;
      VAR_4++;
      VAR_5++;
    }
  if (VAR_3 == 0)
    return 0;
  else if (*VAR_4 < *VAR_5)
    return -1;
  else
    return 1;
}
