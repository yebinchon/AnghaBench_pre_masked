
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_15__ {TYPE_2__* frp; TYPE_1__* gp; } ;
struct TYPE_14__ {int * name; } ;
struct TYPE_13__ {int (* scr_rename ) (TYPE_3__*,int *,int) ;} ;
typedef TYPE_3__ SCR ;
typedef int EXCMD ;


 int FUNC_0 (TYPE_3__*,int ) ;
 int FUNC_1 (TYPE_3__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (TYPE_3__*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (char**,char*,int ) ;
 int FUNC_4 (TYPE_3__*,int *,char*,int *,int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (TYPE_3__*,int ,int *) ;
 scalar_t__ FUNC_7 (TYPE_3__*,int ,int ) ;
 int FUNC_8 (TYPE_3__*,int *,int) ;
 int FUNC_9 (TYPE_3__*,int *,int) ;

int
FUNC_10(SCR *VAR_4, EXCMD *VAR_5)
{
 int VAR_6;
 char *VAR_7;


 if (FUNC_7(VAR_4, VAR_1, 0))
  return (1);





 (void)FUNC_3(&VAR_7, "%d -i", FUNC_2(VAR_4, VAR_1));
 if (VAR_7 == ((void*)0)) {
  FUNC_6(VAR_4, VAR_0, ((void*)0));
  return (1);
 }


 (void)VAR_4->gp->scr_rename(VAR_4, ((void*)0), 0);


 VAR_6 = FUNC_4(VAR_4, VAR_5, VAR_7, ((void*)0), !FUNC_0(VAR_4, VAR_3));
 FUNC_5(VAR_7);


 (void)VAR_4->gp->scr_rename(VAR_4, VAR_4->frp->name, 1);






 FUNC_1(VAR_4, VAR_2);

 return (VAR_6);
}
