
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct set_of_data {int found; int pat; } ;
typedef int rtx ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;

__attribute__((used)) static void
FUNC_3 (rtx VAR_0, rtx VAR_1, void *VAR_2)
{
   struct set_of_data *VAR_3 = (struct set_of_data *) (VAR_2);
   if (FUNC_2 (VAR_0, VAR_3->pat)
       || (!FUNC_0 (VAR_0) && FUNC_1 (VAR_3->pat, VAR_0)))
     VAR_3->found = VAR_1;
}
