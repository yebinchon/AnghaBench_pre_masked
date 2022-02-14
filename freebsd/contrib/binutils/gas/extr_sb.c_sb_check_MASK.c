
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int len; int pot; } ;
typedef TYPE_1__ sb ;


 int FUNC_0 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_3 (sb *VAR_0, int VAR_1)
{
  if (VAR_0->len + VAR_1 >= 1 << VAR_0->pot)
    {
      sb VAR_2;
      int VAR_3 = VAR_0->pot;

      while (VAR_0->len + VAR_1 >= 1 << VAR_3)
 VAR_3++;
      FUNC_1 (&VAR_2, VAR_3);
      FUNC_0 (&VAR_2, VAR_0);
      FUNC_2 (VAR_0);
      *VAR_0 = VAR_2;
    }
}
