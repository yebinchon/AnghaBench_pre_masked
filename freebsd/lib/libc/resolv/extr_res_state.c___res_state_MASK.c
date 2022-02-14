
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef TYPE_1__* res_state ;
struct TYPE_10__ {int options; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 TYPE_1__* FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 () ;
 scalar_t__ FUNC_5 (int *,int ) ;
 scalar_t__ FUNC_6 (int ,TYPE_1__*) ;

res_state
FUNC_7(void)
{
 res_state VAR_6;

 if (FUNC_4() != 0)
  return FUNC_2(&VAR_1);

 if (FUNC_5(&VAR_2, VAR_4) != 0 ||
     !VAR_5)
  return (&VAR_1);

 VAR_6 = FUNC_3(VAR_3);
 if (VAR_6 != ((void*)0))
  return FUNC_2(VAR_6);
 VAR_6 = FUNC_0(1, sizeof(*VAR_6));
 if (VAR_6 == ((void*)0))
  return (&VAR_1);



 if (FUNC_6(VAR_3, VAR_6) == 0)
  return (VAR_6);
 FUNC_1(VAR_6);
 return (&VAR_1);
}
