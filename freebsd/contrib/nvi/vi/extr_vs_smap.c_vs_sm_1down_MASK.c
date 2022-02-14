
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int rows; TYPE_1__* gp; } ;
struct TYPE_9__ {int (* scr_move ) (TYPE_2__*,int ,int ) ;} ;
typedef int SMAP ;
typedef TYPE_2__ SCR ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (scalar_t__,scalar_t__,int) ;
 int FUNC_2 (TYPE_2__*,int ,int ) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (TYPE_2__*,scalar_t__,int *,int *) ;
 scalar_t__ FUNC_5 (TYPE_2__*,scalar_t__,scalar_t__) ;

int
FUNC_6(SCR *VAR_1)
{




 (void)VAR_1->gp->scr_move(VAR_1, 0, 0);
 if (FUNC_3(VAR_1, 1))
  return (1);


 if (FUNC_0(VAR_1)) {
  if (FUNC_5(VAR_1, VAR_0, VAR_0))
   return (1);
 } else {
  FUNC_1(VAR_0 + 1, VAR_0, (VAR_1->rows - 1) * sizeof(SMAP));
  if (FUNC_5(VAR_1, VAR_0 + 1, VAR_0))
   return (1);
 }

 return (FUNC_4(VAR_1, VAR_0, ((void*)0), ((void*)0)));
}
