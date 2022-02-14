
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {TYPE_5__* context; } ;
typedef TYPE_3__ cpp_reader ;
struct TYPE_11__ {TYPE_1__* macro; } ;
struct TYPE_13__ {int flags; TYPE_2__ value; } ;
typedef TYPE_4__ cpp_hashnode ;
struct TYPE_14__ {struct TYPE_14__* prev; TYPE_4__* macro; } ;
typedef TYPE_5__ cpp_context ;
struct TYPE_10__ {scalar_t__ fun_like; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_3__*,int ,char*,int ) ;

__attribute__((used)) static bool
FUNC_2 (cpp_reader *VAR_2, cpp_hashnode *VAR_3)
{
  bool VAR_4 = !!(VAR_3->flags & VAR_1);
  if (VAR_4 && VAR_3->value.macro->fun_like)
    {
      size_t VAR_5 = 0;
      cpp_context *VAR_6 = VAR_2->context;

      do
 {
   VAR_5++;
   if (VAR_6->macro == VAR_3 && VAR_5 > 20)
     break;
   VAR_6 = VAR_6->prev;
 }
      while (VAR_6);
      VAR_4 = VAR_6 != ((void*)0);
    }

  if (VAR_4)
    FUNC_1 (VAR_2, VAR_0,
        "detected recursion whilst expanding macro \"%s\"",
        FUNC_0 (VAR_3));

  return VAR_4;
}
