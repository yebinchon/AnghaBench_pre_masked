
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ name; scalar_t__ scope; scalar_t__ template_id; scalar_t__ enum_p; scalar_t__ class_p; } ;
typedef TYPE_1__ typename_info ;
typedef scalar_t__ tree ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;

__attribute__((used)) static int
FUNC_6 (const void * VAR_0, const void * VAR_1)
{
  tree VAR_2;
  const typename_info *VAR_3;

  VAR_2 = (tree) VAR_0;
  VAR_3 = (const typename_info *) VAR_1;

  return (FUNC_0 (FUNC_5 (VAR_2)) == VAR_3->name
   && FUNC_4 (VAR_2) == VAR_3->scope
   && FUNC_3 (VAR_2) == VAR_3->template_id
   && FUNC_2 (VAR_2) == VAR_3->enum_p
   && FUNC_1 (VAR_2) == VAR_3->class_p);
}
