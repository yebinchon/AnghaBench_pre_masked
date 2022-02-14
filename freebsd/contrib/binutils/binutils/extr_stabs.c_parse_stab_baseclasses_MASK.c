
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stab_handle {int dummy; } ;
typedef enum debug_visibility { ____Placeholder_debug_visibility } debug_visibility ;
typedef scalar_t__ debug_type ;
typedef scalar_t__ debug_baseclass ;
typedef scalar_t__ bfd_vma ;
typedef int bfd_boolean ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (void*,scalar_t__,scalar_t__,int ,int) ;
 scalar_t__ FUNC_3 (char const**,int *) ;
 scalar_t__ FUNC_4 (void*,struct stab_handle*,char const*,char const**,scalar_t__**) ;
 int FUNC_5 (char const*,int ) ;
 scalar_t__ FUNC_6 (unsigned int) ;

__attribute__((used)) static bfd_boolean
FUNC_7 (void *VAR_7, struct stab_handle *VAR_8,
   const char **VAR_9, debug_baseclass **VAR_10)
{
  const char *VAR_11;
  unsigned int VAR_12, VAR_13;
  debug_baseclass *VAR_14;

  *VAR_10 = ((void*)0);

  VAR_11 = *VAR_9;

  if (**VAR_9 != '!')
    {

      return VAR_6;
    }
  ++*VAR_9;

  VAR_12 = (unsigned int) FUNC_3 (VAR_9, (bfd_boolean *) ((void*)0));

  if (**VAR_9 != ',')
    {
      FUNC_1 (VAR_11);
      return VAR_5;
    }
  ++*VAR_9;

  VAR_14 = (debug_baseclass *) FUNC_6 ((VAR_12 + 1) * sizeof (**VAR_10));

  for (VAR_13 = 0; VAR_13 < VAR_12; VAR_13++)
    {
      bfd_boolean VAR_15;
      enum debug_visibility VAR_16;
      bfd_vma VAR_17;
      debug_type VAR_18;

      switch (**VAR_9)
 {
 case '0':
   VAR_15 = VAR_5;
   break;
 case '1':
   VAR_15 = VAR_6;
   break;
 default:
   FUNC_5 (VAR_11, FUNC_0("unknown virtual character for baseclass"));
   VAR_15 = VAR_5;
   break;
 }
      ++*VAR_9;

      switch (**VAR_9)
 {
 case '0':
   VAR_16 = VAR_2;
   break;
 case '1':
   VAR_16 = VAR_3;
   break;
 case '2':
   VAR_16 = VAR_4;
   break;
 default:
   FUNC_5 (VAR_11, FUNC_0("unknown visibility character for baseclass"));
   VAR_16 = VAR_4;
   break;
 }
      ++*VAR_9;




      VAR_17 = FUNC_3 (VAR_9, (bfd_boolean *) ((void*)0));
      if (**VAR_9 != ',')
 {
   FUNC_1 (VAR_11);
   return VAR_5;
 }
      ++*VAR_9;

      VAR_18 = FUNC_4 (VAR_7, VAR_8, (const char *) ((void*)0), VAR_9,
         (debug_type **) ((void*)0));
      if (VAR_18 == VAR_1)
 return VAR_5;

      VAR_14[VAR_13] = FUNC_2 (VAR_7, VAR_18, VAR_17, VAR_15,
      VAR_16);
      if (VAR_14[VAR_13] == VAR_0)
 return VAR_5;

      if (**VAR_9 != ';')
 return VAR_5;
      ++*VAR_9;
    }

  VAR_14[VAR_13] = VAR_0;

  *VAR_10 = VAR_14;

  return VAR_6;
}
