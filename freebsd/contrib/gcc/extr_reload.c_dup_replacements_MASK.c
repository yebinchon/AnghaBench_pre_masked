
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct replacement {int mode; int what; int * where; } ;
typedef int rtx ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ) ;
 struct replacement* VAR_1 ;

__attribute__((used)) static void
FUNC_1 (rtx *VAR_2, rtx *VAR_3)
{
  int VAR_4, VAR_5 = VAR_0;

  for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++)
    {
      struct replacement *VAR_6 = &VAR_1[VAR_4];
      if (VAR_6->where == VAR_3)
 FUNC_0 (VAR_2, VAR_6->what, VAR_6->mode);
    }
}
