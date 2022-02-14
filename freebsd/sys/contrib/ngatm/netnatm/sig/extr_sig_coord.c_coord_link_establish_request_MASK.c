
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct uni {int custat; int arg; TYPE_1__* funcs; int timer309; } ;
struct TYPE_2__ {int (* uni_output ) (struct uni*,int ,int ,int ,int *) ;int (* saal_output ) (struct uni*,int ,int ,int *) ;} ;


 int FUNC_0 (int ,char*) ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct uni*,int ) ;
 int FUNC_2 (struct uni*,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct uni*,int ,char*,int) ;
 int FUNC_4 (struct uni*,int) ;
 int FUNC_5 (struct uni*,int ,int ,int *) ;
 int FUNC_6 (struct uni*,int ,int ,int ,int *) ;
 int VAR_6 ;
 int FUNC_7 (struct uni*,int ,int ,int *) ;
 int FUNC_8 (struct uni*,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_9(struct uni *VAR_7, uint32_t VAR_8)
{
 switch (VAR_7->custat) {

   case 131:



  VAR_7->funcs->saal_output(VAR_7, VAR_7->arg,
      VAR_0, ((void*)0));
  if (!FUNC_1(VAR_7, VAR_6))
   FUNC_2(VAR_7, VAR_6, VAR_7->timer309);
  FUNC_4(VAR_7, 130);
  if (VAR_8)
   FUNC_8(VAR_7, VAR_4, VAR_8, 0);
  break;

   case 130:




  FUNC_7(VAR_7, VAR_1,
      VAR_8, ((void*)0));
  break;

   case 129:
  FUNC_8(VAR_7, VAR_2, VAR_8, 0);
  if (VAR_8 == 0)
   FUNC_3(VAR_7, VAR_5,
       "signal link-establish.request in CU%u",
       VAR_7->custat);
  break;

   case 128:



  VAR_7->funcs->uni_output(VAR_7, VAR_7->arg,
      VAR_3, 0, ((void*)0));
  FUNC_8(VAR_7, VAR_4, VAR_8, 0);
  break;

   default:
  FUNC_0(0, ("CU_STAT*"));
 }
}
