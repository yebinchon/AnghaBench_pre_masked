
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_1__ ;


struct hash_control {int dummy; } ;
struct TYPE_24__ {scalar_t__ len; char* ptr; } ;
typedef TYPE_1__ sb ;
struct TYPE_25__ {int index; TYPE_1__ name; TYPE_1__ def; TYPE_1__ actual; int type; int * next; } ;
typedef TYPE_3__ formal_entry ;
typedef int bfd_boolean ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char const* FUNC_0 (char*) ;
 int FUNC_1 (int *,char*,TYPE_1__*,int (*) (TYPE_1__*)) ;
 int FUNC_2 (int,TYPE_1__*,TYPE_1__*) ;
 int FUNC_3 (int,TYPE_1__*,TYPE_1__*) ;
 int FUNC_4 (struct hash_control*) ;
 char* FUNC_5 (struct hash_control*,int ,TYPE_3__*) ;
 struct hash_control* FUNC_6 () ;
 char* FUNC_7 (TYPE_1__*,TYPE_1__*,TYPE_3__*,struct hash_control*,int ) ;
 int FUNC_8 (TYPE_1__*,char) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (int,TYPE_1__*) ;
 int FUNC_13 (int,TYPE_1__*) ;
 int FUNC_14 (TYPE_1__*) ;

const char *
FUNC_15 (int VAR_3, int VAR_4, sb *VAR_5, sb *VAR_6, int (*VAR_7) (sb *))
{
  sb VAR_8;
  formal_entry VAR_9;
  struct hash_control *VAR_10;
  const char *VAR_11;

  VAR_4 = FUNC_13 (VAR_4, VAR_5);

  FUNC_10 (&VAR_8);
  if (! FUNC_1 (((void*)0), "ENDR", &VAR_8, VAR_7))
    return FUNC_0("unexpected end of file in irp or irpc");

  FUNC_10 (&VAR_9.name);
  FUNC_10 (&VAR_9.def);
  FUNC_10 (&VAR_9.actual);

  VAR_4 = FUNC_3 (VAR_4, VAR_5, &VAR_9.name);
  if (VAR_9.name.len == 0)
    return FUNC_0("missing model parameter");

  VAR_10 = FUNC_6 ();
  VAR_11 = FUNC_5 (VAR_10, FUNC_14 (&VAR_9.name), &VAR_9);
  if (VAR_11 != ((void*)0))
    return VAR_11;

  VAR_9.index = 1;
  VAR_9.next = ((void*)0);
  VAR_9.type = VAR_1;

  FUNC_11 (VAR_6);

  VAR_4 = FUNC_12 (VAR_4, VAR_5);
  if (VAR_4 >= VAR_5->len)
    {

      VAR_11 = FUNC_7 (&VAR_8, VAR_6, &VAR_9, VAR_10, 0);
    }
  else
    {
      bfd_boolean VAR_12 = VAR_0;

      if (VAR_3 && VAR_5->ptr[VAR_4] == '"')
 {
   VAR_12 = VAR_2;
   ++VAR_4;
 }

      while (VAR_4 < VAR_5->len)
 {
   if (!VAR_3)
     VAR_4 = FUNC_2 (VAR_4, VAR_5, &VAR_9.actual);
   else
     {
       if (VAR_5->ptr[VAR_4] == '"')
  {
    int VAR_13;

    if (VAR_3)
      VAR_12 = ! VAR_12;

    VAR_13 = FUNC_13 (VAR_4 + 1, VAR_5);
    if (VAR_13 >= VAR_5->len)
      {
        VAR_4 = VAR_13;
        break;
      }
  }
       FUNC_11 (&VAR_9.actual);
       FUNC_8 (&VAR_9.actual, VAR_5->ptr[VAR_4]);
       ++VAR_4;
     }

   VAR_11 = FUNC_7 (&VAR_8, VAR_6, &VAR_9, VAR_10, 0);
   if (VAR_11 != ((void*)0))
     break;
   if (!VAR_3)
     VAR_4 = FUNC_12 (VAR_4, VAR_5);
   else if (! VAR_12)
     VAR_4 = FUNC_13 (VAR_4, VAR_5);
 }
    }

  FUNC_4 (VAR_10);
  FUNC_9 (&VAR_9.actual);
  FUNC_9 (&VAR_9.def);
  FUNC_9 (&VAR_9.name);
  FUNC_9 (&VAR_8);

  return VAR_11;
}
