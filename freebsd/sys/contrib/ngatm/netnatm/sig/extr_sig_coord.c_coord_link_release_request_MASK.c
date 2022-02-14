
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct uni {int custat; int arg; TYPE_1__* funcs; } ;
struct TYPE_2__ {int (* saal_output ) (struct uni*,int ,int ,int *) ;} ;


 int FUNC_0 (int ,char*) ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct uni*,int const) ;
 int FUNC_2 (struct uni*,int ,int ,int *) ;
 int FUNC_3 (struct uni*,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_4(struct uni *VAR_3, u_int VAR_4)
{
 switch (VAR_3->custat) {

   case 131:
   case 130:
   case 129:
  FUNC_3(VAR_3, VAR_1, VAR_4, 0);
  break;

   case 128:



  VAR_3->funcs->saal_output(VAR_3, VAR_3->arg,
      VAR_0, ((void*)0));
  FUNC_1(VAR_3, 129);
  FUNC_3(VAR_3, VAR_2, VAR_4, 0);
  break;

   default:
  FUNC_0(0, ("CU_STAT*"));
 }
}
