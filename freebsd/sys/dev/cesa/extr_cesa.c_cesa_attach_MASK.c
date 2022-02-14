
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource_list {int dummy; } ;
struct simplebus_devinfo {struct resource_list rl; } ;
struct cesa_softc {int sc_cesa_engine_id; } ;
typedef int device_t ;
struct TYPE_2__ {int rid; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 struct simplebus_devinfo* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct cesa_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (struct resource_list*,int ,int,scalar_t__,int ,scalar_t__) ;
 int FUNC_8 (struct resource_list*,int ,int) ;
 TYPE_1__* FUNC_9 (struct resource_list*,int ,int) ;
 int FUNC_10 (int ,int ,int ,char*,int,int *) ;

__attribute__((used)) static int
FUNC_11(device_t VAR_9)
{
 static int VAR_10 = 0;
 struct simplebus_devinfo *VAR_11;
 struct resource_list *VAR_12;
 struct cesa_softc *VAR_13;

 if (!FUNC_6(VAR_9, "marvell,armada-38x-crypto"))
  return (FUNC_0(VAR_9));
 if ((VAR_11 = FUNC_1(VAR_9)) == ((void*)0))
  return (VAR_6);

 VAR_12 = &VAR_11->rl;

 switch (VAR_10) {
  case 0:

   FUNC_7(VAR_12, VAR_8, 0, VAR_1,
       VAR_1 + VAR_5 - 1, VAR_5);
   FUNC_7(VAR_12, VAR_8, 1, VAR_0,
       VAR_0 + VAR_4 - 1, VAR_4);


   FUNC_8(VAR_12, VAR_7, 1);
   break;

  case 1:

   FUNC_7(VAR_12, VAR_8, 0, VAR_3,
       VAR_3 + VAR_5 - 1, VAR_5);
   FUNC_7(VAR_12, VAR_8, 1, VAR_2,
       VAR_2 + VAR_4 - 1, VAR_4);


   FUNC_8(VAR_12, VAR_7, 0);
   FUNC_9(VAR_12, VAR_7, 1)->rid = 0;
   break;

  default:
   FUNC_4(VAR_9, "Bad cesa engine_idx\n");
   return (VAR_6);
 }

 VAR_13 = FUNC_3(VAR_9);
 VAR_13->sc_cesa_engine_id = VAR_10;
 if (VAR_10 == 0)
  FUNC_10(FUNC_2(VAR_9), FUNC_5(VAR_9),
      0, "cesa", 1, ((void*)0));

 VAR_10++;

 return (FUNC_0(VAR_9));
}
