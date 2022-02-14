
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stab_handle {int dummy; } ;
typedef scalar_t__ debug_type ;
typedef scalar_t__ debug_field ;
typedef int bfd_vma ;
typedef int bfd_boolean ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char const*) ;
 char* FUNC_2 (char*,char const*,char const*) ;
 char* FUNC_3 (void*,scalar_t__) ;
 scalar_t__ FUNC_4 (void*,char const*,scalar_t__,int ,int ,int ) ;
 int FUNC_5 (char const**,int *) ;
 scalar_t__ FUNC_6 (void*,struct stab_handle*,char const*,char const**,scalar_t__**) ;
 int FUNC_7 (char const*,int ) ;

__attribute__((used)) static bfd_boolean
FUNC_8 (void *VAR_5, struct stab_handle *VAR_6,
         const char **VAR_7, debug_field *VAR_8)
{
  const char *VAR_9;
  int VAR_10;
  debug_type VAR_11;
  const char *VAR_12;
  const char *VAR_13;
  debug_type VAR_14;
  bfd_vma VAR_15;

  *VAR_8 = VAR_0;

  VAR_9 = *VAR_7;

  if (**VAR_7 != 'v')
    {
      FUNC_1 (*VAR_7);
      return VAR_3;
    }
  ++*VAR_7;

  VAR_10 = **VAR_7;
  ++*VAR_7;






  VAR_11 = FUNC_6 (VAR_5, VAR_6, (const char *) ((void*)0), VAR_7,
        (debug_type **) ((void*)0));
  if (VAR_11 == VAR_1)
    return VAR_3;

  switch (VAR_10)
    {
    case 'f':

      VAR_12 = "_vptr$";
      break;
    case 'b':

      VAR_13 = FUNC_3 (VAR_5, VAR_11);
      if (VAR_13 == ((void*)0))
 {
   FUNC_7 (VAR_9, FUNC_0("unnamed $vb type"));
   VAR_13 = "FOO";
 }
      VAR_12 = FUNC_2 ("_vb$", VAR_13, (const char *) ((void*)0));
      break;
    default:
      FUNC_7 (VAR_9, FUNC_0("unrecognized C++ abbreviation"));
      VAR_12 = "INVALID_CPLUSPLUS_ABBREV";
      break;
    }

  if (**VAR_7 != ':')
    {
      FUNC_1 (VAR_9);
      return VAR_3;
    }
  ++*VAR_7;

  VAR_14 = FUNC_6 (VAR_5, VAR_6, (const char *) ((void*)0), VAR_7,
     (debug_type **) ((void*)0));
  if (**VAR_7 != ',')
    {
      FUNC_1 (VAR_9);
      return VAR_3;
    }
  ++*VAR_7;

  VAR_15 = FUNC_5 (VAR_7, (bfd_boolean *) ((void*)0));
  if (**VAR_7 != ';')
    {
      FUNC_1 (VAR_9);
      return VAR_3;
    }
  ++*VAR_7;

  *VAR_8 = FUNC_4 (VAR_5, VAR_12, VAR_14, VAR_15, 0,
       VAR_2);
  if (*VAR_8 == VAR_0)
    return VAR_3;

  return VAR_4;
}
