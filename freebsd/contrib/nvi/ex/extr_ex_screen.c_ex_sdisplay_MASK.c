
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {int hq; } ;
struct TYPE_12__ {int cols; TYPE_1__* frp; TYPE_3__* gp; } ;
struct TYPE_11__ {char* name; } ;
typedef TYPE_2__ SCR ;
typedef TYPE_3__ GS ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 TYPE_2__* FUNC_1 (int ) ;
 TYPE_2__* FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_2__*,char*) ;
 int FUNC_4 (TYPE_2__*,int ,char*) ;
 int VAR_1 ;
 int FUNC_5 (char*) ;

int
FUNC_6(SCR *VAR_2)
{
 GS *VAR_3;
 SCR *VAR_4;
 int VAR_5, VAR_6, VAR_7, VAR_8;

 VAR_3 = VAR_2->gp;
 if ((VAR_4 = FUNC_1(VAR_3->hq)) == ((void*)0)) {
  FUNC_4(VAR_2, VAR_0, "149|No background screens to display");
  return (0);
 }

 VAR_6 = VAR_7 = VAR_8 = 0;
 for (VAR_5 = 1; VAR_4 != ((void*)0) && !FUNC_0(VAR_2);
     VAR_4 = FUNC_2(VAR_4, VAR_1)) {
  VAR_6 += VAR_7 = FUNC_5(VAR_4->frp->name) + VAR_8;
  if (VAR_6 >= VAR_2->cols - 1) {
   VAR_6 = VAR_7;
   VAR_8 = 0;
   (void)FUNC_3(VAR_2, "\n");
  } else if (VAR_5 != 1) {
   VAR_8 = 1;
   (void)FUNC_3(VAR_2, " ");
  }
  (void)FUNC_3(VAR_2, VAR_4->frp->name);
  ++VAR_5;
 }
 if (!FUNC_0(VAR_2))
  (void)FUNC_3(VAR_2, "\n");
 return (0);
}
