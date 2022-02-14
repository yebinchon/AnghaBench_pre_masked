
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int tree ;
struct obstack {int dummy; } ;
struct TYPE_18__ {unsigned char const* text; void* len; } ;
typedef TYPE_2__ cpp_string ;
struct TYPE_17__ {int value; } ;
struct TYPE_19__ {scalar_t__ type; TYPE_1__ u; } ;
typedef TYPE_3__ cp_token ;
struct TYPE_20__ {int lexer; } ;
typedef TYPE_4__ cp_parser ;
typedef int TREE_TYPE ;


 scalar_t__ VAR_0 ;
 void* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (void*,char*) ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 TYPE_3__* FUNC_4 (int ,int) ;
 TYPE_3__* FUNC_5 (int ) ;
 int FUNC_6 (TYPE_4__*,char*) ;
 scalar_t__ FUNC_7 (TYPE_3__*) ;
 scalar_t__ FUNC_8 (int ,TYPE_2__*,size_t,TYPE_2__*,int) ;
 scalar_t__ FUNC_9 (int ,TYPE_2__*,size_t,TYPE_2__*,int) ;
 int VAR_2 ;
 int FUNC_10 (int ) ;
 int FUNC_11 (void*) ;
 int FUNC_12 (struct obstack*) ;
 scalar_t__ FUNC_13 (struct obstack*) ;
 int FUNC_14 (struct obstack*,int ) ;
 int FUNC_15 (struct obstack*,TYPE_2__*,int) ;
 int VAR_3 ;
 scalar_t__ FUNC_16 (int ,TYPE_2__*,size_t,TYPE_2__*,int) ;
 int VAR_4 ;

__attribute__((used)) static tree
FUNC_17 (cp_parser *VAR_5, bool VAR_6, bool VAR_7)
{
  tree VAR_8;
  bool VAR_9 = 0;
  size_t VAR_10;
  struct obstack VAR_11;
  cpp_string VAR_12, VAR_13, *VAR_14;
  cp_token *VAR_15;

  VAR_15 = FUNC_5 (VAR_5->lexer);
  if (!FUNC_7 (VAR_15))
    {
      FUNC_6 (VAR_5, "expected string-literal");
      return VAR_2;
    }



  if (!FUNC_7
      (FUNC_4 (VAR_5->lexer, 2)))
    {
      FUNC_3 (VAR_5->lexer);

      VAR_12.text = (const unsigned char *)FUNC_1 (VAR_15->u.value);
      VAR_12.len = FUNC_0 (VAR_15->u.value);
      VAR_10 = 1;
      if (VAR_15->type == VAR_0)
 VAR_9 = 1;

      VAR_14 = &VAR_12;
    }
  else
    {
      FUNC_12 (&VAR_11);
      VAR_10 = 0;

      do
 {
   FUNC_3 (VAR_5->lexer);
   VAR_10++;
   VAR_12.text = (unsigned char *)FUNC_1 (VAR_15->u.value);
   VAR_12.len = FUNC_0 (VAR_15->u.value);
   if (VAR_15->type == VAR_0)
     VAR_9 = 1;

   FUNC_15 (&VAR_11, &VAR_12, sizeof (cpp_string));

   VAR_15 = FUNC_5 (VAR_5->lexer);
 }
      while (FUNC_7 (VAR_15));

      VAR_14 = (cpp_string *) FUNC_13 (&VAR_11);
    }

  if (VAR_9 && !VAR_7)
    {
      FUNC_6 (VAR_5, "a wide string is invalid in this context");
      VAR_9 = 0;
    }

  if ((VAR_6 ? FUNC_8 : FUNC_9)
      (VAR_3, VAR_14, VAR_10, &VAR_13, VAR_9))
    {
      VAR_8 = FUNC_2 (VAR_13.len, (char *)VAR_13.text);
      FUNC_11 ((void *)VAR_13.text);

      TREE_TYPE (VAR_16) = VAR_9 ? VAR_4 : VAR_1;
      VAR_16 = FUNC_10 (VAR_16);
    }
  else

    VAR_8 = VAR_2;

  if (VAR_10 > 1)
    FUNC_14 (&VAR_11, 0);

  return VAR_8;
}
