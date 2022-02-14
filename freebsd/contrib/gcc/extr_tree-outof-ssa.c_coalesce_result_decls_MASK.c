
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int var_map ;
typedef int * tree ;
typedef int coalesce_list_p ;
struct TYPE_3__ {int frequency; } ;


 TYPE_1__* VAR_0 ;
 int * VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,unsigned int,unsigned int,int ) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (TYPE_1__*) ;
 unsigned int FUNC_5 (int ) ;
 int * FUNC_6 (int ,unsigned int) ;

__attribute__((used)) static void
FUNC_7 (var_map VAR_3, coalesce_list_p VAR_4)
{
  unsigned int VAR_5, VAR_6;
  tree VAR_7 = ((void*)0);

  for (VAR_5 = VAR_6 = 0; VAR_6 < FUNC_5 (VAR_3); VAR_6++)
    {
      tree VAR_8 = FUNC_6 (VAR_3, VAR_6);
      if (FUNC_1 (FUNC_0 (VAR_8)) == VAR_2)
 {
   if (VAR_7 == VAR_1)
     {
       VAR_7 = VAR_8;
       VAR_5 = VAR_6;
     }
   else
     FUNC_2 (VAR_4, VAR_5, VAR_6,
     FUNC_3 (VAR_0->frequency,
      FUNC_4 (VAR_0),
      0));
 }
    }
}
