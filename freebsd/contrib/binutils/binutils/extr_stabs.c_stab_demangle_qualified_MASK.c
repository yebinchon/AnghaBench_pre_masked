
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stab_demangle_info {int info; int dhandle; } ;
typedef scalar_t__ debug_type ;
typedef scalar_t__ debug_field ;
typedef int bfd_boolean ;


 scalar_t__ const VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char const) ;
 int VAR_5 ;
 unsigned int FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (int ,scalar_t__ const) ;
 scalar_t__* FUNC_4 (int ,scalar_t__) ;
 char* FUNC_5 (int ,scalar_t__) ;
 int FUNC_6 (char*) ;
 char* FUNC_7 (char const*,unsigned int) ;
 int FUNC_8 (char const*) ;
 unsigned int FUNC_9 (char const**) ;
 int FUNC_10 (struct stab_demangle_info*,char const**,char**) ;
 scalar_t__ FUNC_11 (int ,int ,char const*,unsigned int,int ) ;
 scalar_t__ FUNC_12 (char const*,char*) ;
 unsigned int FUNC_13 (char const*) ;

__attribute__((used)) static bfd_boolean
FUNC_14 (struct stab_demangle_info *VAR_6, const char **VAR_7,
    debug_type *VAR_8)
{
  const char *VAR_9;
  const char *VAR_10;
  unsigned int VAR_11;
  debug_type VAR_12;

  VAR_9 = *VAR_7;

  switch ((*VAR_7)[1])
    {
    case '_':



      VAR_10 = *VAR_7 + 2;
      if (! FUNC_0 (*VAR_10) || *VAR_10 == '0')
 {
   FUNC_8 (VAR_9);
   return VAR_4;
 }
      VAR_11 = FUNC_1 (VAR_10);
      while (FUNC_0 (*VAR_10))
 ++VAR_10;
      if (*VAR_10 != '_')
 {
   FUNC_8 (VAR_9);
   return VAR_4;
 }
      *VAR_7 = VAR_10 + 1;
      break;

    case '1': case '2': case '3': case '4': case '5':
    case '6': case '7': case '8': case '9':
      VAR_11 = (*VAR_7)[1] - '0';

      if ((*VAR_7)[2] == '_')
 ++*VAR_7;
      *VAR_7 += 2;
      break;

    case '0':
    default:
      FUNC_8 (VAR_9);
      return VAR_4;
    }

  VAR_12 = VAR_3;


  while (VAR_11-- > 0)
    {
      if (**VAR_7 == '_')
 ++*VAR_7;
      if (**VAR_7 == 't')
 {
   char *VAR_13;

   if (! FUNC_10 (VAR_6, VAR_7,
     VAR_8 != ((void*)0) ? &VAR_13 : ((void*)0)))
     return VAR_4;

   if (VAR_8 != ((void*)0))
     {
       VAR_12 = FUNC_11 (VAR_6->dhandle, VAR_6->info,
            VAR_13, FUNC_13 (VAR_13),
            VAR_1);
       FUNC_6 (VAR_13);
       if (VAR_12 == VAR_3)
  return VAR_4;
     }
 }
      else
 {
   unsigned int VAR_14;

   VAR_14 = FUNC_9 (VAR_7);
   if (FUNC_13 (*VAR_7) < VAR_14)
     {
       FUNC_8 (VAR_9);
       return VAR_4;
     }

   if (VAR_8 != ((void*)0))
     {
       const debug_field *VAR_15;

       VAR_15 = ((void*)0);
       if (VAR_12 != VAR_3)
  VAR_15 = FUNC_4 (VAR_6->dhandle, VAR_12);

       VAR_12 = VAR_3;

       if (VAR_15 != ((void*)0))
  {
    char *VAR_16;
    VAR_16 = FUNC_7 (*VAR_7, VAR_14);

    for (; *VAR_15 != VAR_0; VAR_15++)
      {
        debug_type VAR_17;
        const char *VAR_18;

        VAR_17 = FUNC_3 (VAR_6->dhandle, *VAR_15);
        if (VAR_17 == ((void*)0))
   return VAR_4;
        VAR_18 = FUNC_5 (VAR_6->dhandle, VAR_17);
        if (VAR_18 != ((void*)0) && FUNC_12 (VAR_18, VAR_16) == 0)
   {
     VAR_12 = VAR_17;
     break;
   }
      }

    FUNC_6 (VAR_16);
  }

       if (VAR_12 == VAR_3)
  {




    if (VAR_11 == 0)
      {
        char *VAR_19;

        VAR_19 = FUNC_7 (*VAR_7, VAR_14);
        VAR_12 = FUNC_2 (VAR_6->dhandle,
             VAR_19);
        FUNC_6 (VAR_19);
      }

    if (VAR_12 == VAR_3)
      {
        VAR_12 = FUNC_11 (VAR_6->dhandle,
             VAR_6->info,
             *VAR_7, VAR_14,
             (VAR_11 == 0
       ? VAR_2
       : VAR_1));
        if (VAR_12 == VAR_3)
   return VAR_4;
      }
  }
     }

   *VAR_7 += VAR_14;
 }
    }

  if (VAR_8 != ((void*)0))
    *VAR_8 = VAR_12;

  return VAR_5;
}
