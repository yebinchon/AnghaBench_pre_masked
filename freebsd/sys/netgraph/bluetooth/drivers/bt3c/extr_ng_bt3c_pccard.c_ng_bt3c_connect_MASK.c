
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int * hook_p ;
typedef TYPE_1__* bt3c_softc_p ;
struct TYPE_2__ {int * hook; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(hook_p VAR_1)
{
 bt3c_softc_p VAR_2 = (bt3c_softc_p) FUNC_3(FUNC_1(VAR_1));

 if (VAR_1 != VAR_2->hook) {
  VAR_2->hook = ((void*)0);
  return (VAR_0);
 }


 FUNC_0(FUNC_2(VAR_1));

 return (0);
}
