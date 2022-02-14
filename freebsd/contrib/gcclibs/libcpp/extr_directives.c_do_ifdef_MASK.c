
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int skipping; } ;
struct TYPE_11__ {TYPE_1__ state; } ;
typedef TYPE_2__ cpp_reader ;
struct TYPE_12__ {scalar_t__ type; } ;
typedef TYPE_3__ cpp_hashnode ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__ const*) ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_3__* FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,int,int ,int ) ;

__attribute__((used)) static void
FUNC_4 (cpp_reader *VAR_2)
{
  int VAR_3 = 1;

  if (! VAR_2->state.skipping)
    {
      const cpp_hashnode *VAR_4 = FUNC_2 (VAR_2);

      if (VAR_4)
 {
   VAR_3 = VAR_4->type != VAR_0;
   FUNC_0 (VAR_4);
   FUNC_1 (VAR_2);
 }
    }

  FUNC_3 (VAR_2, VAR_3, VAR_1, 0);
}
