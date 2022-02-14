
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tree ;
struct TYPE_2__ {scalar_t__ (* builtin_function ) (char const*,int ,int,int ,int *,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 TYPE_1__ VAR_2 ;
 scalar_t__* VAR_3 ;
 scalar_t__ FUNC_1 (char const*,int ,int,int ,int *,int ) ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_2 (int VAR_5, const char *VAR_6, tree VAR_7, int VAR_8)
{
  if (VAR_5 & VAR_4)
    {
      if (VAR_3[VAR_8])
 FUNC_0 ();

      VAR_3[VAR_8] =
        VAR_2.builtin_function (VAR_6, VAR_7, VAR_8, VAR_0,
         ((void*)0), VAR_1);
    }
}
