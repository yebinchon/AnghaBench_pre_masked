
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uni {int custat; int arg; TYPE_1__* funcs; } ;
struct TYPE_2__ {int (* uni_output ) (struct uni*,int ,int ,int ,int *) ;} ;


 int FUNC_0 (int ,char*) ;




 int VAR_0 ;
 int FUNC_1 (struct uni*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct uni*,int ,char*,int) ;
 int FUNC_3 (struct uni*,int) ;
 int FUNC_4 (struct uni*,int ) ;
 int FUNC_5 (struct uni*,int ,int ,int ,int *) ;
 int FUNC_6 (struct uni*,int ,int ,int ,int *) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_7(struct uni *VAR_4)
{
 switch (VAR_4->custat) {

   case 131:
   case 129:
  FUNC_2(VAR_4, VAR_2,
      "signal saal_establish.confirm in CU%u", VAR_4->custat);
  break;

   case 130:



  FUNC_1(VAR_4, VAR_3);
  FUNC_4(VAR_4, VAR_0);
  VAR_4->funcs->uni_output(VAR_4, VAR_4->arg,
      VAR_1, 0, ((void*)0));
  FUNC_3(VAR_4, 128);
  break;

   case 128:



  FUNC_4(VAR_4, VAR_0);
  VAR_4->funcs->uni_output(VAR_4, VAR_4->arg,
      VAR_1, 0, ((void*)0));
  break;

   default:
  FUNC_0(0, ("CU_STAT*"));
 }
}
