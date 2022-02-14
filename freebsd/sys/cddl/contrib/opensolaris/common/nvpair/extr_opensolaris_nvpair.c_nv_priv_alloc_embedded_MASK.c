
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int nvp_nva; } ;
typedef TYPE_1__ nvpriv_t ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static nvpriv_t *
FUNC_2(nvpriv_t *VAR_1)
{
 nvpriv_t *VAR_2;

 if ((VAR_2 = FUNC_0(VAR_1, sizeof (nvpriv_t))) == ((void*)0))
  return (((void*)0));

 FUNC_1(VAR_2, VAR_1->nvp_nva, VAR_0);

 return (VAR_2);
}
