
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_16__ {int (* undef ) (TYPE_2__*,int ,TYPE_3__*) ;} ;
struct TYPE_17__ {int directive_line; TYPE_1__ cb; } ;
typedef TYPE_2__ cpp_reader ;
struct TYPE_18__ {scalar_t__ type; int flags; } ;
typedef TYPE_3__ cpp_hashnode ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_3__*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_2__*,TYPE_3__*,int *) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,int ,char*,int ) ;
 TYPE_3__* FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*,int ,TYPE_3__*) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_8 (cpp_reader *VAR_4)
{
  cpp_hashnode *VAR_5 = FUNC_6 (VAR_4);

  if (VAR_5)
    {
      if (VAR_4->cb.undef)
 VAR_4->cb.undef (VAR_4, VAR_4->directive_line, VAR_5);



      if (VAR_5->type == VAR_2)
 {
   if (VAR_5->flags & VAR_1)
     FUNC_5 (VAR_4, VAR_0,
         "undefining \"%s\"", FUNC_1 (VAR_5));

   if (FUNC_0 (VAR_4, VAR_3))
     FUNC_3 (VAR_4, VAR_5, ((void*)0));

   FUNC_2 (VAR_5);
 }
    }

  FUNC_4 (VAR_4);
}
