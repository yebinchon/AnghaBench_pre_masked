
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ tree ;
typedef int edge ;
struct TYPE_2__ {int decl; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int ,scalar_t__,scalar_t__) ;
 TYPE_1__* VAR_4 ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static void
FUNC_9 (void)
{
  edge VAR_5 = FUNC_7 (VAR_1);
  tree VAR_6;

  for (VAR_6 = FUNC_0 (VAR_4->decl); VAR_6 ; VAR_6 = FUNC_1 (VAR_6))
    {
      tree VAR_7 = FUNC_3 (VAR_6);
      tree VAR_8, VAR_9, VAR_10;

      if (FUNC_2 (VAR_7) != VAR_0 || !FUNC_6 (VAR_6))
 continue;

      VAR_7 = FUNC_3 (VAR_7);
      VAR_8 = FUNC_5 (VAR_6);
      if (!VAR_8)
 continue;

      VAR_9 = FUNC_4 (VAR_3, VAR_7, VAR_8);
      VAR_10 = FUNC_4 (VAR_2, VAR_7, VAR_8);
      FUNC_8 (VAR_5, VAR_8, VAR_9, VAR_10);
    }
}
