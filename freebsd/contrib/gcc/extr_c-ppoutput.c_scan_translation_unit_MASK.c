
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int len; int text; } ;
struct TYPE_10__ {TYPE_1__ str; TYPE_3__ const* source; } ;
struct TYPE_11__ {scalar_t__ type; int flags; TYPE_2__ val; } ;
typedef TYPE_3__ cpp_token ;
typedef int cpp_reader ;
struct TYPE_12__ {int outf; TYPE_3__ const* prev; TYPE_3__ const* source; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int *,TYPE_3__ const*,TYPE_3__ const*) ;
 TYPE_3__* FUNC_2 (int *) ;
 int FUNC_3 (TYPE_3__ const*,int ) ;
 TYPE_4__ VAR_5 ;
 int FUNC_4 (char,int ) ;

__attribute__((used)) static void
FUNC_5 (cpp_reader *VAR_6)
{
  bool VAR_7 = 0;

  VAR_5.source = ((void*)0);
  for (;;)
    {
      const cpp_token *VAR_8 = FUNC_2 (VAR_6);

      if (VAR_8->type == VAR_3)
 {
   VAR_7 = 1;
   if (VAR_5.source == ((void*)0)
       || (!(VAR_5.source->flags & VAR_4)
    && VAR_8->val.source == ((void*)0)))
     VAR_5.source = VAR_8->val.source;
   continue;
 }

      if (VAR_8->type == VAR_1)
 break;


      if (VAR_7)
 {
   if (VAR_5.source == ((void*)0))
     VAR_5.source = VAR_8;
   if (VAR_5.source->flags & VAR_4
       || (VAR_5.prev
    && FUNC_1 (VAR_6, VAR_5.prev, VAR_8))
       || (VAR_5.prev == ((void*)0) && VAR_8->type == VAR_2))
     FUNC_4 (' ', VAR_5.outf);
 }
      else if (VAR_8->flags & VAR_4)
 FUNC_4 (' ', VAR_5.outf);

      VAR_7 = 0;
      VAR_5.source = ((void*)0);
      VAR_5.prev = VAR_8;
      FUNC_3 (VAR_8, VAR_5.outf);

      if (VAR_8->type == VAR_0)
 FUNC_0 (VAR_8->val.str.text, VAR_8->val.str.len);
    }
}
