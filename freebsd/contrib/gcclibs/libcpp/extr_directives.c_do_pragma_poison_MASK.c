
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {TYPE_5__* node; } ;
struct TYPE_14__ {scalar_t__ type; TYPE_1__ val; } ;
typedef TYPE_3__ cpp_token ;
struct TYPE_13__ {int poisoned_ok; } ;
struct TYPE_15__ {TYPE_2__ state; } ;
typedef TYPE_4__ cpp_reader ;
struct TYPE_16__ {int flags; scalar_t__ type; } ;
typedef TYPE_5__ cpp_hashnode ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_5__*) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (TYPE_5__*) ;
 TYPE_3__* FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*,int ,char*,...) ;

__attribute__((used)) static void
FUNC_4 (cpp_reader *VAR_7)
{
  const cpp_token *VAR_8;
  cpp_hashnode *VAR_9;

  VAR_7->state.poisoned_ok = 1;
  for (;;)
    {
      VAR_8 = FUNC_2 (VAR_7);
      if (VAR_8->type == VAR_2)
 break;
      if (VAR_8->type != VAR_3)
 {
   FUNC_3 (VAR_7, VAR_0,
       "invalid #pragma GCC poison directive");
   break;
 }

      VAR_9 = VAR_8->val.node;
      if (VAR_9->flags & VAR_5)
 continue;

      if (VAR_9->type == VAR_6)
 FUNC_3 (VAR_7, VAR_1, "poisoning existing macro \"%s\"",
     FUNC_0 (VAR_9));
      FUNC_1 (VAR_9);
      VAR_9->flags |= VAR_5 | VAR_4;
    }
  VAR_7->state.poisoned_ok = 0;
}
