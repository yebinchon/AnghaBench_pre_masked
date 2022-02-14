
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct objfile {int objfile_obstack; int * demangled_names_hash; } ;
struct TYPE_3__ {char* demangled_name; } ;
struct TYPE_4__ {TYPE_1__ cplus_specific; } ;
struct general_symbol_info {scalar_t__ language; char* name; TYPE_2__ language_specific; } ;


 int VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (int) ;
 int FUNC_1 (struct objfile*) ;
 scalar_t__ FUNC_2 (int *,char const*,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (char*,char const*,int) ;
 char* FUNC_4 (int *,int) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (struct general_symbol_info*,char const*) ;
 int FUNC_7 (char*) ;

void
FUNC_8 (struct general_symbol_info *VAR_4,
    const char *VAR_5, int VAR_6, struct objfile *VAR_7)
{
  char **VAR_8;

  const char *VAR_9;


  const char *VAR_10;

  int VAR_11;

  if (VAR_7->demangled_names_hash == ((void*)0))
    FUNC_1 (VAR_7);




  if (VAR_4->language == VAR_3)
    {
      char *VAR_12;
      VAR_11 = VAR_6 + VAR_2;

      VAR_12 = FUNC_0 (VAR_11 + 1);
      FUNC_3 (VAR_12, VAR_1, VAR_2);
      FUNC_3 (VAR_12 + VAR_2, VAR_5, VAR_6);
      VAR_12[VAR_11] = '\0';

      VAR_10 = VAR_12;
      VAR_9 = VAR_12 + VAR_2;
    }
  else if (VAR_5[VAR_6] != '\0')
    {
      char *VAR_13;
      VAR_11 = VAR_6;

      VAR_13 = FUNC_0 (VAR_11 + 1);
      FUNC_3 (VAR_13, VAR_5, VAR_6);
      VAR_13[VAR_11] = '\0';

      VAR_10 = VAR_13;
      VAR_9 = VAR_13;
    }
  else
    {
      VAR_11 = VAR_6;
      VAR_10 = VAR_5;
      VAR_9 = VAR_5;
    }

  VAR_8 = (char **) FUNC_2 (VAR_7->demangled_names_hash,
       VAR_10, VAR_0);


  if (*VAR_8 == ((void*)0))
    {
      char *VAR_14 = FUNC_6 (VAR_4,
        VAR_9);
      int VAR_15 = VAR_14 ? FUNC_5 (VAR_14) : 0;




      *VAR_8 = FUNC_4 (&VAR_7->objfile_obstack,
        VAR_11 + VAR_15 + 2);
      FUNC_3 (*VAR_8, VAR_10, VAR_11 + 1);
      if (VAR_14 != ((void*)0))
 {
   FUNC_3 (*VAR_8 + VAR_11 + 1, VAR_14, VAR_15 + 1);
   FUNC_7 (VAR_14);
 }
      else
 (*VAR_8)[VAR_11 + 1] = '\0';
    }

  VAR_4->name = *VAR_8 + VAR_11 - VAR_6;
  if ((*VAR_8)[VAR_11 + 1] != '\0')
    VAR_4->language_specific.cplus_specific.demangled_name
      = &(*VAR_8)[VAR_11 + 1];
  else
    VAR_4->language_specific.cplus_specific.demangled_name = ((void*)0);
}
