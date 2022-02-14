
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int (* define ) (TYPE_3__*,int ,int *) ;} ;
struct TYPE_9__ {int save_comments; } ;
struct TYPE_11__ {int directive_line; TYPE_2__ cb; TYPE_1__ state; } ;
typedef TYPE_3__ cpp_reader ;
typedef int cpp_hashnode ;


 int FUNC_0 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_1 (TYPE_3__*,int *) ;
 int VAR_0 ;
 int * FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*,int ,int *) ;

__attribute__((used)) static void
FUNC_4 (cpp_reader *VAR_1)
{
  cpp_hashnode *VAR_2 = FUNC_2 (VAR_1);

  if (VAR_2)
    {


      VAR_1->state.save_comments =
 ! FUNC_0 (VAR_1, VAR_0);

      if (FUNC_1 (VAR_1, VAR_2))
 if (VAR_1->cb.define)
   VAR_1->cb.define (VAR_1, VAR_1->directive_line, VAR_2);
    }
}
