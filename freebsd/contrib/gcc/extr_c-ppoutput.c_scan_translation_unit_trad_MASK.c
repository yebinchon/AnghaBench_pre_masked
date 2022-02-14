
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {size_t cur; size_t base; int first_line; } ;
struct TYPE_8__ {TYPE_1__ out; } ;
typedef TYPE_2__ cpp_reader ;
struct TYPE_9__ {int printed; int outf; } ;


 int FUNC_0 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (size_t,size_t) ;
 int VAR_0 ;
 int FUNC_3 (size_t,int,size_t,int ) ;
 int FUNC_4 (int ) ;
 TYPE_4__ VAR_1 ;

__attribute__((used)) static void
FUNC_5 (cpp_reader *VAR_2)
{
  while (FUNC_1 (VAR_2))
    {
      size_t VAR_3 = VAR_2->out.cur - VAR_2->out.base;
      FUNC_4 (VAR_2->out.first_line);
      FUNC_3 (VAR_2->out.base, 1, VAR_3, VAR_1.outf);
      VAR_1.printed = 1;
      if (!FUNC_0 (VAR_2, VAR_0))
 FUNC_2 (VAR_2->out.base, VAR_3);
    }
}
