
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct alpha_operand {int bits; int flags; unsigned int (* insert ) (unsigned int,int,char const**) ;int shift; } ;
typedef int offsetT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (int ,int,int,int,char*,unsigned int) ;
 unsigned int FUNC_3 (unsigned int,int,char const**) ;

__attribute__((used)) static unsigned
FUNC_4 (unsigned VAR_2,
  const struct alpha_operand *VAR_3,
  offsetT VAR_4,
  char *VAR_5,
  unsigned VAR_6)
{
  if (VAR_3->bits != 32 && !(VAR_3->flags & VAR_0))
    {
      offsetT VAR_7, VAR_8;

      if (VAR_3->flags & VAR_1)
 {
   VAR_8 = (1 << (VAR_3->bits - 1)) - 1;
   VAR_7 = -(1 << (VAR_3->bits - 1));
 }
      else
 {
   VAR_8 = (1 << VAR_3->bits) - 1;
   VAR_7 = 0;
 }

      if (VAR_4 < VAR_7 || VAR_4 > VAR_8)
 FUNC_2 (FUNC_0("operand"), VAR_4, VAR_7, VAR_8, VAR_5, VAR_6);
    }

  if (VAR_3->insert)
    {
      const char *VAR_9 = ((void*)0);

      VAR_2 = (*VAR_3->insert) (VAR_2, VAR_4, &VAR_9);
      if (VAR_9)
 FUNC_1 (VAR_9);
    }
  else
    VAR_2 |= ((VAR_4 & ((1 << VAR_3->bits) - 1)) << VAR_3->shift);

  return VAR_2;
}
