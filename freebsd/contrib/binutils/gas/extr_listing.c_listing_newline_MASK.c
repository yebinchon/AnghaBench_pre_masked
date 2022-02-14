
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int debugging; char* line_contents; unsigned int line; char* message; scalar_t__ hll_line; int * hll_file; int edict; struct TYPE_4__* next; int file; int frag; } ;
typedef TYPE_1__ list_info_type ;
typedef int file_info_type ;


 int VAR_0 ;
 int FUNC_0 (unsigned char) ;
 int VAR_1 ;
 char* FUNC_1 (char*) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (char**,unsigned int*) ;
 int FUNC_3 (char*) ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 char* VAR_5 ;
 int * VAR_6 ;
 int VAR_7 ;
 TYPE_1__* VAR_8 ;
 int FUNC_4 () ;
 scalar_t__ VAR_9 ;
 char* FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (char*,char*) ;
 scalar_t__ FUNC_7 (char const*,char*,int) ;
 void* FUNC_8 (int) ;

void
FUNC_9 (char *VAR_10)
{
  char *VAR_11;
  unsigned int VAR_12;
  static unsigned int VAR_13 = 0xffff;
  static char *VAR_14 = ((void*)0);
  list_info_type *VAR_15 = ((void*)0);

  if (VAR_7 == 0)
    return;

  if (VAR_9 == VAR_2)
    return;
  FUNC_2 (&VAR_11, &VAR_12);
  if (VAR_10 == ((void*)0))
    {
      if (VAR_12 == VAR_13
   && !(VAR_14 && VAR_11 && FUNC_6 (VAR_11, VAR_14)))
 return;

      VAR_15 = (list_info_type *) FUNC_8 (sizeof (list_info_type));
      if (FUNC_6 (VAR_11, FUNC_1("{standard input}")) == 0
   && VAR_5 != ((void*)0))
 {
   char *VAR_16;
   int VAR_17;
   int VAR_18 = 0;

   for (VAR_16 = VAR_5 - 1;
        *VAR_16 && (VAR_18
    || (! VAR_6 [(unsigned char) *VAR_16]));
        VAR_16++)
     if (*VAR_16 == '"' && VAR_16[-1] != '\\')
       VAR_18 = ! VAR_18;

   VAR_17 = (VAR_16 - VAR_5) + 2;

   VAR_16 = FUNC_8 (VAR_17);

   if (VAR_16 != ((void*)0))
     {
       char *VAR_19 = VAR_5 - 1;
       char *VAR_20 = VAR_16;

       while (--VAR_17)
  {
    unsigned char VAR_21 = *VAR_19++;


    if (!FUNC_0 (VAR_21))
      *VAR_20++ = VAR_21;
  }

       *VAR_20 = 0;
     }

   VAR_15->line_contents = VAR_16;
 }
      else
 VAR_15->line_contents = ((void*)0);
    }
  else
    {
      VAR_15 = FUNC_8 (sizeof (list_info_type));
      VAR_15->line_contents = VAR_10;
    }

  VAR_13 = VAR_12;
  VAR_14 = VAR_11;

  FUNC_4 ();

  if (VAR_8)
    VAR_8->next = VAR_15;
  else
    VAR_4 = VAR_15;

  VAR_8 = VAR_15;

  VAR_15->frag = VAR_3;
  VAR_15->line = VAR_12;
  VAR_15->file = FUNC_3 (VAR_11);
  VAR_15->next = (list_info_type *) ((void*)0);
  VAR_15->message = (char *) ((void*)0);
  VAR_15->edict = VAR_0;
  VAR_15->hll_file = (file_info_type *) ((void*)0);
  VAR_15->hll_line = 0;
  VAR_15->debugging = 0;

  FUNC_4 ();
}
