
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int line; char* ansi_decl; TYPE_2__* hash_entry; TYPE_4__* file; scalar_t__ prototyped; int is_static; scalar_t__ is_func_def; struct TYPE_10__* next_for_func; } ;
typedef TYPE_3__ def_dec_info ;
struct TYPE_11__ {TYPE_1__* hash_entry; } ;
struct TYPE_9__ {char* symbol; } ;
struct TYPE_8__ {char const* symbol; } ;


 char* FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char*,char*,int,char*) ;
 scalar_t__ FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (char*,char*,...) ;
 char* VAR_0 ;
 int VAR_1 ;
 char* FUNC_5 (int *,char const*) ;
 int VAR_2 ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (char*) ;
 char* FUNC_8 (char*,char*) ;

__attribute__((used)) static const def_dec_info *
FUNC_9 (const def_dec_info *VAR_3, const def_dec_info *VAR_4)
{
  const def_dec_info *VAR_5;
  const def_dec_info *VAR_6 = ((void*)0);
  int VAR_7 = 0;
  for (VAR_5 = VAR_3; VAR_5; VAR_5 = VAR_5->next_for_func)
    if (VAR_5->is_func_def && !VAR_5->is_static && VAR_5->file == VAR_4->file)
      return VAR_5;
  for (VAR_5 = VAR_3; VAR_5; VAR_5 = VAR_5->next_for_func)
    if (VAR_5->is_func_def && !VAR_5->is_static)
      {
 if (!VAR_6)
   VAR_6 = VAR_5;
 else
   {


     if (FUNC_3 (VAR_5->file))
       continue;




     if (FUNC_3 (VAR_6->file))
       {
         VAR_6 = VAR_5;
         continue;
       }





     if (!VAR_7)
       {
  VAR_7 = 1;
  FUNC_4 ("%s: conflicting extern definitions of '%s'\n",
   VAR_0, VAR_3->hash_entry->symbol);
  if (!VAR_1)
    {
      FUNC_4 ("%s: declarations of '%s' will not be converted\n",
       VAR_0, VAR_3->hash_entry->symbol);
      FUNC_4 ("%s: conflict list for '%s' follows:\n",
       VAR_0, VAR_3->hash_entry->symbol);
      FUNC_1 (VAR_2, "%s:     %s(%d): %s\n",
        VAR_0,
        FUNC_5 (((void*)0), VAR_6->file->hash_entry->symbol),
        VAR_6->line, VAR_6->ansi_decl);
    }
       }
     if (!VAR_1)
       FUNC_1 (VAR_2, "%s:     %s(%d): %s\n",
         VAR_0,
         FUNC_5 (((void*)0), VAR_5->file->hash_entry->symbol),
         VAR_5->line, VAR_5->ansi_decl);
   }
      }





  if (VAR_7)
    return ((void*)0);

  if (!VAR_6)
    {



      for (VAR_5 = VAR_3; VAR_5; VAR_5 = VAR_5->next_for_func)
 if (!VAR_5->is_func_def && !VAR_5->is_static && VAR_5->prototyped)
   {
     VAR_6 = VAR_5;
     if (!VAR_1)
       FUNC_4 ("%s: warning: using formals list from %s(%d) for function '%s'\n",
        VAR_0,
        FUNC_5 (((void*)0), VAR_5->file->hash_entry->symbol),
        VAR_5->line, VAR_5->hash_entry->symbol);
     break;
   }
      if (!VAR_6)
 {
   const char *VAR_8 = VAR_4->file->hash_entry->symbol;

   if (!VAR_1)
     if (FUNC_2 (VAR_8))
       {


  char *VAR_9 = FUNC_0 (FUNC_7 (VAR_4->ansi_decl) + 1);
         char *VAR_10;

         FUNC_6 (VAR_9, VAR_4->ansi_decl);
         VAR_10 = FUNC_8 (VAR_9, VAR_4->hash_entry->symbol)
             + FUNC_7 (VAR_4->hash_entry->symbol) + 2;

  *VAR_10++ = '?';
  *VAR_10++ = '?';
  *VAR_10++ = '?';
         FUNC_6 (VAR_10, ");");

         FUNC_4 ("%s: %d: '%s' used but missing from SYSCALLS\n",
   FUNC_5 (((void*)0), VAR_8), VAR_4->line,
   VAR_9+7);
       }






 }
    }
  return VAR_6;
}
