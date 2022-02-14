
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int u_long ;
struct TYPE_13__ {TYPE_1__* frp; struct TYPE_13__* gp; } ;
struct TYPE_12__ {int * name; } ;
typedef TYPE_2__ SCR ;
typedef TYPE_2__ CL_PRIVATE ;


 TYPE_2__* FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (TYPE_2__*,int) ;
 int VAR_1 ;





 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (TYPE_2__*,TYPE_2__*,int ) ;
 int FUNC_4 (TYPE_2__*,int *,int) ;

int
FUNC_5(SCR *VAR_4, int VAR_5, char *VAR_6, u_long *VAR_7)
{
 CL_PRIVATE *VAR_8;

 VAR_8 = FUNC_0(VAR_4);

 switch (VAR_5) {
 case 129:
  FUNC_1(VAR_4, VAR_2 | VAR_3);

 case 132:
 case 131:




  FUNC_2(VAR_4->gp, VAR_1);
  break;
 case 130:
  (void)FUNC_3(VAR_4, VAR_8, *VAR_7);
  break;
 case 128:
  if (*VAR_7) {
   FUNC_2(VAR_8, VAR_0);





   if (VAR_4->frp != ((void*)0) && VAR_4->frp->name != ((void*)0))
    (void)FUNC_4(VAR_4, VAR_4->frp->name, 1);
  } else {
   FUNC_1(VAR_8, VAR_0);

   (void)FUNC_4(VAR_4, ((void*)0), 0);
  }
  break;
 }
 return (0);
}
