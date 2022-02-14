
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int set_el_t ;
typedef int* reserv_sets_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1 (reserv_sets_t VAR_1, reserv_sets_t VAR_2,
  reserv_sets_t VAR_3)
{
  set_el_t *VAR_4;
  set_el_t *VAR_5;
  set_el_t *VAR_6;

  FUNC_0 (VAR_1 && VAR_2 && VAR_3);
  for (VAR_4 = VAR_2, VAR_5 = VAR_3, VAR_6 = VAR_1;
       VAR_4 < VAR_2 + VAR_0;
       VAR_4++, VAR_5++, VAR_6++)
    *VAR_6 = *VAR_4 & *VAR_5;
}
