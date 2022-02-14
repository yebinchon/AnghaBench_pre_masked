
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_4__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;


struct TYPE_26__ {int len; char* ptr; } ;
typedef TYPE_2__ sb ;
struct TYPE_27__ {TYPE_4__* formals; int formal_hash; int sub; int name; } ;
typedef TYPE_3__ macro_entry ;
struct TYPE_25__ {char* ptr; scalar_t__ len; } ;
struct TYPE_28__ {scalar_t__ index; scalar_t__ type; struct TYPE_28__* next; TYPE_1__ name; TYPE_2__ actual; } ;
typedef TYPE_4__ formal_entry ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char) ;
 scalar_t__ FUNC_1 (char) ;
 scalar_t__ VAR_2 ;
 char* FUNC_2 (char*) ;
 int FUNC_3 (char*,char*,int ) ;
 int FUNC_4 (char*,char*,int ) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (int,TYPE_2__*,TYPE_2__*) ;
 int FUNC_7 (int,TYPE_2__*,TYPE_2__*) ;
 scalar_t__ FUNC_8 (int ,int ) ;
 int VAR_3 ;
 char* FUNC_9 (int *,TYPE_2__*,TYPE_4__*,int ,TYPE_3__*) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 TYPE_4__* FUNC_10 () ;
 int FUNC_11 (TYPE_2__*,char*,int) ;
 int FUNC_12 (TYPE_2__*,char*) ;
 int FUNC_13 (TYPE_2__*) ;
 int FUNC_14 (TYPE_2__*) ;
 int FUNC_15 (TYPE_2__*) ;
 int FUNC_16 (int,TYPE_2__*) ;
 int FUNC_17 (int,TYPE_2__*) ;
 int FUNC_18 (TYPE_2__*) ;
 int FUNC_19 (char*,char*,int) ;

__attribute__((used)) static const char *
FUNC_20 (int VAR_7, sb *VAR_8, macro_entry *VAR_9, sb *VAR_10)
{
  sb VAR_11;
  formal_entry *VAR_12;
  formal_entry *VAR_13;
  int VAR_14 = 0;
  int VAR_15 = 0;
  const char *VAR_16 = ((void*)0);

  FUNC_14 (&VAR_11);


  for (VAR_13 = VAR_9->formals; VAR_13; VAR_13 = VAR_13->next)
    FUNC_15 (&VAR_13->actual);
  VAR_13 = VAR_9->formals;
  while (VAR_13 != ((void*)0) && VAR_13->index < 0)
    VAR_13 = VAR_13->next;

  if (VAR_4)
    {


      if (VAR_7 < VAR_8->len && VAR_8->ptr[VAR_7] == '.')
 {


   VAR_7++;
   if ( VAR_7 < VAR_8->len
    && VAR_8->ptr[VAR_7] != ' '
    && VAR_8->ptr[VAR_7] != '\t')
     {
       formal_entry *VAR_17 = FUNC_10 ();

       VAR_17->index = VAR_2;

       VAR_17->next = VAR_9->formals;
       VAR_9->formals = VAR_17;

       VAR_7 = FUNC_6 (VAR_7, VAR_8, &VAR_17->actual);
     }
 }
    }


  VAR_7 = FUNC_17 (VAR_7, VAR_8);
  while (VAR_7 < VAR_8->len)
    {
      int VAR_18;


      VAR_18 = VAR_7;
      while (VAR_18 < VAR_8->len
      && !FUNC_0 (VAR_8->ptr[VAR_18])
      && !(VAR_4 && VAR_8->ptr[VAR_18] == '\'')
      && (!VAR_3 && VAR_8->ptr[VAR_18] != '='))
 VAR_18++;
      if (VAR_18 < VAR_8->len && !VAR_3 && VAR_8->ptr[VAR_18] == '=')
 {
   VAR_14 = 1;





   FUNC_15 (&VAR_11);
   VAR_7 = FUNC_7 (VAR_7, VAR_8, &VAR_11);
   if (VAR_8->ptr[VAR_7] != '=')
     {
       VAR_16 = FUNC_2("confusion in formal parameters");
       break;
     }


   VAR_12 = (formal_entry *) FUNC_8 (VAR_9->formal_hash, FUNC_18 (&VAR_11));
   if (!VAR_12)
     FUNC_3 (FUNC_2("Parameter named `%s' does not exist for macro `%s'"),
      VAR_11.ptr,
      VAR_9->name);
   else
     {

       if (VAR_12->actual.len)
  {
    FUNC_4 (FUNC_2("Value for parameter `%s' of macro `%s' was already specified"),
      VAR_12->name.ptr,
      VAR_9->name);
    FUNC_15 (&VAR_12->actual);
  }
       VAR_7 = FUNC_6 (VAR_7 + 1, VAR_8, &VAR_12->actual);
       if (VAR_12->actual.len > 0)
  ++VAR_15;
     }
 }
      else
 {
   if (VAR_14)
     {
       VAR_16 = FUNC_2("can't mix positional and keyword arguments");
       break;
     }

   if (!VAR_13)
     {
       formal_entry **VAR_19;
       int VAR_20;

       if (!VAR_4)
  {
    VAR_16 = FUNC_2("too many positional arguments");
    break;
  }

       VAR_13 = FUNC_10 ();

       VAR_20 = -1;
       for (VAR_19 = &VAR_9->formals; *VAR_19 != ((void*)0); VAR_19 = &(*VAR_19)->next)
  if ((*VAR_19)->index >= VAR_20)
    VAR_20 = (*VAR_19)->index + 1;
       if (VAR_20 == -1)
  VAR_20 = 0;
       *VAR_19 = VAR_13;
       VAR_13->index = VAR_20;
     }

   if (VAR_13->type != VAR_1)
     VAR_7 = FUNC_6 (VAR_7, VAR_8, &VAR_13->actual);
   else
     {
       FUNC_11 (&VAR_13->actual, VAR_8->ptr + VAR_7, VAR_8->len - VAR_7);
       VAR_7 = VAR_8->len;
     }
   if (VAR_13->actual.len > 0)
     ++VAR_15;
   do
     {
       VAR_13 = VAR_13->next;
     }
   while (VAR_13 != ((void*)0) && VAR_13->index < 0);
 }

      if (! VAR_4)
 VAR_7 = FUNC_16 (VAR_7, VAR_8);
      else
 {
   if (VAR_8->ptr[VAR_7] == ',')
     ++VAR_7;
   if (FUNC_1 (VAR_8->ptr[VAR_7]))
     break;
 }
    }

  if (! VAR_16)
    {
      for (VAR_12 = VAR_9->formals; VAR_12; VAR_12 = VAR_12->next)
 {
   if (VAR_12->type == VAR_0 && VAR_12->actual.len == 0)
     FUNC_3 (FUNC_2("Missing value for required parameter `%s' of macro `%s'"),
      VAR_12->name.ptr,
      VAR_9->name);
 }

      if (VAR_4)
 {
   char VAR_21[20];

   FUNC_15 (&VAR_11);
   FUNC_12 (&VAR_11, VAR_6 ? "$NARG" : "NARG");
   VAR_12 = (formal_entry *) FUNC_8 (VAR_9->formal_hash, FUNC_18 (&VAR_11));
   FUNC_19 (VAR_21, "%d", VAR_15);
   FUNC_12 (&VAR_12->actual, VAR_21);
 }

      VAR_16 = FUNC_9 (&VAR_9->sub, VAR_10, VAR_9->formals, VAR_9->formal_hash, VAR_9);
    }


  if (VAR_4)
    {
      formal_entry **VAR_22;

      VAR_22 = &VAR_9->formals;
      while (*VAR_22 != ((void*)0))
 {
   if ((*VAR_22)->name.len != 0)
     VAR_22 = &(*VAR_22)->next;
   else
     {
       VAR_13 = (*VAR_22)->next;
       FUNC_5 (*VAR_22);
       *VAR_22 = VAR_13;
     }
 }
    }

  FUNC_13 (&VAR_11);
  if (!VAR_16)
    VAR_5++;

  return VAR_16;
}
