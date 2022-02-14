
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int qctrl ;
struct TYPE_4__ {scalar_t__ aq_minfree; } ;
typedef TYPE_1__ au_qctrl_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (scalar_t__*) ;

int
FUNC_3(void)
{
 au_qctrl_t VAR_3;

 if (FUNC_2(&VAR_2) != 0)
  return (VAR_1);

 if (FUNC_0(&VAR_3, sizeof(VAR_3)) != 0)
  return (VAR_0);

 if (VAR_3.aq_minfree != VAR_2) {
  VAR_3.aq_minfree = VAR_2;
  if (FUNC_1(&VAR_3, sizeof(VAR_3)) != 0)
   return (VAR_0);
 }

 return (0);
}
