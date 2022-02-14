
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct answer {unsigned int count; int * next; TYPE_1__* first; } ;
struct TYPE_9__ {scalar_t__ type; int flags; } ;
typedef TYPE_1__ cpp_token ;
struct TYPE_10__ {int a_buff; } ;
typedef TYPE_2__ cpp_reader ;


 scalar_t__ FUNC_0 (int ) ;
 size_t FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (TYPE_2__*,int *,int) ;
 int FUNC_4 (TYPE_2__*,int ,char*) ;
 TYPE_1__* FUNC_5 (TYPE_2__*) ;

__attribute__((used)) static int
FUNC_6 (cpp_reader *VAR_7, struct answer **VAR_8, int VAR_9)
{
  const cpp_token *VAR_10;
  struct answer *VAR_11;
  unsigned int VAR_12;



  VAR_10 = FUNC_5 (VAR_7);


  if (VAR_10->type != VAR_3)
    {


      if (VAR_9 == VAR_5)
 {
   FUNC_2 (VAR_7, 1);
   return 0;
 }


      if (VAR_9 == VAR_6 && VAR_10->type == VAR_2)
 return 0;

      FUNC_4 (VAR_7, VAR_1, "missing '(' after predicate");
      return 1;
    }

  for (VAR_12 = 0;; VAR_12++)
    {
      size_t VAR_13;
      const cpp_token *VAR_14 = FUNC_5 (VAR_7);
      cpp_token *VAR_15;

      if (VAR_14->type == VAR_0)
 break;

      if (VAR_14->type == VAR_2)
 {
   FUNC_4 (VAR_7, VAR_1, "missing ')' to complete answer");
   return 1;
 }


      VAR_13 = (sizeof (struct answer) + VAR_12 * sizeof (cpp_token));

      if (FUNC_1 (VAR_7->a_buff) < VAR_13)
 FUNC_3 (VAR_7, &VAR_7->a_buff, sizeof (struct answer));

      VAR_15 = &((struct answer *) FUNC_0 (VAR_7->a_buff))->first[VAR_12];
      *VAR_15 = *VAR_14;


      if (VAR_12 == 0)
 VAR_15->flags &= ~VAR_4;
    }

  if (VAR_12 == 0)
    {
      FUNC_4 (VAR_7, VAR_1, "predicate's answer is empty");
      return 1;
    }

  VAR_11 = (struct answer *) FUNC_0 (VAR_7->a_buff);
  VAR_11->count = VAR_12;
  VAR_11->next = ((void*)0);
  *VAR_8 = VAR_11;

  return 0;
}
