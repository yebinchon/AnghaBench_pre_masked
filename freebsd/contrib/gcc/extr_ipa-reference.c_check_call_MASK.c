
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct cgraph_node {int dummy; } ;
typedef TYPE_1__* ipa_reference_local_vars_info_t ;
typedef enum availability { ____Placeholder_availability } availability ;
struct TYPE_4__ {int calls_read_all; int calls_write_all; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,int) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct cgraph_node*) ;
 struct cgraph_node* FUNC_5 (scalar_t__) ;
 int FUNC_6 (TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;

__attribute__((used)) static void
FUNC_8 (ipa_reference_local_vars_info_t VAR_4, tree VAR_5)
{
  int VAR_6 = FUNC_3 (VAR_5);
  tree VAR_7 = FUNC_1 (VAR_5, 1);
  tree VAR_8;
  tree VAR_9 = FUNC_7 (VAR_5);
  enum availability VAR_10 = VAR_0;

  for (VAR_8 = VAR_7;
       VAR_8 != VAR_3;
       VAR_8 = FUNC_0 (VAR_8))
    {
      tree VAR_11 = FUNC_2 (VAR_8);
      FUNC_6 (VAR_4, VAR_11);
    }

  if (VAR_9)
    {
      struct cgraph_node* VAR_12 = FUNC_5(VAR_9);
      VAR_10 = FUNC_4 (VAR_12);
    }

  if (VAR_10 == VAR_0 || VAR_10 == VAR_1)
    if (VAR_4)
      {
 if (VAR_6 & VAR_2)
   VAR_4->calls_read_all = 1;
 else
   {
     VAR_4->calls_read_all = 1;
     VAR_4->calls_write_all = 1;
   }
      }
}
