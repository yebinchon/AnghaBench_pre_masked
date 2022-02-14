
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int nvpriv_t ;
struct TYPE_9__ {scalar_t__ nvl_priv; int nvl_nvflag; } ;
typedef TYPE_1__ nvlist_t ;


 int VAR_0 ;
 int * FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ,int *) ;

__attribute__((used)) static int
FUNC_4(nvlist_t *VAR_1, nvlist_t *VAR_2, nvlist_t *VAR_3)
{
 nvpriv_t *VAR_4;
 int VAR_5;

 if ((VAR_4 = FUNC_0((nvpriv_t *)(uintptr_t)
     VAR_1->nvl_priv)) == ((void*)0))
  return (VAR_0);

 FUNC_3(VAR_3, VAR_2->nvl_nvflag, VAR_4);

 if ((VAR_5 = FUNC_1(VAR_2, VAR_3)) != 0) {
  FUNC_2(VAR_3);
  VAR_3->nvl_priv = 0;
 }

 return (VAR_5);
}
