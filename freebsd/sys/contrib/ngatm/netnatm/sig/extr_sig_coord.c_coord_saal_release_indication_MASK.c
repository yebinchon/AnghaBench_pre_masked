
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uni {int custat; } ;


 int FUNC_0 (int ,char*) ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct uni*,int ,char*,int) ;
 int FUNC_2 (struct uni*,int const) ;
 int FUNC_3 (struct uni*,int ) ;

__attribute__((used)) static void
FUNC_4(struct uni *VAR_2)
{
 switch (VAR_2->custat) {

   case 131:
   case 129:
  FUNC_1(VAR_2, VAR_1,
      "signal saal_release.indication in CU%u", VAR_2->custat);
  break;

   case 130:
   case 128:




  FUNC_3(VAR_2, VAR_0);
  FUNC_2(VAR_2, 131);
  break;

   default:
  FUNC_0(0, ("CU_STAT*"));
 }
}
