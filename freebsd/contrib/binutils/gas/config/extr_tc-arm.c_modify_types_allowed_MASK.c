
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum neon_el_type { ____Placeholder_neon_el_type } neon_el_type ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int*,unsigned int*,unsigned int) ;
 int FUNC_1 (unsigned int,int*,unsigned int*) ;
 unsigned int FUNC_2 (int,unsigned int) ;

__attribute__((used)) static unsigned
FUNC_3 (unsigned VAR_2, unsigned VAR_3)
{
  unsigned VAR_4;
  enum neon_el_type VAR_5;
  unsigned VAR_6;
  int VAR_7;

  VAR_6 = 0;

  for (VAR_7 = 1; VAR_7 <= VAR_0; VAR_7 <<= 1)
    {
      if (FUNC_0 (&VAR_5, &VAR_4, VAR_2 & VAR_7) == VAR_1)
        {
          FUNC_1 (VAR_3, &VAR_5, &VAR_4);
          VAR_6 |= FUNC_2 (VAR_5, VAR_4);
        }
    }

  return VAR_6;
}
