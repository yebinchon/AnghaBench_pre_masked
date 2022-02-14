
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ recno_t ;
struct TYPE_13__ {scalar_t__ ep; TYPE_1__* gp; } ;
struct TYPE_12__ {size_t len; int lb; } ;
struct TYPE_11__ {TYPE_3__* ccl_sp; } ;
typedef TYPE_2__ TEXT ;
typedef TYPE_3__ SCR ;
typedef int CHAR_T ;


 int FUNC_0 (int ,int *,size_t) ;
 int FUNC_1 (TYPE_3__*,int ,scalar_t__,int ,size_t) ;
 int FUNC_2 (TYPE_3__*,scalar_t__,int ,int **,size_t*) ;
 scalar_t__ FUNC_3 (TYPE_3__*,scalar_t__*) ;
 int FUNC_4 (TYPE_3__*) ;
 scalar_t__ FUNC_5 (TYPE_3__*) ;

__attribute__((used)) static int
FUNC_6(SCR *VAR_0, TEXT *VAR_1)
{
 recno_t VAR_2;
 int VAR_3;
 CHAR_T *VAR_4;
 size_t VAR_5;
 SCR *VAR_6;


 if (VAR_0->gp->ccl_sp == ((void*)0) && FUNC_5(VAR_0))
  return (1);

 VAR_6 = VAR_0->gp->ccl_sp;





 if (VAR_0->ep == VAR_6->ep)
  return (0);

 if (FUNC_3(VAR_6, &VAR_2)) {
  return (1);
 }

 if (VAR_2 > 0 &&
     !FUNC_2(VAR_6, VAR_2, 0, &VAR_4, &VAR_5) &&
     VAR_5 == VAR_1->len &&
     !FUNC_0(VAR_1->lb, VAR_4, VAR_5))
  VAR_3 = 0;
 else {
  VAR_3 = FUNC_1(VAR_6, 0, VAR_2, VAR_1->lb, VAR_1->len);


  FUNC_4(VAR_6);
 }

 return (VAR_3);
}
