
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_1__ ;


struct hash_control {int dummy; } ;
struct TYPE_26__ {int len; char* ptr; } ;
typedef TYPE_1__ sb ;
struct TYPE_27__ {scalar_t__ line; int file; } ;
typedef TYPE_2__ macro_entry ;
struct TYPE_28__ {int index; TYPE_1__ name; struct TYPE_28__* next; TYPE_1__ actual; TYPE_1__ def; } ;
typedef TYPE_3__ formal_entry ;


 scalar_t__ FUNC_0 (char) ;
 scalar_t__ FUNC_1 (char) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (char) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 char* FUNC_4 (char*) ;
 int FUNC_5 (int ,scalar_t__,char*,...) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (int,TYPE_1__*,TYPE_1__*) ;
 scalar_t__ FUNC_8 (struct hash_control*,char const*) ;
 char* FUNC_9 (struct hash_control*,char const*,TYPE_3__*) ;
 scalar_t__ FUNC_10 (char) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_3__* FUNC_11 () ;
 int FUNC_12 (TYPE_1__*,char) ;
 int FUNC_13 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_14 (TYPE_1__*,char*) ;
 int FUNC_15 (TYPE_1__*) ;
 int FUNC_16 (TYPE_1__*) ;
 int FUNC_17 (TYPE_1__*) ;
 int FUNC_18 (int,TYPE_1__*) ;
 int FUNC_19 (int,TYPE_1__*) ;
 char const* FUNC_20 (TYPE_1__*) ;
 int FUNC_21 (char*,char*,int) ;
 scalar_t__ FUNC_22 (char*,char*,int) ;
 int FUNC_23 (int,TYPE_1__*,TYPE_1__*,struct hash_control*,char,TYPE_1__*,int) ;

__attribute__((used)) static const char *
FUNC_24 (sb *VAR_6, sb *VAR_7, formal_entry *VAR_8,
     struct hash_control *VAR_9, const macro_entry *VAR_10)
{
  sb VAR_11;
  int VAR_12 = 0, VAR_13 = 0, VAR_14 = 0;
  formal_entry *VAR_15 = ((void*)0);
  const char *VAR_16 = ((void*)0);

  FUNC_16 (&VAR_11);

  while (VAR_12 < VAR_6->len && !VAR_16)
    {
      if (VAR_6->ptr[VAR_12] == '&')
 {
   FUNC_17 (&VAR_11);
   if (VAR_3)
     {
       if (VAR_12 + 1 < VAR_6->len && VAR_6->ptr[VAR_12 + 1] == '&')
  VAR_12 = FUNC_23 (VAR_12 + 2, VAR_6, &VAR_11, VAR_9, '\'', VAR_7, 1);
       else
  FUNC_12 (VAR_7, VAR_6->ptr[VAR_12++]);
     }
   else
     {



       VAR_12 = FUNC_23 (VAR_12 + 1, VAR_6, &VAR_11, VAR_9, '&', VAR_7, 0);
     }
 }
      else if (VAR_6->ptr[VAR_12] == '\\')
 {
   VAR_12++;
   if (VAR_12 < VAR_6->len && VAR_6->ptr[VAR_12] == '(')
     {

       VAR_12++;
       while (VAR_12 < VAR_6->len && VAR_6->ptr[VAR_12] != ')')
  {
    FUNC_12 (VAR_7, VAR_6->ptr[VAR_12++]);
  }
       if (VAR_12 < VAR_6->len)
  VAR_12++;
       else if (!VAR_10)
  VAR_16 = FUNC_4("missing `)'");
       else
  FUNC_5 (VAR_10->file, VAR_10->line + VAR_14, FUNC_4("missing `)'"));
     }
   else if (VAR_12 < VAR_6->len && VAR_6->ptr[VAR_12] == '@')
     {


       char VAR_17[10];
       VAR_12++;
       FUNC_21 (VAR_17, "%d", VAR_4);
       FUNC_14 (VAR_7, VAR_17);
     }
   else if (VAR_12 < VAR_6->len && VAR_6->ptr[VAR_12] == '&')
     {


       FUNC_12 (VAR_7, '\\');
       FUNC_12 (VAR_7, '&');
       VAR_12++;
     }
   else if (VAR_3 && VAR_12 < VAR_6->len && FUNC_0 (VAR_6->ptr[VAR_12]))
     {
       int VAR_18;
       formal_entry *VAR_19;

       if (FUNC_1 (VAR_6->ptr[VAR_12]))
  VAR_18 = VAR_6->ptr[VAR_12] - '0';
       else if (FUNC_2 (VAR_6->ptr[VAR_12]))
  VAR_18 = VAR_6->ptr[VAR_12] - 'A' + 10;
       else
  VAR_18 = VAR_6->ptr[VAR_12] - 'a' + 10;
       ++VAR_12;
       for (VAR_19 = VAR_8; VAR_19 != ((void*)0); VAR_19 = VAR_19->next)
  {
    if (VAR_19->index == VAR_18 - 1)
      {
        if (VAR_19->actual.len != 0)
   FUNC_13 (VAR_7, &VAR_19->actual);
        else
   FUNC_13 (VAR_7, &VAR_19->def);
        break;
      }
  }
     }
   else
     {
       FUNC_17 (&VAR_11);
       VAR_12 = FUNC_23 (VAR_12, VAR_6, &VAR_11, VAR_9, '\'', VAR_7, 0);
     }
 }
      else if ((VAR_2 || VAR_3)
        && FUNC_10 (VAR_6->ptr[VAR_12])
        && (! VAR_13
     || ! VAR_5
     || (VAR_12 > 0 && VAR_6->ptr[VAR_12 - 1] == '@')))
 {
   if (! VAR_10
       || VAR_12 + 5 >= VAR_6->len
       || FUNC_22 (VAR_6->ptr + VAR_12, "LOCAL", 5) != 0
       || ! FUNC_3 (VAR_6->ptr[VAR_12 + 5]))
     {
       FUNC_17 (&VAR_11);
       VAR_12 = FUNC_23 (VAR_12, VAR_6, &VAR_11, VAR_9,
    (VAR_5 && VAR_13) ? '@' : '\'',
    VAR_7, 1);
     }
   else
     {
       VAR_12 = FUNC_19 (VAR_12 + 5, VAR_6);
       while (VAR_6->ptr[VAR_12] != '\n')
  {
    const char *VAR_20;
    formal_entry *VAR_21 = FUNC_11 ();

    VAR_12 = FUNC_7 (VAR_12, VAR_6, &VAR_21->name);
    VAR_20 = FUNC_20 (&VAR_21->name);
    if (! FUNC_8 (VAR_9, VAR_20))
      {
        static int VAR_22;
        char VAR_23[20];

        VAR_21->index = VAR_1;
        VAR_21->next = VAR_15;
        VAR_15 = VAR_21;

        FUNC_21 (VAR_23, VAR_0 ? ".LL%04x" : "LL%04x", ++VAR_22);
        FUNC_14 (&VAR_21->actual, VAR_23);

        VAR_16 = FUNC_9 (VAR_9, VAR_20, VAR_21);
        if (VAR_16 != ((void*)0))
   break;
      }
    else
      {
        FUNC_5 (VAR_10->file,
        VAR_10->line + VAR_14,
        FUNC_4("`%s' was already used as parameter (or another local) name"),
        VAR_20);
        FUNC_6 (VAR_21);
      }

    VAR_12 = FUNC_18 (VAR_12, VAR_6);
  }
     }
 }
      else if (VAR_6->ptr[VAR_12] == '"'
        || (VAR_3 && VAR_6->ptr[VAR_12] == '\''))
 {
   VAR_13 = !VAR_13;
   FUNC_12 (VAR_7, VAR_6->ptr[VAR_12++]);
 }
      else if (VAR_6->ptr[VAR_12] == '@' && VAR_5)
 {
   ++VAR_12;
   if (VAR_12 < VAR_6->len
       && VAR_6->ptr[VAR_12] == '@')
     {
       FUNC_12 (VAR_7, '@');
       ++VAR_12;
     }
 }
      else if (VAR_3
        && VAR_6->ptr[VAR_12] == '='
        && VAR_12 + 1 < VAR_6->len
        && VAR_6->ptr[VAR_12 + 1] == '=')
 {
   formal_entry *VAR_24;

   FUNC_17 (&VAR_11);
   VAR_12 = FUNC_7 (VAR_12 + 2, VAR_6, &VAR_11);
   VAR_24 = (formal_entry *) FUNC_8 (VAR_9, FUNC_20 (&VAR_11));
   if (VAR_24 == ((void*)0))
     {
       FUNC_12 (VAR_7, '=');
       FUNC_12 (VAR_7, '=');
       FUNC_13 (VAR_7, &VAR_11);
     }
   else
     {
       if (VAR_24->actual.len)
  {
    FUNC_14 (VAR_7, "-1");
  }
       else
  {
    FUNC_12 (VAR_7, '0');
  }
     }
 }
      else
 {
   if (VAR_6->ptr[VAR_12] == '\n')
     ++VAR_14;
   FUNC_12 (VAR_7, VAR_6->ptr[VAR_12++]);
 }
    }

  FUNC_15 (&VAR_11);

  while (VAR_15 != ((void*)0))
    {
      formal_entry *VAR_25;

      VAR_25 = VAR_15->next;


      FUNC_9 (VAR_9, FUNC_20 (&VAR_15->name), ((void*)0));
      FUNC_6 (VAR_15);
      VAR_15 = VAR_25;
    }

  return VAR_16;
}
