
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct spec_list {int name_len; char* name; char** ptr_spec; scalar_t__ alloc_p; struct spec_list* next; } ;
struct compiler {int dummy; } ;
struct TYPE_5__ {char* suffix; char* spec; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned char) ;
 int FUNC_1 (unsigned char) ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_2 (char*,...) ;
 char* FUNC_3 (int *,char*,int ,int) ;
 int FUNC_4 (void*) ;
 char* VAR_3 ;
 char* FUNC_5 (char const*) ;
 int FUNC_6 (TYPE_1__*,int ,int) ;
 int VAR_4 ;
 int FUNC_7 (char*,char*,...) ;
 char* FUNC_8 (char*,int) ;
 int FUNC_9 (char*,char*) ;
 char* FUNC_10 (char*) ;
 struct spec_list* VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_11 (char*,char*) ;
 int FUNC_12 (char*,char*,int) ;
 scalar_t__ VAR_7 ;
 TYPE_1__* FUNC_13 (TYPE_1__*,int) ;

__attribute__((used)) static void
FUNC_14 (const char *VAR_8, int VAR_9)
{
  char *VAR_10;
  char *VAR_11;

  VAR_10 = FUNC_5 (VAR_8);


  VAR_11 = VAR_10;
  while (1)
    {
      char *VAR_12;
      char *VAR_13;
      char *VAR_14, *VAR_15, *VAR_16, *VAR_17, *VAR_18;


      VAR_11 = FUNC_10 (VAR_11);
      if (*VAR_11 == 0)
 break;




      if (*VAR_11 == '%' && !VAR_9)
 {
   VAR_16 = VAR_11;
   while (*VAR_11 && *VAR_11 != '\n')
     VAR_11++;


   VAR_11++;

   if (!FUNC_12 (VAR_16, "%include", sizeof ("%include") - 1)
       && (VAR_16[sizeof "%include" - 1] == ' '
    || VAR_16[sizeof "%include" - 1] == '\t'))
     {
       char *VAR_19;

       VAR_16 += sizeof ("%include");
       while (*VAR_16 == ' ' || *VAR_16 == '\t')
  VAR_16++;

       if (*VAR_16++ != '<' || VAR_11[-2] != '>')
  FUNC_2 ("specs %%include syntax malformed after %ld characters",
         (long) (VAR_16 - VAR_10 + 1));

       VAR_11[-2] = '\0';
       VAR_19 = FUNC_3 (&VAR_6, VAR_16, VAR_1, 1);
       FUNC_14 (VAR_19 ? VAR_19 : VAR_16, VAR_0);
       continue;
     }
   else if (!FUNC_12 (VAR_16, "%include_noerr", sizeof "%include_noerr" - 1)
     && (VAR_16[sizeof "%include_noerr" - 1] == ' '
         || VAR_16[sizeof "%include_noerr" - 1] == '\t'))
     {
       char *VAR_20;

       VAR_16 += sizeof "%include_noerr";
       while (*VAR_16 == ' ' || *VAR_16 == '\t')
  VAR_16++;

       if (*VAR_16++ != '<' || VAR_11[-2] != '>')
  FUNC_2 ("specs %%include syntax malformed after %ld characters",
         (long) (VAR_16 - VAR_10 + 1));

       VAR_11[-2] = '\0';
       VAR_20 = FUNC_3 (&VAR_6, VAR_16, VAR_1, 1);
       if (VAR_20)
  FUNC_14 (VAR_20, VAR_0);
       else if (VAR_7)
  FUNC_7 ("could not find specs file %s\n", VAR_16);
       continue;
     }
   else if (!FUNC_12 (VAR_16, "%rename", sizeof "%rename" - 1)
     && (VAR_16[sizeof "%rename" - 1] == ' '
         || VAR_16[sizeof "%rename" - 1] == '\t'))
     {
       int VAR_21;
       struct spec_list *VAR_22;
       struct spec_list *VAR_23;


       VAR_16 += sizeof "%rename";
       while (*VAR_16 == ' ' || *VAR_16 == '\t')
  VAR_16++;

       if (! FUNC_0 ((unsigned char) *VAR_16))
  FUNC_2 ("specs %%rename syntax malformed after %ld characters",
         (long) (VAR_16 - VAR_10));

       VAR_17 = VAR_16;
       while (*VAR_17 && !FUNC_1 ((unsigned char) *VAR_17))
  VAR_17++;

       if (*VAR_17 != ' ' && *VAR_17 != '\t')
  FUNC_2 ("specs %%rename syntax malformed after %ld characters",
         (long) (VAR_17 - VAR_10));

       VAR_21 = VAR_17 - VAR_16;
       *VAR_17++ = '\0';
       while (*VAR_17 == ' ' || *VAR_17 == '\t')
  VAR_17++;

       if (! FUNC_0 ((unsigned char) *VAR_17))
  FUNC_2 ("specs %%rename syntax malformed after %ld characters",
         (long) (VAR_17 - VAR_10));


       VAR_18 = VAR_17;
       while (*VAR_18 && !FUNC_1 ((unsigned char) *VAR_18))
  VAR_18++;

       if (VAR_18 != VAR_11 - 1)
  FUNC_2 ("specs %%rename syntax malformed after %ld characters",
         (long) (VAR_18 - VAR_10));
       *VAR_18 = '\0';

       for (VAR_22 = VAR_5; VAR_22; VAR_22 = VAR_22->next)
  if (VAR_21 == VAR_22->name_len && !FUNC_11 (VAR_22->name, VAR_16))
    break;

       if (!VAR_22)
  FUNC_2 ("specs %s spec was not found to be renamed", VAR_16);

       if (FUNC_11 (VAR_16, VAR_17) == 0)
  continue;

       for (VAR_23 = VAR_5; VAR_23; VAR_23 = VAR_23->next)
  if (FUNC_11 (VAR_23->name, VAR_17) == 0)
    FUNC_2 ("%s: attempt to rename spec '%s' to already defined spec '%s'",
      VAR_8, VAR_16, VAR_17);

       if (VAR_7)
  {
    FUNC_7 ("rename spec %s to %s\n", VAR_16, VAR_17);



  }

       FUNC_9 (VAR_17, *(VAR_22->ptr_spec));
       if (VAR_22->alloc_p)
  FUNC_4 ((void *) *(VAR_22->ptr_spec));

       *(VAR_22->ptr_spec) = "";
       VAR_22->alloc_p = 0;
       continue;
     }
   else
     FUNC_2 ("specs unknown %% command after %ld characters",
     (long) (VAR_16 - VAR_10));
 }


      VAR_16 = VAR_11;
      while (*VAR_16 && *VAR_16 != ':' && *VAR_16 != '\n')
 VAR_16++;


      if (*VAR_16 != ':')
 FUNC_2 ("specs file malformed after %ld characters",
        (long) (VAR_16 - VAR_10));


      VAR_17 = VAR_16;
      while (VAR_17 > VAR_10 && (VAR_17[-1] == ' ' || VAR_17[-1] == '\t'))
 VAR_17--;


      VAR_12 = FUNC_8 (VAR_11, VAR_17 - VAR_11);

      VAR_11 = FUNC_10 (VAR_16 + 1);
      if (VAR_11[1] == 0)
 FUNC_2 ("specs file malformed after %ld characters",
        (long) (VAR_11 - VAR_10));

      VAR_16 = VAR_11;

      while (*VAR_16 && !(*VAR_16 == '\n' && (VAR_16[1] == '\n' || VAR_16[1] == '\0')))
 VAR_16++;


      VAR_13 = FUNC_8 (VAR_11, VAR_16 - VAR_11);
      VAR_11 = VAR_16;


      VAR_14 = VAR_13;
      VAR_15 = VAR_13;
      while (*VAR_14 != 0)
 {
   if (VAR_14[0] == '\\' && VAR_14[1] == '\n')
     VAR_14 += 2;
   else if (VAR_14[0] == '#')
     while (*VAR_14 && *VAR_14 != '\n')
       VAR_14++;

   else
     *VAR_15++ = *VAR_14++;
 }
      *VAR_15 = 0;

      if (VAR_12[0] == '*')
 {
   if (! FUNC_11 (VAR_12, "*link_command"))
     VAR_3 = VAR_13;
   else
     FUNC_9 (VAR_12 + 1, VAR_13);
 }
      else
 {

   VAR_2
     = FUNC_13 (VAR_2,
   (VAR_4 + 2) * sizeof (struct compiler));

   VAR_2[VAR_4].suffix = VAR_12;
   VAR_2[VAR_4].spec = VAR_13;
   VAR_4++;
   FUNC_6 (&VAR_2[VAR_4], 0, sizeof VAR_2[VAR_4]);
 }

      if (*VAR_12 == 0)
 VAR_3 = VAR_13;
    }

  if (VAR_3 == 0)
    FUNC_2 ("spec file has no spec for linking");
}
