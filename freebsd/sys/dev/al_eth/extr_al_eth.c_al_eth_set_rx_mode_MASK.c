
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct ifnet {int if_flags; } ;
struct al_eth_adapter {struct ifnet* netdev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct al_eth_adapter*,scalar_t__,int) ;
 int FUNC_1 (struct al_eth_adapter*,scalar_t__) ;
 int FUNC_2 (struct al_eth_adapter*,int) ;
 int VAR_6 ;
 int FUNC_3 (struct ifnet*,int ,struct al_eth_adapter*) ;
 int FUNC_4 (struct ifnet*,int ,int *) ;
 int FUNC_5 (struct ifnet*) ;

__attribute__((used)) static void
FUNC_6(struct al_eth_adapter *VAR_7)
{
 struct ifnet *VAR_8 = VAR_7->netdev;
 int VAR_9, VAR_10;
 uint8_t VAR_11;


 VAR_9 = FUNC_4(VAR_8, VAR_5, ((void*)0));
 VAR_10 = FUNC_5(VAR_8);

 if ((VAR_8->if_flags & VAR_4) != 0) {
  FUNC_2(VAR_7, 1);
 } else {
  if ((VAR_8->if_flags & VAR_3) != 0) {

   FUNC_0(VAR_7,
       VAR_0, 1);
  } else {
   if (VAR_9 == 0) {
    FUNC_1(VAR_7,
        VAR_0);
   } else {
    FUNC_0(VAR_7,
        VAR_0, 1);
   }
  }
  if (VAR_10 != 0) {
   VAR_11 = VAR_1 + 1;
   if (VAR_10 > VAR_2) {




    FUNC_2(VAR_7, 1);
    return;
   }


   while (VAR_11 < (VAR_1 +
        VAR_2)) {
    FUNC_1(VAR_7, VAR_11);
    VAR_11++;
   }


   FUNC_3(VAR_8, VAR_6, VAR_7);
  }
  FUNC_2(VAR_7, 0);
 }
}
