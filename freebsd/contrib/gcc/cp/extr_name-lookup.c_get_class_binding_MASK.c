
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct TYPE_4__ {scalar_t__ this_entity; } ;
typedef TYPE_1__ cxx_scope ;
typedef int cxx_binding ;
typedef int LOCAL_BINDING_P ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_6 (scalar_t__,scalar_t__,int,int) ;
 int * FUNC_7 (scalar_t__,scalar_t__,scalar_t__,TYPE_1__*) ;
 int FUNC_8 (int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static cxx_binding *
FUNC_9 (tree VAR_3, cxx_scope *VAR_4)
{
  tree VAR_5;
  tree VAR_6;
  tree VAR_7;
  cxx_binding *VAR_8;

  VAR_5 = VAR_4->this_entity;


  VAR_6 = FUNC_6 (VAR_5, VAR_3,
                2, 1);

  VAR_7 = FUNC_6 (VAR_5, VAR_3,
                 2, 0);

  if (VAR_7
      && (FUNC_3 (VAR_7) == VAR_1
   || FUNC_2 (VAR_7)
   || (FUNC_3 (VAR_7) == VAR_0
       && FUNC_4 (VAR_7) == VAR_2
       && (FUNC_3 (FUNC_5 (VAR_7))
    == VAR_1))))



    ;
  else if (VAR_7)
    {
      if (FUNC_3 (VAR_7) == VAR_0
   && FUNC_4 (VAR_7) == VAR_2)

 ;
      else if (FUNC_1 (VAR_7))

 VAR_7 = FUNC_0 (VAR_7);
    }



  if (VAR_6 || VAR_7)
    {
      VAR_8 = FUNC_7 (VAR_3,
       VAR_7,
       VAR_6,
       VAR_4);

      LOCAL_BINDING_P (VAR_9) = 0;
      FUNC_8 (VAR_9, VAR_7, VAR_5);
    }
  else
    VAR_8 = ((void*)0);

  return VAR_8;
}
