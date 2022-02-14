
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pr_handle {TYPE_2__* stack; } ;
typedef enum debug_visibility { ____Placeholder_debug_visibility } debug_visibility ;
typedef scalar_t__ bfd_vma ;
typedef scalar_t__ bfd_boolean ;
struct TYPE_4__ {char* type; TYPE_1__* next; } ;
struct TYPE_3__ {char* type; } ;


 scalar_t__ FUNC_0 (char*,char*) ;



 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct pr_handle*,char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,char*,int) ;
 char* FUNC_5 (struct pr_handle*) ;
 int FUNC_6 (struct pr_handle*,char const*) ;
 int FUNC_7 (scalar_t__,char*,scalar_t__,scalar_t__) ;
 int FUNC_8 (struct pr_handle*,char*) ;
 int FUNC_9 (char*,char*) ;
 char* FUNC_10 (char*,char) ;
 int FUNC_11 (char*,char*) ;
 scalar_t__ FUNC_12 (char*) ;
 int FUNC_13 (struct pr_handle*,char*) ;
 scalar_t__ FUNC_14 (scalar_t__) ;

__attribute__((used)) static bfd_boolean
FUNC_15 (void *VAR_2, bfd_vma VAR_3, bfd_boolean VAR_4,
      enum debug_visibility VAR_5)
{
  struct pr_handle *VAR_6 = (struct pr_handle *) VAR_2;
  char *VAR_7;
  const char *VAR_8;
  char VAR_9[20];
  char *VAR_10, *VAR_11, *VAR_12;

  FUNC_2 (VAR_6->stack != ((void*)0) && VAR_6->stack->next != ((void*)0));

  if (! FUNC_13 (VAR_6, ""))
    return VAR_0;

  VAR_7 = FUNC_5 (VAR_6);
  if (VAR_7 == ((void*)0))
    return VAR_0;

  if (FUNC_0 (VAR_7, "class "))
    VAR_7 += sizeof "class " - 1;



  if (! FUNC_8 (VAR_6, VAR_7))
    return VAR_0;

  if (VAR_4)
    {
      if (! FUNC_6 (VAR_6, "virtual "))
 return VAR_0;
    }

  switch (VAR_5)
    {
    case 128:
      VAR_8 = "public ";
      break;
    case 129:
      VAR_8 = "protected ";
      break;
    case 130:
      VAR_8 = "private ";
      break;
    default:
      VAR_8 = "/* unknown visibility */ ";
      break;
    }

  if (! FUNC_6 (VAR_6, VAR_8))
    return VAR_0;

  if (VAR_3 != 0)
    {
      FUNC_7 (VAR_3, VAR_9, VAR_1, VAR_0);
      if (! FUNC_1 (VAR_6, " /* bitpos ")
   || ! FUNC_1 (VAR_6, VAR_9)
   || ! FUNC_1 (VAR_6, " */"))
 return VAR_0;
    }





  VAR_10 = FUNC_10 (VAR_6->stack->next->type, '{');
  FUNC_2 (VAR_10 != ((void*)0));
  --VAR_10;



  for (VAR_11 = VAR_6->stack->next->type; VAR_11 != VAR_10; VAR_11++)
    if (*VAR_11 == ':')
      break;
  if (! FUNC_6 (VAR_6, VAR_11 == VAR_10 ? " : " : ", "))
    return VAR_0;

  VAR_7 = FUNC_5 (VAR_6);
  if (VAR_7 == ((void*)0))
    return VAR_0;

  VAR_12 = (char *) FUNC_14 (FUNC_12 (VAR_6->stack->type) + FUNC_12 (VAR_7) + 1);
  FUNC_4 (VAR_12, VAR_6->stack->type, VAR_10 - VAR_6->stack->type);
  FUNC_11 (VAR_12 + (VAR_10 - VAR_6->stack->type), VAR_7);
  FUNC_9 (VAR_12, VAR_10);

  FUNC_3 (VAR_6->stack->type);
  VAR_6->stack->type = VAR_12;

  FUNC_3 (VAR_7);

  return VAR_1;
}
