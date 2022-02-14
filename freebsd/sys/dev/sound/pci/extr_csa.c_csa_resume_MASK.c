
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* sc_p ;
typedef int device_t ;
typedef int csa_res ;
struct TYPE_4__ {int res; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *) ;
 TYPE_1__* FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_1)
{
 csa_res *VAR_2;
 sc_p VAR_3;

 VAR_3 = FUNC_4(VAR_1);
 VAR_2 = &VAR_3->res;


 if (FUNC_2(VAR_3))
  return (VAR_0);


 FUNC_3(VAR_2);


 if (FUNC_1(VAR_2))
  return (VAR_0);

 return (FUNC_0(VAR_1));
}
