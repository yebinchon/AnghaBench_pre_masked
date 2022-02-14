
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int set_el_t ;
typedef int* reserv_sets_t ;
typedef TYPE_1__* pattern_reserv_t ;
struct TYPE_6__ {int units_num; } ;
struct TYPE_5__ {int* reserv; struct TYPE_5__* next_pattern_reserv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_4__* VAR_3 ;
 int VAR_4 ;
 TYPE_1__** VAR_5 ;
 TYPE_1__** VAR_6 ;

__attribute__((used)) static int
FUNC_0 (reserv_sets_t VAR_7,
       reserv_sets_t VAR_8,
       int VAR_9)
{
  int VAR_10;
  int VAR_11;
  int VAR_12;
  int VAR_13;
  int VAR_14;
  pattern_reserv_t VAR_15;

  VAR_11 = VAR_4 * sizeof (set_el_t);
  for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++)
    if (((unsigned char *) VAR_8) [VAR_10])
      for (VAR_12 = VAR_0 - 1; VAR_12 >= 0; VAR_12--)
 if ((((unsigned char *) VAR_8) [VAR_10] >> VAR_12) & 1)
   {
     VAR_13 = VAR_10 * VAR_0 + VAR_12;
     if (VAR_13 >= VAR_3->units_num)
       break;
     for (VAR_15 = (VAR_9
          ? VAR_6 [VAR_13]
          : VAR_5 [VAR_13]);
   VAR_15 != ((void*)0);
   VAR_15 = VAR_15->next_pattern_reserv)
       {
  for (VAR_14 = 0; VAR_14 < VAR_4; VAR_14++)
    if ((VAR_7 [VAR_14] & VAR_15->reserv [VAR_14])
        != VAR_15->reserv [VAR_14]
        && VAR_15->reserv [VAR_14])
      break;
  if (VAR_14 >= VAR_4)
    return VAR_1;
       }
   }
  return VAR_2;
}
