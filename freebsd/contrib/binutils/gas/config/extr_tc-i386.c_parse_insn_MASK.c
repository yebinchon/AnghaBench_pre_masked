
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__ const* end; TYPE_2__ const* start; } ;
typedef TYPE_1__ templates ;
struct TYPE_7__ {int opcode_modifier; int cpu_flags; char const* name; int base_opcode; } ;
typedef TYPE_2__ const template ;
struct TYPE_8__ {int suffix; } ;



 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 char VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

 int VAR_12 ;
 char VAR_13 ;


 int VAR_14 ;
 int VAR_15 ;

 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,...) ;
 int FUNC_3 (int ,...) ;
 int VAR_16 ;
 int VAR_17 ;
 char* VAR_18 ;
 TYPE_1__* VAR_19 ;
 scalar_t__ VAR_20 ;
 TYPE_1__* FUNC_4 (int ,char*) ;
 TYPE_3__ VAR_21 ;
 int FUNC_5 (char*) ;
 scalar_t__ VAR_22 ;
 int FUNC_6 (char) ;
 char* VAR_23 ;
 int VAR_24 ;
 char const* FUNC_7 (char) ;

__attribute__((used)) static char *
FUNC_8 (char *VAR_25, char *VAR_26)
{
  char *VAR_27 = VAR_25;
  char *VAR_28 = VAR_27;
  char *VAR_29;
  int VAR_30;
  const template *VAR_31;


  const char *VAR_32 = ((void*)0);

  while (1)
    {
      VAR_29 = VAR_26;
      while ((*VAR_29 = VAR_23[(unsigned char) *VAR_27]) != 0)
 {
   VAR_29++;
   if (VAR_29 >= VAR_26 + VAR_12)
     {
       FUNC_2 (FUNC_0("no such instruction: `%s'"), VAR_28);
       return ((void*)0);
     }
   VAR_27++;
 }
      if (!FUNC_6 (*VAR_27)
   && *VAR_27 != VAR_7
   && (VAR_22
       || (*VAR_27 != VAR_13
    && *VAR_27 != ',')))
 {
   FUNC_2 (FUNC_0("invalid character %s in mnemonic"),
    FUNC_7 (*VAR_27));
   return ((void*)0);
 }
      if (VAR_28 == VAR_27)
 {
   if (!VAR_22 && *VAR_27 == VAR_13)
     FUNC_2 (FUNC_0("expecting prefix; got nothing"));
   else
     FUNC_2 (FUNC_0("expecting mnemonic; got nothing"));
   return ((void*)0);
 }


      VAR_19 = FUNC_4 (VAR_24, VAR_26);

      if (*VAR_27 != VAR_7
   && (!FUNC_6 (*VAR_27) || VAR_27[1] != VAR_7)
   && VAR_19
   && (VAR_19->start->opcode_modifier & VAR_8))
 {
   if (VAR_19->start->cpu_flags
       & (VAR_20 != VAR_1 ? VAR_4 : VAR_5))
     {
       FUNC_2 ((VAR_20 != VAR_1
         ? FUNC_0("`%s' is only supported in 64-bit mode")
         : FUNC_0("`%s' is not supported in 64-bit mode")),
        VAR_19->start->name);
       return ((void*)0);
     }


   if ((VAR_19->start->opcode_modifier & (VAR_14 | VAR_15))
       && VAR_20 != VAR_1
       && (((VAR_19->start->opcode_modifier & VAR_15) != 0)
    ^ (VAR_20 == VAR_0)))
     {
       FUNC_2 (FUNC_0("redundant %s prefix"),
        VAR_19->start->name);
       return ((void*)0);
     }

   switch (FUNC_1 (VAR_19->start->base_opcode))
     {
     case 0:
       return ((void*)0);
     case 2:
       VAR_32 = VAR_19->start->name;
       break;
     }

   VAR_28 = ++VAR_27;
 }
      else
 break;
    }

  if (!VAR_19)
    {

      switch (VAR_29[-1])
 {
 case 128:
   if (VAR_22 && (FUNC_5 (VAR_26) & 2))
     VAR_21.suffix = 129;
   else
 case 132:
 case 130:
   VAR_21.suffix = VAR_29[-1];
   VAR_29[-1] = '\0';
   VAR_19 = FUNC_4 (VAR_24, VAR_26);
   break;
 case 129:
 case 131:
   if (!VAR_22)
     {
       VAR_21.suffix = VAR_29[-1];
       VAR_29[-1] = '\0';
       VAR_19 = FUNC_4 (VAR_24, VAR_26);
     }
   break;


 case 'd':
   if (VAR_22)
     {
       if (FUNC_5 (VAR_26) == 1)
  VAR_21.suffix = 129;
       else
  VAR_21.suffix = 131;
       VAR_29[-1] = '\0';
       VAR_19 = FUNC_4 (VAR_24, VAR_26);
     }
   break;
 }
      if (!VAR_19)
 {
   FUNC_2 (FUNC_0("no such instruction: `%s'"), VAR_28);
   return ((void*)0);
 }
    }

  if (VAR_19->start->opcode_modifier & (VAR_10 | VAR_11))
    {






      if (VAR_27[0] == ',' && VAR_27[1] == 'p')
 {
   if (VAR_27[2] == 't')
     {
       if (!FUNC_1 (VAR_6))
  return ((void*)0);
       VAR_27 += 3;
     }
   else if (VAR_27[2] == 'n')
     {
       if (!FUNC_1 (VAR_2))
  return ((void*)0);
       VAR_27 += 3;
     }
 }
    }

  if (*VAR_27 == ',')
    {
      FUNC_2 (FUNC_0("invalid character %s in mnemonic"),
       FUNC_7 (*VAR_27));
      return ((void*)0);
    }


  VAR_30 = 0;
  for (VAR_31 = VAR_19->start; VAR_31 < VAR_19->end; ++VAR_31)
    {
      if (!((VAR_31->cpu_flags & ~(VAR_4 | VAR_5))
     & ~(VAR_16 & ~(VAR_4 | VAR_5))))
 VAR_30 |= 1;
      if (!(VAR_31->cpu_flags & (VAR_20 == VAR_1 ? VAR_5 : VAR_4)))
 VAR_30 |= 2;
    }
  if (!(VAR_30 & 2))
    {
      FUNC_2 (VAR_20 == VAR_1
       ? FUNC_0("`%s' is not supported in 64-bit mode")
       : FUNC_0("`%s' is only supported in 64-bit mode"),
       VAR_19->start->name);
      return ((void*)0);
    }
  if (!(VAR_30 & 1))
    {
      FUNC_3 (FUNC_0("`%s' is not supported on `%s%s'"),
        VAR_19->start->name,
        VAR_17,
        VAR_18 ? VAR_18 : "");
    }
  else if ((VAR_3 & ~VAR_16) && (VAR_20 != VAR_0))
    {
      FUNC_3 (FUNC_0("use .code16 to ensure correct addressing mode"));
    }


  if (VAR_32)
    {
      static templates VAR_33;

      for (VAR_31 = VAR_19->start; VAR_31 < VAR_19->end; ++VAR_31)
 if (VAR_31->opcode_modifier & VAR_9)
   break;
      if (VAR_31 >= VAR_19->end)
 {
   FUNC_2 (FUNC_0("expecting string instruction after `%s'"),
    VAR_32);
   return ((void*)0);
 }
      for (VAR_33.start = VAR_31; VAR_31 < VAR_19->end; ++VAR_31)
 if (!(VAR_31->opcode_modifier & VAR_9))
   break;
      VAR_33.end = VAR_31;
      VAR_19 = &VAR_33;
    }

  return VAR_27;
}
