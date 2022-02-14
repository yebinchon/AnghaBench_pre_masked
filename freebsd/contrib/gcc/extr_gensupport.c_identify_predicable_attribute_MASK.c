
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct queue_elem {int lineno; int data; struct queue_elem* next; } ;
struct TYPE_2__ {int lineno; } ;




 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 char const* FUNC_2 (int ,int) ;
 struct queue_elem* VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,char*,...) ;
 int VAR_3 ;
 char* VAR_4 ;
 char* VAR_5 ;
 char* FUNC_5 (char*,char) ;
 scalar_t__ FUNC_6 (char const*,char*) ;
 char* FUNC_7 (char const*) ;

__attribute__((used)) static void
FUNC_8 (void)
{
  struct queue_elem *VAR_6;
  char *VAR_7, *VAR_8;
  const char *VAR_9;


  for (VAR_6 = VAR_0; VAR_6 ; VAR_6 = VAR_6->next)
    if (FUNC_6 (FUNC_2 (VAR_6->data, 0), "predicable") == 0)
      goto found;

  FUNC_4 (VAR_1->lineno,
       "attribute `predicable' not defined");
  VAR_2 = 1;
  return;

 found:
  VAR_9 = FUNC_2 (VAR_6->data, 1);
  VAR_8 = FUNC_7 (VAR_9);
  VAR_7 = FUNC_5 (VAR_8, ',');
  if (VAR_7 == ((void*)0) || FUNC_5 (++VAR_7, ',') != ((void*)0))
    {
      FUNC_4 (VAR_6->lineno,
    "attribute `predicable' is not a boolean");
      VAR_2 = 1;
      if (VAR_8)
        FUNC_3 (VAR_8);
      return;
    }
  VAR_7[-1] = '\0';

  VAR_5 = VAR_7;
  VAR_4 = VAR_8;

  switch (FUNC_0 (FUNC_1 (VAR_6->data, 2)))
    {
    case 128:
      VAR_9 = FUNC_2 (FUNC_1 (VAR_6->data, 2), 0);
      break;

    case 129:
      FUNC_4 (VAR_6->lineno,
    "attribute `predicable' cannot be const");
      VAR_2 = 1;
      if (VAR_8)
 FUNC_3 (VAR_8);
      return;

    default:
      FUNC_4 (VAR_6->lineno,
    "attribute `predicable' must have a constant default");
      VAR_2 = 1;
      if (VAR_8)
 FUNC_3 (VAR_8);
      return;
    }

  if (FUNC_6 (VAR_9, VAR_7) == 0)
    VAR_3 = 1;
  else if (FUNC_6 (VAR_9, VAR_8) == 0)
    VAR_3 = 0;
  else
    {
      FUNC_4 (VAR_6->lineno,
    "unknown value `%s' for `predicable' attribute",
    VAR_9);
      VAR_2 = 1;
      if (VAR_8)
 FUNC_3 (VAR_8);
    }
}
