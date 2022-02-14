
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int set_el_t ;
typedef int * reserv_sets_t ;
struct TYPE_2__ {int units_num; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int FUNC_0 (int *,int ,int) ;
 int ** VAR_4 ;

__attribute__((used)) static reserv_sets_t
FUNC_1 (reserv_sets_t VAR_5)
{
  int VAR_6;
  int VAR_7;
  int VAR_8;
  int VAR_9;
  int VAR_10;

  VAR_7 = VAR_2 * sizeof (set_el_t);
  FUNC_0 (VAR_3, 0, VAR_7);
  for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++)
    if (((unsigned char *) VAR_5) [VAR_6])
      for (VAR_8 = VAR_0 - 1; VAR_8 >= 0; VAR_8--)
 if ((((unsigned char *) VAR_5) [VAR_6] >> VAR_8) & 1)
   {
     VAR_9 = VAR_6 * VAR_0 + VAR_8;
     if (VAR_9 >= VAR_1->units_num)
       return VAR_3;
     for (VAR_10 = 0; VAR_10 < VAR_2; VAR_10++)
       {
  VAR_3 [VAR_10]
    |= VAR_4 [VAR_9] [VAR_10];
       }
   }
  return VAR_3;
}
