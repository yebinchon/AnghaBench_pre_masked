
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct answer {int dummy; } ;
struct TYPE_11__ {int node; } ;
struct TYPE_13__ {scalar_t__ type; TYPE_1__ val; } ;
typedef TYPE_3__ cpp_token ;
struct TYPE_12__ {int prevent_expansion; } ;
struct TYPE_14__ {TYPE_2__ state; } ;
typedef TYPE_4__ cpp_reader ;
typedef int cpp_hashnode ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (unsigned int) ;
 int FUNC_3 (TYPE_4__*,int ,char*) ;
 TYPE_3__* FUNC_4 (TYPE_4__*) ;
 int * FUNC_5 (TYPE_4__*,unsigned char*,unsigned int) ;
 int FUNC_6 (unsigned char*,int ,unsigned int) ;
 scalar_t__ FUNC_7 (TYPE_4__*,struct answer**,int) ;

__attribute__((used)) static cpp_hashnode *
FUNC_8 (cpp_reader *VAR_3, struct answer **VAR_4, int VAR_5)
{
  cpp_hashnode *VAR_6 = 0;
  const cpp_token *VAR_7;


  VAR_3->state.prevent_expansion++;

  *VAR_4 = 0;
  VAR_7 = FUNC_4 (VAR_3);
  if (VAR_7->type == VAR_1)
    FUNC_3 (VAR_3, VAR_0, "assertion without predicate");
  else if (VAR_7->type != VAR_2)
    FUNC_3 (VAR_3, VAR_0, "predicate must be an identifier");
  else if (FUNC_7 (VAR_3, VAR_4, VAR_5) == 0)
    {
      unsigned int VAR_8 = FUNC_0 (VAR_7->val.node);
      unsigned char *VAR_9 = (unsigned char *) FUNC_2 (VAR_8 + 1);


      VAR_9[0] = '#';
      FUNC_6 (VAR_9 + 1, FUNC_1 (VAR_7->val.node), VAR_8);
      VAR_6 = FUNC_5 (VAR_3, VAR_9, VAR_8 + 1);
    }

  VAR_3->state.prevent_expansion--;
  return VAR_6;
}
