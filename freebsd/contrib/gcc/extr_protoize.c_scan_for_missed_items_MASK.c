
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* hash_entry; TYPE_3__* defs_decs; } ;
typedef TYPE_2__ file_info ;
struct TYPE_7__ {int const line; scalar_t__ is_func_def; struct TYPE_7__* next_in_file; } ;
typedef TYPE_3__ def_dec_info ;
struct TYPE_5__ {int symbol; } ;


 scalar_t__ FUNC_0 (unsigned char const) ;
 scalar_t__ FUNC_1 (unsigned char const) ;
 char* FUNC_2 (size_t) ;
 char* FUNC_3 (char const*) ;
 int FUNC_4 (int,char const*) ;
 char* VAR_0 ;
 char* VAR_1 ;
 int FUNC_5 (char const*) ;
 scalar_t__ FUNC_6 (char const) ;
 int FUNC_7 (char*,int ,...) ;
 int VAR_2 ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int *,int ) ;
 int VAR_3 ;
 int FUNC_10 (char*,char const* const) ;
 int FUNC_11 (char*,char const*,size_t) ;

__attribute__((used)) static void
FUNC_12 (const file_info *VAR_4)
{
  static const char *VAR_5;
  const char *VAR_6 = VAR_1 - 3;
  static const char *VAR_7;

  VAR_7 = VAR_0 - 1;

  for (VAR_5 = VAR_0; VAR_5 < VAR_6; VAR_5++)
    {
      if (*VAR_5 == ')')
 {
   static const char *VAR_8;
   const char *VAR_9;

   VAR_8 = VAR_5;

   for (VAR_9 = VAR_5 + 1; FUNC_1 ((const unsigned char)*VAR_9); )
     FUNC_4 (++VAR_9 < VAR_6, VAR_6);

   VAR_5 = VAR_9 - 1;

   if (FUNC_0 ((const unsigned char)*VAR_9) || *VAR_9 == '{')
     {
       const char *VAR_10;
       const int VAR_11 = FUNC_5 (VAR_9);

       if (FUNC_8 (VAR_3))
  continue;




       do
  {
    VAR_10 = FUNC_3 (VAR_8);
    for (VAR_8 = VAR_10-1;
         FUNC_1 ((const unsigned char)*VAR_8); )
      FUNC_4 (--VAR_8 >= VAR_7, VAR_7);
  }
       while (*VAR_8 == ')');

       if (FUNC_6 (*VAR_8))
  {
    const char *VAR_12 = VAR_8 + 1;
    const char *VAR_13;
    size_t VAR_14;
    const def_dec_info *VAR_15;

    for (VAR_13 = VAR_12-1; FUNC_6 (*VAR_13); )
      FUNC_4 (--VAR_13 >= VAR_7, VAR_7);
    VAR_13++;
    VAR_7 = VAR_13;
    if ((VAR_14 = (size_t) (VAR_12 - VAR_13)) == 0)
      goto not_missed;

    {
      char *VAR_16 = FUNC_2 (VAR_14 + 1);
      static const char * const VAR_17[]
        = { "if", "else", "do", "while", "for", "switch", "case", "return", 0 };
      const char * const *VAR_18;

      FUNC_11 (VAR_16, VAR_13, VAR_14);
      VAR_16[VAR_14] = '\0';




      for (VAR_18 = VAR_17; *VAR_18; VAR_18++)
        if (!FUNC_10 (VAR_16, *VAR_18))
   goto not_missed;
      for (VAR_15 = VAR_4->defs_decs; VAR_15; VAR_15 = VAR_15->next_in_file)
        if (VAR_15->is_func_def && VAR_15->line == VAR_11)
   goto not_missed;




      FUNC_7 ("%s: %d: warning: '%s' excluded by preprocessing\n",
       FUNC_9 (((void*)0), VAR_4->hash_entry->symbol),
       FUNC_5 (VAR_13), VAR_16);
      FUNC_7 ("%s: function definition not converted\n",
       VAR_2);
    }
  not_missed: ;
         }
     }
 }
    }
}
