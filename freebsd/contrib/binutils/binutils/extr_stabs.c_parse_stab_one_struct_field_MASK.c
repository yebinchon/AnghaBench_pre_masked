
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stab_handle {int dummy; } ;
typedef enum debug_visibility { ____Placeholder_debug_visibility } debug_visibility ;
typedef scalar_t__ debug_type ;
typedef int debug_field ;
typedef scalar_t__ bfd_vma ;
typedef int bfd_boolean ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (void*,char*,scalar_t__,scalar_t__,scalar_t__,int) ;
 int FUNC_3 (void*,char*,scalar_t__,char*,int) ;
 scalar_t__ FUNC_4 (char const**,int *) ;
 scalar_t__ FUNC_5 (void*,struct stab_handle*,char const*,char const**,scalar_t__**) ;
 char* FUNC_6 (char const*,int) ;
 char* FUNC_7 (char const*,char) ;
 int FUNC_8 (char const*,int ) ;

__attribute__((used)) static bfd_boolean
FUNC_9 (void *VAR_7, struct stab_handle *VAR_8,
        const char **VAR_9, const char *VAR_10,
        debug_field *VAR_11, bfd_boolean *VAR_12)
{
  const char *VAR_13;
  char *VAR_14;
  enum debug_visibility VAR_15;
  debug_type VAR_16;
  bfd_vma VAR_17;
  bfd_vma VAR_18;

  VAR_13 = *VAR_9;



  VAR_14 = FUNC_6 (*VAR_9, VAR_10 - *VAR_9);

  *VAR_9 = VAR_10 + 1;

  if (**VAR_9 != '/')
    VAR_15 = VAR_4;
  else
    {
      ++*VAR_9;
      switch (**VAR_9)
 {
 case '0':
   VAR_15 = VAR_2;
   break;
 case '1':
   VAR_15 = VAR_3;
   break;
 case '2':
   VAR_15 = VAR_4;
   break;
 default:
   FUNC_8 (VAR_13, FUNC_0("unknown visibility character for field"));
   VAR_15 = VAR_4;
   break;
 }
      ++*VAR_9;
    }

  VAR_16 = FUNC_5 (VAR_7, VAR_8, (const char *) ((void*)0), VAR_9,
     (debug_type **) ((void*)0));
  if (VAR_16 == VAR_0)
    return VAR_5;

  if (**VAR_9 == ':')
    {
      char *VAR_19;


      ++*VAR_9;
      VAR_10 = FUNC_7 (*VAR_9, ';');
      if (VAR_10 == ((void*)0))
 {
   FUNC_1 (VAR_13);
   return VAR_5;
 }

      VAR_19 = FUNC_6 (*VAR_9, VAR_10 - *VAR_9);

      *VAR_9 = VAR_10 + 1;

      *VAR_11 = FUNC_3 (VAR_7, VAR_14, VAR_16, VAR_19,
     VAR_15);
      *VAR_12 = VAR_6;

      return VAR_6;
    }

  if (**VAR_9 != ',')
    {
      FUNC_1 (VAR_13);
      return VAR_5;
    }
  ++*VAR_9;

  VAR_17 = FUNC_4 (VAR_9, (bfd_boolean *) ((void*)0));
  if (**VAR_9 != ',')
    {
      FUNC_1 (VAR_13);
      return VAR_5;
    }
  ++*VAR_9;

  VAR_18 = FUNC_4 (VAR_9, (bfd_boolean *) ((void*)0));
  if (**VAR_9 != ';')
    {
      FUNC_1 (VAR_13);
      return VAR_5;
    }
  ++*VAR_9;

  if (VAR_17 == 0 && VAR_18 == 0)
    {
      VAR_15 = VAR_1;
    }



  *VAR_11 = FUNC_2 (VAR_7, VAR_14, VAR_16, VAR_17, VAR_18, VAR_15);

  return VAR_6;
}
