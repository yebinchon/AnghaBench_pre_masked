
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int ep; } ;
struct TYPE_11__ {TYPE_6__* ccl_sp; } ;
struct TYPE_10__ {TYPE_2__* gp; } ;
typedef TYPE_1__ SCR ;
typedef TYPE_2__ GS ;
typedef int FREF ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int * FUNC_1 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_2 (TYPE_6__*,int *,int *,int ) ;
 int FUNC_3 (TYPE_6__*) ;
 scalar_t__ FUNC_4 (TYPE_2__*,TYPE_1__*,TYPE_6__**) ;

__attribute__((used)) static int
FUNC_5(SCR *VAR_1)
{
 FREF *VAR_2;
 GS *VAR_3;

 VAR_3 = VAR_1->gp;


 if ((VAR_2 = FUNC_1(VAR_1, ((void*)0))) == ((void*)0))
  return (1);





 if (FUNC_4(VAR_3, VAR_1, &VAR_3->ccl_sp))
  return (1);
 if (FUNC_2(VAR_3->ccl_sp, VAR_2, ((void*)0), 0)) {
  (void)FUNC_3(VAR_3->ccl_sp);
  VAR_3->ccl_sp = ((void*)0);
  return (1);
 }


 FUNC_0(VAR_3->ccl_sp->ep, VAR_0);

 return (0);
}
