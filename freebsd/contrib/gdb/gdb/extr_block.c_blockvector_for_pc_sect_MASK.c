
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symtab {int dummy; } ;
struct blockvector {int dummy; } ;
struct block {int dummy; } ;
struct bfd_section {int dummy; } ;
typedef scalar_t__ CORE_ADDR ;


 struct blockvector* FUNC_0 (struct symtab*) ;
 struct block* FUNC_1 (struct blockvector*,int) ;
 int FUNC_2 (struct blockvector*) ;
 scalar_t__ FUNC_3 (struct block*) ;
 scalar_t__ FUNC_4 (struct block*) ;
 struct symtab* FUNC_5 (scalar_t__,struct bfd_section*) ;

struct blockvector *
FUNC_6 (CORE_ADDR VAR_0, struct bfd_section *VAR_1,
    int *VAR_2, struct symtab *VAR_3)
{
  struct block *VAR_4;
  int VAR_5, VAR_6, VAR_7;
  struct blockvector *VAR_8;

  if (VAR_3 == 0)
    {

      VAR_3 = FUNC_5 (VAR_0, VAR_1);
      if (VAR_3 == 0)
 return 0;
    }

  VAR_8 = FUNC_0 (VAR_3);
  VAR_4 = FUNC_1 (VAR_8, 0);




  VAR_5 = 0;
  VAR_6 = FUNC_2 (VAR_8);

  while (VAR_6 - VAR_5 > 1)
    {
      VAR_7 = (VAR_6 - VAR_5 + 1) >> 1;
      VAR_4 = FUNC_1 (VAR_8, VAR_5 + VAR_7);
      if (FUNC_4 (VAR_4) <= VAR_0)
 VAR_5 += VAR_7;
      else
 VAR_6 = VAR_5 + VAR_7;
    }



  while (VAR_5 >= 0)
    {
      VAR_4 = FUNC_1 (VAR_8, VAR_5);
      if (FUNC_3 (VAR_4) > VAR_0)
 {
   if (VAR_2)
     *VAR_2 = VAR_5;
   return VAR_8;
 }
      VAR_5--;
    }
  return 0;
}
