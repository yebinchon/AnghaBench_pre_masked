
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_17__ {int len; char* ptr; } ;
typedef TYPE_1__ sb ;
struct TYPE_18__ {int formal_hash; int name; int line; int file; scalar_t__ formal_count; TYPE_3__* formals; } ;
typedef TYPE_2__ macro_entry ;
struct TYPE_19__ {scalar_t__ type; scalar_t__ index; TYPE_1__ name; struct TYPE_19__* next; int def; } ;
typedef TYPE_3__ formal_entry ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ,int ,char const*,char const*,...) ;
 int FUNC_2 (int ,int ,int ,char const*,int ) ;
 int FUNC_3 (int,TYPE_1__*,int *) ;
 int FUNC_4 (int,TYPE_1__*,TYPE_1__*) ;
 scalar_t__ FUNC_5 (int ,char const*) ;
 int FUNC_6 (int ,char const*,TYPE_3__*) ;
 int FUNC_7 (char) ;
 int FUNC_8 (char) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_3__* FUNC_9 () ;
 int FUNC_10 (TYPE_1__*,char const*) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int,TYPE_1__*) ;
 int FUNC_15 (int,TYPE_1__*) ;
 char* FUNC_16 (TYPE_1__*) ;
 scalar_t__ FUNC_17 (char*,char*) ;

__attribute__((used)) static int
FUNC_18 (macro_entry *VAR_5, int VAR_6, sb *VAR_7)
{
  formal_entry **VAR_8 = &VAR_5->formals;
  const char *VAR_9;

  VAR_6 = FUNC_15 (VAR_6, VAR_7);
  while (VAR_6 < VAR_7->len)
    {
      formal_entry *VAR_10 = FUNC_9 ();
      int VAR_11;

      VAR_6 = FUNC_4 (VAR_6, VAR_7, &VAR_10->name);
      if (VAR_10->name.len == 0)
 {
   if (VAR_5->formal_count)
     --VAR_6;
   break;
 }
      VAR_6 = FUNC_15 (VAR_6, VAR_7);

      VAR_9 = FUNC_16 (&VAR_10->name);
      if (! VAR_3
   && VAR_6 < VAR_7->len
   && VAR_7->ptr[VAR_6] == ':'
   && (! FUNC_7 (':')
       || VAR_6 + 1 >= VAR_7->len
       || ! FUNC_8 (VAR_7->ptr[VAR_6 + 1])))
 {

   sb VAR_12;

   FUNC_12 (&VAR_12);
   VAR_6 = FUNC_4 (FUNC_15 (VAR_6 + 1, VAR_7), VAR_7, &VAR_12);
   FUNC_16 (&VAR_12);
   if (VAR_12.len == 0)
     FUNC_1 (VAR_5->file,
     VAR_5->line,
     FUNC_0("Missing parameter qualifier for `%s' in macro `%s'"),
     VAR_9,
     VAR_5->name);
   else if (FUNC_17 (VAR_12.ptr, "req") == 0)
     VAR_10->type = VAR_0;
   else if (FUNC_17 (VAR_12.ptr, "vararg") == 0)
     VAR_10->type = VAR_1;
   else
     FUNC_1 (VAR_5->file,
     VAR_5->line,
     FUNC_0("`%s' is not a valid parameter qualifier for `%s' in macro `%s'"),
     VAR_12.ptr,
     VAR_9,
     VAR_5->name);
   FUNC_11 (&VAR_12);
   VAR_6 = FUNC_15 (VAR_6, VAR_7);
 }
      if (VAR_6 < VAR_7->len && VAR_7->ptr[VAR_6] == '=')
 {

   VAR_6 = FUNC_3 (VAR_6 + 1, VAR_7, &VAR_10->def);
   VAR_6 = FUNC_15 (VAR_6, VAR_7);
   if (VAR_10->type == VAR_0)
     {
       FUNC_13 (&VAR_10->def);
       FUNC_2 (VAR_5->file,
       VAR_5->line,
       FUNC_0("Pointless default value for required parameter `%s' in macro `%s'"),
       VAR_9,
       VAR_5->name);
     }
 }


      if (! FUNC_5 (VAR_5->formal_hash, VAR_9))
 FUNC_6 (VAR_5->formal_hash, VAR_9, VAR_10);
      else
 FUNC_1 (VAR_5->file,
        VAR_5->line,
        FUNC_0("A parameter named `%s' already exists for macro `%s'"),
        VAR_9,
        VAR_5->name);

      VAR_10->index = VAR_5->formal_count++;
      *VAR_8 = VAR_10;
      VAR_8 = &VAR_10->next;
      if (VAR_10->type == VAR_1)
 break;
      VAR_11 = VAR_6;
      VAR_6 = FUNC_14 (VAR_6, VAR_7);
      if (VAR_6 != VAR_11 && VAR_6 >= VAR_7->len)
 {
   VAR_6 = VAR_11;
   break;
 }
    }

  if (VAR_3)
    {
      formal_entry *VAR_13 = FUNC_9 ();





      if (VAR_4)
 VAR_9 = "$NARG";
      else
 VAR_9 = "NARG";

      FUNC_10 (&VAR_13->name, VAR_9);


      if (FUNC_5 (VAR_5->formal_hash, VAR_9))
 FUNC_1 (VAR_5->file,
        VAR_5->line,
        FUNC_0("Reserved word `%s' used as parameter in macro `%s'"),
        VAR_9,
        VAR_5->name);
      FUNC_6 (VAR_5->formal_hash, VAR_9, VAR_13);

      VAR_13->index = VAR_2;
      *VAR_8 = VAR_13;
    }

  return VAR_6;
}
