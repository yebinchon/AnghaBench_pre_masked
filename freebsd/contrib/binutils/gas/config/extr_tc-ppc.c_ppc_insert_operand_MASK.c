
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct powerpc_operand {long bitm; int flags; unsigned long (* insert ) (unsigned long,long,int ,char const**) ;long shift; } ;
typedef long offsetT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,long,long,long,char*,unsigned int) ;
 int FUNC_2 (char*,unsigned int,char*,char const*) ;
 int VAR_4 ;
 unsigned long FUNC_3 (unsigned long,long,int ,char const**) ;

__attribute__((used)) static unsigned long
FUNC_4 (unsigned long VAR_5,
      const struct powerpc_operand *VAR_6,
      offsetT VAR_7,
      char *VAR_8,
      unsigned int VAR_9)
{
  long VAR_10, VAR_11, VAR_12;

  VAR_11 = VAR_6->bitm;
  VAR_12 = VAR_11 & -VAR_11;
  VAR_10 = 0;

  if ((VAR_6->flags & VAR_2) != 0)
    {
      if ((VAR_6->flags & VAR_3) == 0)
 VAR_11 = (VAR_11 >> 1) & -VAR_12;
      VAR_10 = ~VAR_11 & -VAR_12;
    }

  if ((VAR_6->flags & VAR_1) != 0)
    VAR_11++;

  if ((VAR_6->flags & VAR_0) != 0)
    {
      long VAR_13 = VAR_10;
      VAR_10 = -VAR_11;
      VAR_11 = -VAR_13;
    }

  if (VAR_10 <= VAR_11)
    {





      if (VAR_7 > VAR_11
   && (offsetT) (VAR_7 - 0x80000000 - 0x80000000) >= VAR_10
   && (offsetT) (VAR_7 - 0x80000000 - 0x80000000) <= VAR_11
   && ((VAR_7 - 0x80000000 - 0x80000000) & (VAR_12 - 1)) == 0)
 VAR_7 = VAR_7 - 0x80000000 - 0x80000000;



      else if (VAR_7 < VAR_10
        && (offsetT) (VAR_7 + 0x80000000 + 0x80000000) >= VAR_10
        && (offsetT) (VAR_7 + 0x80000000 + 0x80000000) <= VAR_11
        && ((VAR_7 + 0x80000000 + 0x80000000) & (VAR_12 - 1)) == 0)
 VAR_7 = VAR_7 + 0x80000000 + 0x80000000;

      else if (VAR_7 < VAR_10
        || VAR_7 > VAR_11
        || (VAR_7 & (VAR_12 - 1)) != 0)
 FUNC_1 (FUNC_0("operand"), VAR_7, VAR_10, VAR_11, VAR_8, VAR_9);
    }

  if (VAR_6->insert)
    {
      const char *VAR_14;

      VAR_14 = ((void*)0);
      VAR_5 = (*VAR_6->insert) (VAR_5, (long) VAR_7, VAR_4, &VAR_14);
      if (VAR_14 != (const char *) ((void*)0))
 FUNC_2 (VAR_8, VAR_9, "%s", VAR_14);
    }
  else
    VAR_5 |= ((long) VAR_7 & VAR_6->bitm) << VAR_6->shift;

  return VAR_5;
}
