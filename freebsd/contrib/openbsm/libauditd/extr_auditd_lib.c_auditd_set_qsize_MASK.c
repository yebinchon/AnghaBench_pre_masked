
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int aq_hiwater; } ;
typedef TYPE_1__ au_qctrl_t ;
typedef int au_qctrl ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int) ;
 scalar_t__ FUNC_2 (int*) ;

int
FUNC_3(void)
{
 int VAR_4;
 au_qctrl_t VAR_5;




 if (FUNC_2(&VAR_4) != 0)
  return (VAR_2);

 if (FUNC_0(&VAR_5, sizeof(VAR_5)) != 0)
  return (VAR_0);
 if (VAR_4 != VAR_3)
  VAR_5.aq_hiwater = VAR_4;
 if (FUNC_1(&VAR_5, sizeof(VAR_5)) != 0)
  return (VAR_0);

 return (VAR_1);
}
