
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int ulong_t ;
struct TYPE_5__ {int dr_size; int * dr_bitmap; } ;
typedef TYPE_1__ dt_regset_t ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (int ,int) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (int) ;

dt_regset_t *
FUNC_4(ulong_t VAR_0)
{
 ulong_t VAR_1 = FUNC_0(VAR_0);
 dt_regset_t *VAR_2 = FUNC_3(sizeof (dt_regset_t));

 if (VAR_2 == ((void*)0))
  return (((void*)0));

 VAR_2->dr_bitmap = FUNC_1(VAR_1, sizeof (ulong_t));

 if (VAR_2->dr_bitmap == ((void*)0)) {
  FUNC_2(VAR_2);
  return (((void*)0));
 }

 VAR_2->dr_size = VAR_0;

 return (VAR_2);
}
