
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int reg_flags; int reg_type; } ;
typedef TYPE_1__ reg_entry ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 TYPE_1__* FUNC_0 (int ,char*) ;
 TYPE_1__ const* VAR_11 ;
 scalar_t__* VAR_12 ;
 scalar_t__ FUNC_1 (char) ;
 int FUNC_2 (TYPE_1__ const*) ;
 int VAR_13 ;
 char* VAR_14 ;

__attribute__((used)) static const reg_entry *
FUNC_3 (char *VAR_15, char **VAR_16)
{
  char *VAR_17 = VAR_15;
  char *VAR_18;
  char VAR_19[VAR_3 + 1];
  const reg_entry *VAR_20;


  if (*VAR_17 == VAR_4)
    ++VAR_17;

  if (FUNC_1 (*VAR_17))
    ++VAR_17;

  VAR_18 = VAR_19;
  while ((*VAR_18++ = VAR_14[(unsigned char) *VAR_17]) != '\0')
    {
      if (VAR_18 >= VAR_19 + VAR_3)
 return (const reg_entry *) ((void*)0);
      VAR_17++;
    }




  if (VAR_8 && VAR_12[(unsigned char) *VAR_17])
    return (const reg_entry *) ((void*)0);

  *VAR_16 = VAR_17;

  VAR_20 = (const reg_entry *) FUNC_0 (VAR_13, VAR_19);


  if (VAR_20 == VAR_11 )
    {
      if (FUNC_1 (*VAR_17))
 ++VAR_17;
      if (*VAR_17 == '(')
 {
   ++VAR_17;
   if (FUNC_1 (*VAR_17))
     ++VAR_17;
   if (*VAR_17 >= '0' && *VAR_17 <= '7')
     {
       int VAR_21 = *VAR_17 - '0';
       ++VAR_17;
       if (FUNC_1 (*VAR_17))
  ++VAR_17;
       if (*VAR_17 == ')')
  {
    *VAR_16 = VAR_17 + 1;
    VAR_20 = FUNC_0 (VAR_13, "st(0)");
    FUNC_2 (VAR_20);
    return VAR_20 + VAR_21;
  }
     }

   return (const reg_entry *) ((void*)0);
 }
    }

  if (VAR_20 != ((void*)0)
      && ((VAR_20->reg_flags & (VAR_7 | VAR_6)) | (VAR_20->reg_type & VAR_5)) != 0
      && (VAR_20->reg_type != VAR_1 || !(VAR_9 & VAR_2))
      && VAR_10 != VAR_0)
    return (const reg_entry *) ((void*)0);

  return VAR_20;
}
