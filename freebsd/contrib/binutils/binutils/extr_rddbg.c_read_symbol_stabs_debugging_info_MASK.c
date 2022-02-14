
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char type; char* name; int value; int stab_desc; int stab_type; } ;
typedef TYPE_1__ symbol_info ;
typedef int bfd_boolean ;
typedef int bfd ;
typedef int asymbol ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,TYPE_1__*) ;
 char* FUNC_2 (char*,int ,char const*) ;
 int FUNC_3 (void*,void*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 () ;
 int FUNC_6 (void*,void*,int ,int ,int ,char const*) ;
 int FUNC_7 (int ,int ,int ,char const*) ;
 int FUNC_8 () ;
 void* FUNC_9 (void*,int *,int ,int **,long) ;
 int FUNC_10 (char const*) ;
 char* FUNC_11 (char const*) ;

__attribute__((used)) static bfd_boolean
FUNC_12 (bfd *VAR_2, asymbol **VAR_3, long VAR_4,
      void *VAR_5, bfd_boolean *VAR_6)
{
  void *VAR_7;
  asymbol **VAR_8, **VAR_9;

  VAR_7 = ((void*)0);
  VAR_9 = VAR_3 + VAR_4;
  for (VAR_8 = VAR_3; VAR_8 < VAR_9; VAR_8++)
    {
      symbol_info VAR_10;

      FUNC_1 (VAR_2, *VAR_8, &VAR_10);

      if (VAR_10.type == '-')
 {
   const char *VAR_11;
   char *VAR_12;

   if (VAR_7 == ((void*)0))
     {
       VAR_7 = FUNC_9 (VAR_5, VAR_2, VAR_0, VAR_3, VAR_4);
       if (VAR_7 == ((void*)0))
  return VAR_0;
     }

   *VAR_6 = VAR_1;

   VAR_11 = VAR_10.name;
   VAR_12 = ((void*)0);
   while (VAR_11[FUNC_10 (VAR_11) - 1] == '\\'
   && VAR_8 + 1 < VAR_9)
     {
       char *VAR_13, *VAR_14;

       ++VAR_8;
       VAR_13 = FUNC_11 (VAR_11);
       VAR_13[FUNC_10 (VAR_13) - 1] = '\0';
       VAR_14 = FUNC_2 (VAR_13, FUNC_0 (*VAR_8), (const char *) ((void*)0));
       FUNC_4 (VAR_13);
       if (VAR_12 != ((void*)0))
  FUNC_4 (VAR_12);
       VAR_12 = VAR_14;
       VAR_11 = VAR_14;
     }

   FUNC_7 (VAR_10.stab_type, VAR_10.stab_desc, VAR_10.value, VAR_11);

   if (! FUNC_6 (VAR_5, VAR_7, VAR_10.stab_type, VAR_10.stab_desc,
       VAR_10.value, VAR_11))
     {
       FUNC_8 ();
       FUNC_5 ();
       return VAR_0;
     }




 }
    }

  FUNC_5 ();

  if (VAR_7 != ((void*)0))
    {
      if (! FUNC_3 (VAR_5, VAR_7))
 return VAR_0;
    }

  return VAR_1;
}
