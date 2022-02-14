
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct netfront_info {int xn_reset; int xbdev; TYPE_1__* xn_ifp; } ;
typedef int device_t ;
typedef int XenbusState ;
struct TYPE_2__ {int if_vnet; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int) ;
 struct netfront_info* FUNC_3 (int ) ;
 int FUNC_4 (int ,struct netfront_info*) ;
 int FUNC_5 (struct netfront_info*) ;
 int const FUNC_6 (int ) ;
 int FUNC_7 (int ,int const) ;
 int FUNC_8 (struct netfront_info*) ;
 int FUNC_9 (struct netfront_info*) ;

__attribute__((used)) static void
FUNC_10(device_t VAR_0, XenbusState VAR_1)
{
 struct netfront_info *VAR_2 = FUNC_3(VAR_0);

 FUNC_2("newstate=%d\n", VAR_1);

 FUNC_1(VAR_2->xn_ifp->if_vnet);

 switch (VAR_1) {
 case 131:
 case 132:
 case 128:
 case 130:
 case 129:
  break;
 case 133:
  if (FUNC_6(VAR_0) != 131)
   break;
  if (FUNC_8(VAR_2) != 0)
   break;

  FUNC_7(VAR_2->xbdev, 134);
  FUNC_9(VAR_2);
  break;
 case 135:
  FUNC_7(VAR_0, 136);
  break;
 case 136:
  if (VAR_2->xn_reset) {
   FUNC_5(VAR_2);
   FUNC_7(VAR_0, 131);
   VAR_2->xn_reset = 0;
  }
  break;
 case 134:



  break;
 }

 FUNC_0();
}
