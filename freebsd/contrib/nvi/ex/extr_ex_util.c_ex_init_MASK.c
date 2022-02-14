
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int (* scr_attr ) (TYPE_1__*,int ,int ) ;scalar_t__ (* scr_screen ) (TYPE_1__*,int) ;} ;
struct TYPE_9__ {void* cols; void* rows; TYPE_2__* gp; } ;
typedef TYPE_1__ SCR ;
typedef TYPE_2__ GS ;


 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_2 (TYPE_1__*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (TYPE_1__*,int ,int ) ;

int
FUNC_5(SCR *VAR_6)
{
 GS *VAR_7;

 VAR_7 = VAR_6->gp;

 if (VAR_7->scr_screen(VAR_6, VAR_3))
  return (1);
 (void)VAR_7->scr_attr(VAR_6, VAR_2, 0);

 VAR_6->rows = FUNC_2(VAR_6, VAR_1);
 VAR_6->cols = FUNC_2(VAR_6, VAR_0);

 FUNC_0(VAR_6, VAR_5);
 FUNC_1(VAR_6, VAR_3 | VAR_4);
 return (0);
}
