
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* mqd_t ;
struct TYPE_4__ {int oshandle; int * node; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_1__*) ;

int
FUNC_5(mqd_t VAR_0)
{
 int VAR_1;

 if (VAR_0->node != ((void*)0)) {
  FUNC_1();
  FUNC_0(VAR_0->node);
  FUNC_2();
 }
 VAR_1 = VAR_0->oshandle;
 FUNC_4(VAR_0);
 return (FUNC_3(VAR_1));
}
