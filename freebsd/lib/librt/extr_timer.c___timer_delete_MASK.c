
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* timer_t ;
struct TYPE_4__ {int oshandle; int * node; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int FUNC_4 (TYPE_1__*) ;

int
FUNC_5(timer_t VAR_1)
{
 int VAR_2, VAR_3;

 if (VAR_1->node != ((void*)0)) {
  FUNC_1();
  FUNC_0(VAR_1->node);
  FUNC_2();
 }
 VAR_2 = FUNC_3(VAR_1->oshandle);
 VAR_3 = VAR_0;
 FUNC_4(VAR_1);
 VAR_0 = VAR_3;
 return (VAR_2);
}
