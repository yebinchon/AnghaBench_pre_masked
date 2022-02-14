
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int tree ;
struct TYPE_4__ {scalar_t__ line; int file; } ;
typedef TYPE_1__ location_t ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__,int ) ;
 int FUNC_5 (char*,int ) ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (int ,char*,int ) ;

__attribute__((used)) static void
FUNC_7 (tree VAR_5, tree VAR_6)
{
  if (!VAR_4)
    {
      if (FUNC_0 (VAR_5) == VAR_0)
 {
   location_t VAR_7;

   FUNC_5 ("label %q+D used but not defined", VAR_5);



   VAR_7.file = VAR_2;
   VAR_7.line = 0;


   FUNC_4 (VAR_7, FUNC_1 (VAR_5));
 }
      else if (!FUNC_3 (VAR_5))
 FUNC_6 (VAR_1, "label %q+D defined but not used", VAR_5);
    }

  FUNC_2 (FUNC_1 (VAR_5), VAR_6);
}
