
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stab_handle {int dummy; } ;
typedef scalar_t__ debug_type ;
typedef int bfd_signed_vma ;
typedef scalar_t__ bfd_boolean ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char const) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (void*,char*) ;
 scalar_t__ FUNC_3 (void*,scalar_t__,scalar_t__,int,int,scalar_t__) ;
 scalar_t__ FUNC_4 (void*,int,scalar_t__) ;
 scalar_t__ FUNC_5 (char const**,scalar_t__*) ;
 scalar_t__ FUNC_6 (void*,struct stab_handle*,char const*,char const**,scalar_t__**) ;
 int FUNC_7 (char const**,int*) ;

__attribute__((used)) static debug_type
FUNC_8 (void *VAR_3, struct stab_handle *VAR_4,
         const char **VAR_5, bfd_boolean VAR_6)
{
  const char *VAR_7;
  const char *VAR_8;
  int VAR_9[2];
  debug_type VAR_10;
  bfd_boolean VAR_11;
  bfd_signed_vma VAR_12, VAR_13;
  debug_type VAR_14;
  VAR_7 = *VAR_5;




  VAR_8 = *VAR_5;
  if (! FUNC_7 (&VAR_8, VAR_9))
    return VAR_0;
  if (VAR_9[0] == 0 && VAR_9[1] == 0 && **VAR_5 != '=')
    {
      VAR_10 = FUNC_2 (VAR_3, "int");
      if (VAR_10 == VAR_0)
 {
   VAR_10 = FUNC_4 (VAR_3, 4, VAR_1);
   if (VAR_10 == VAR_0)
     return VAR_0;
 }
      *VAR_5 = VAR_8;
    }
  else
    {
      VAR_10 = FUNC_6 (VAR_3, VAR_4, (const char *) ((void*)0), VAR_5,
        (debug_type **) ((void*)0));
    }

  if (**VAR_5 != ';')
    {
      FUNC_1 (VAR_7);
      return VAR_0;
    }
  ++*VAR_5;

  VAR_11 = VAR_1;

  if (! FUNC_0 (**VAR_5) && **VAR_5 != '-')
    {
      ++*VAR_5;
      VAR_11 = VAR_2;
    }

  VAR_12 = (bfd_signed_vma) FUNC_5 (VAR_5, (bfd_boolean *) ((void*)0));
  if (**VAR_5 != ';')
    {
      FUNC_1 (VAR_7);
      return VAR_0;
    }
  ++*VAR_5;

  if (! FUNC_0 (**VAR_5) && **VAR_5 != '-')
    {
      ++*VAR_5;
      VAR_11 = VAR_2;
    }

  VAR_13 = (bfd_signed_vma) FUNC_5 (VAR_5, (bfd_boolean *) ((void*)0));
  if (**VAR_5 != ';')
    {
      FUNC_1 (VAR_7);
      return VAR_0;
    }
  ++*VAR_5;

  VAR_14 = FUNC_6 (VAR_3, VAR_4, (const char *) ((void*)0), VAR_5,
      (debug_type **) ((void*)0));
  if (VAR_14 == VAR_0)
    return VAR_0;

  if (VAR_11)
    {
      VAR_12 = 0;
      VAR_13 = -1;
    }

  return FUNC_3 (VAR_3, VAR_14, VAR_10, VAR_12,
    VAR_13, VAR_6);
}
