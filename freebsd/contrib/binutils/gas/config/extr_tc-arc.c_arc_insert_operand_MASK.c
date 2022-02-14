
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arc_operand_value {int dummy; } ;
struct arc_operand {int bits; int flags; long (* insert ) (long,struct arc_operand const*,int,struct arc_operand_value const*,long,char const**) ;long shift; } ;
typedef scalar_t__ offsetT ;
typedef long arc_insn ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (int ,scalar_t__,scalar_t__,scalar_t__,char*,unsigned int) ;
 long FUNC_3 (long,struct arc_operand const*,int,struct arc_operand_value const*,long,char const**) ;

__attribute__((used)) static arc_insn
FUNC_4 (arc_insn VAR_3,
      const struct arc_operand *VAR_4,
      int VAR_5,
      const struct arc_operand_value *VAR_6,
      offsetT VAR_7,
      char *VAR_8,
      unsigned int VAR_9)
{
  if (VAR_4->bits != 32)
    {
      long VAR_10, VAR_11;
      offsetT VAR_12;

      if ((VAR_4->flags & VAR_1) != 0)
 {
   if ((VAR_4->flags & VAR_2) != 0)
     VAR_11 = (1 << VAR_4->bits) - 1;
   else
     VAR_11 = (1 << (VAR_4->bits - 1)) - 1;
   VAR_10 = - (1 << (VAR_4->bits - 1));
 }
      else
 {
   VAR_11 = (1 << VAR_4->bits) - 1;
   VAR_10 = 0;
 }

      if ((VAR_4->flags & VAR_0) != 0)
 VAR_12 = - VAR_7;
      else
 VAR_12 = VAR_7;

      if (VAR_12 < (offsetT) VAR_10 || VAR_12 > (offsetT) VAR_11)
 FUNC_2 (FUNC_0("operand"), VAR_12, (offsetT) VAR_10, (offsetT) VAR_11, VAR_8, VAR_9);
    }

  if (VAR_4->insert)
    {
      const char *VAR_13;

      VAR_13 = ((void*)0);
      VAR_3 = (*VAR_4->insert) (VAR_3, VAR_4, VAR_5, VAR_6, (long) VAR_7, &VAR_13);
      if (VAR_13 != (const char *) ((void*)0))
 FUNC_1 (VAR_13);
    }
  else
    VAR_3 |= (((long) VAR_7 & ((1 << VAR_4->bits) - 1))
      << VAR_4->shift);

  return VAR_3;
}
