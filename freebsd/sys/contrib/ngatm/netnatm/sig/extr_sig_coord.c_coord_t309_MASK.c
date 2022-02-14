
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uni {int custat; int arg; TYPE_1__* funcs; } ;
struct TYPE_2__ {int (* uni_output ) (struct uni*,int ,int ,int ,int *) ;} ;


 int FUNC_0 (int ,char*) ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct uni*,int ,char*,int) ;
 int FUNC_2 (struct uni*,int const) ;
 int FUNC_3 (struct uni*,int ) ;
 int FUNC_4 (struct uni*,int ,int ,int ,int *) ;

__attribute__((used)) static void
FUNC_5(struct uni *VAR_3)
{
 switch (VAR_3->custat) {

   case 131:
   case 130:



  FUNC_3(VAR_3, VAR_0);
  FUNC_2(VAR_3, 131);


  VAR_3->funcs->uni_output(VAR_3, VAR_3->arg,
      VAR_1, 0, ((void*)0));
  break;

   case 129:
   case 128:
  FUNC_1(VAR_3, VAR_2,
      "signal T309 in CU%u", VAR_3->custat);
  break;

   default:
  FUNC_0(0, ("CU_STAT*"));
 }
}
