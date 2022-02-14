
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int dev_t ;
struct TYPE_3__ {int machine; int port; } ;
typedef TYPE_1__ au_tid_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;

int
FUNC_2(au_tid_t *VAR_2)
{
 dev_t VAR_3;
 int VAR_4;

 if (VAR_2 == ((void*)0))
  return (VAR_0);
 if ((VAR_4 = FUNC_1(&VAR_3)) != VAR_1)
  return (VAR_4);
 VAR_2->port = VAR_3;
 return (FUNC_0(&VAR_2->machine));
}
