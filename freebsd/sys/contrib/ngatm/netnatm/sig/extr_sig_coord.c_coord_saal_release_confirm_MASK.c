
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
 int FUNC_1 (struct uni*,int ,char*,int) ;
 int FUNC_2 (struct uni*,int const) ;
 int FUNC_3 (struct uni*,int ,int ,int ,int *) ;

__attribute__((used)) static void
FUNC_4(struct uni *VAR_2)
{
 switch (VAR_2->custat) {

   case 131:
   case 130:
   case 128:
  FUNC_1(VAR_2, VAR_1,
      "signal saal_release.confirm in CU%u", VAR_2->custat);
  break;

   case 129:



  VAR_2->funcs->uni_output(VAR_2, VAR_2->arg,
      VAR_0, 0, ((void*)0));
  FUNC_2(VAR_2, 131);
  break;

   default:
  FUNC_0(0, ("CU_STAT*"));
 }
}
