
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int current; } ;
typedef TYPE_1__ FORM ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_2(int (*const VAR_3) (FORM *), FORM *VAR_4)
{
  int VAR_5 = VAR_1;

  if (!FUNC_1(VAR_4->current))
    {
      VAR_5 = VAR_3(VAR_4);
      if (VAR_5 == VAR_0)
 FUNC_0(VAR_4, VAR_2);
    }
  return (VAR_5);
}
