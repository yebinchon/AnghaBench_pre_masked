
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int set_el_t ;
typedef int* reserv_sets_t ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static unsigned
FUNC_0 (reserv_sets_t VAR_2)
{
  set_el_t VAR_3;
  unsigned VAR_4;
  int VAR_5, VAR_6;
  set_el_t *VAR_7;

  VAR_3 = 0;
  VAR_5 = VAR_1;
  VAR_7 = VAR_2;
  VAR_6 = 0;
  while (VAR_5 != 0)
    {
      VAR_5--;
      VAR_3 += ((*VAR_7 >> VAR_6)
       | (*VAR_7 << (sizeof (set_el_t) * VAR_0 - VAR_6)));
      VAR_6++;
      if (VAR_6 == sizeof (set_el_t) * VAR_0)
 VAR_6 = 0;
      VAR_7++;
    }
  if (sizeof (set_el_t) <= sizeof (unsigned))
    return VAR_3;
  VAR_4 = 0;
  for (VAR_6 = sizeof (set_el_t); VAR_6 > 0; VAR_6 -= sizeof (unsigned) - 1)
    {
      VAR_4 += (unsigned) VAR_3;
      VAR_3 >>= (sizeof (unsigned) - 1) * VAR_0;
    }
  return VAR_4;
}
