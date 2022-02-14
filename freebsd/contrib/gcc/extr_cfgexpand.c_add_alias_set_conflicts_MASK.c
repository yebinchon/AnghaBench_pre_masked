
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tree ;
struct TYPE_2__ {int decl; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (size_t,size_t) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 TYPE_1__* VAR_0 ;
 size_t VAR_1 ;

__attribute__((used)) static void
FUNC_5 (void)
{
  size_t VAR_2, VAR_3, VAR_4 = VAR_1;

  for (VAR_2 = 0; VAR_2 < VAR_4; ++VAR_2)
    {
      tree VAR_5 = FUNC_1 (VAR_0[VAR_2].decl);
      bool VAR_6 = FUNC_0 (VAR_5);
      bool VAR_7;

      VAR_7 = FUNC_3 (VAR_5);
      for (VAR_3 = 0; VAR_3 < VAR_2; ++VAR_3)
 {
   tree VAR_8 = FUNC_1 (VAR_0[VAR_3].decl);
   bool VAR_9 = FUNC_0 (VAR_8);
   if (VAR_6 != VAR_9


       || !FUNC_4 (VAR_5, VAR_8)





       || VAR_7)
     FUNC_2 (VAR_2, VAR_3);
 }
    }
}
