
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct e1000_mac_info {int serdes_link_state; int txcw; void* serdes_has_link; } ;
struct e1000_hw {struct e1000_mac_info mac; } ;
typedef int s32 ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct e1000_hw*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (struct e1000_hw*,int ,int) ;
 void* VAR_13 ;
 void* VAR_14 ;
 int FUNC_4 (struct e1000_hw*) ;




 int FUNC_5 (int) ;

__attribute__((used)) static s32 FUNC_6(struct e1000_hw *VAR_15)
{
 struct e1000_mac_info *VAR_16 = &VAR_15->mac;
 u32 VAR_17;
 u32 VAR_18;
 u32 VAR_19;
 u32 VAR_20;
 u32 VAR_21;
 s32 VAR_22 = VAR_10;

 FUNC_0("e1000_check_for_serdes_link_82571");

 VAR_18 = FUNC_2(VAR_15, VAR_1);
 VAR_19 = FUNC_2(VAR_15, VAR_8);
 FUNC_2(VAR_15, VAR_4);

 FUNC_5(10);
 VAR_17 = FUNC_2(VAR_15, VAR_4);

 if ((VAR_17 & VAR_7) && !(VAR_17 & VAR_6)) {

  switch (VAR_16->serdes_link_state) {
  case 131:
   if (!(VAR_19 & VAR_9)) {



    VAR_16->serdes_link_state =
        130;
    VAR_16->serdes_has_link = VAR_13;
    FUNC_1("AN_UP     -> AN_PROG\n");
   } else {
    VAR_16->serdes_has_link = VAR_14;
   }
   break;

  case 128:





   if (VAR_17 & VAR_5) {

    FUNC_3(VAR_15, VAR_11, VAR_16->txcw);
    FUNC_3(VAR_15, VAR_1,
        (VAR_18 & ~VAR_3));
    VAR_16->serdes_link_state =
        130;
    VAR_16->serdes_has_link = VAR_13;
    FUNC_1("FORCED_UP -> AN_PROG\n");
   } else {
    VAR_16->serdes_has_link = VAR_14;
   }
   break;

  case 130:
   if (VAR_17 & VAR_5) {




    if (VAR_19 & VAR_9) {
     VAR_16->serdes_link_state =
         131;
     FUNC_1("AN_PROG   -> AN_UP\n");
     VAR_16->serdes_has_link = VAR_14;
    } else {

     VAR_16->serdes_link_state =
         129;
     FUNC_1("AN_PROG   -> DOWN\n");
    }
   } else {




    FUNC_3(VAR_15, VAR_11,
    (VAR_16->txcw & ~VAR_12));
    VAR_18 |= (VAR_3 | VAR_2);
    FUNC_3(VAR_15, VAR_1, VAR_18);


    VAR_22 =
        FUNC_4(VAR_15);
    if (VAR_22) {
     FUNC_1("Error config flow control\n");
     break;
    }
    VAR_16->serdes_link_state =
      128;
    VAR_16->serdes_has_link = VAR_14;
    FUNC_1("AN_PROG   -> FORCED_UP\n");
   }
   break;

  case 129:
  default:




   FUNC_3(VAR_15, VAR_11, VAR_16->txcw);
   FUNC_3(VAR_15, VAR_1, (VAR_18 &
     ~VAR_3));
   VAR_16->serdes_link_state =
     130;
   VAR_16->serdes_has_link = VAR_13;
   FUNC_1("DOWN      -> AN_PROG\n");
   break;
  }
 } else {
  if (!(VAR_17 & VAR_7)) {
   VAR_16->serdes_has_link = VAR_13;
   VAR_16->serdes_link_state = 129;
   FUNC_1("ANYSTATE  -> DOWN\n");
  } else {




   for (VAR_21 = 0; VAR_21 < VAR_0; VAR_21++) {
    FUNC_5(10);
    VAR_17 = FUNC_2(VAR_15, VAR_4);
    if ((VAR_17 & VAR_7) &&
        (VAR_17 & VAR_5))
     continue;

    if (VAR_17 & VAR_6) {
     VAR_16->serdes_has_link = VAR_13;
     VAR_16->serdes_link_state =
       129;
     FUNC_1("ANYSTATE  -> DOWN\n");
     break;
    }
   }

   if (VAR_21 == VAR_0) {
    VAR_20 = FUNC_2(VAR_15, VAR_11);
    VAR_20 |= VAR_12;
    FUNC_3(VAR_15, VAR_11, VAR_20);
    VAR_16->serdes_link_state =
     130;
    VAR_16->serdes_has_link = VAR_13;
    FUNC_1("ANYSTATE  -> AN_PROG\n");
   }
  }
 }

 return VAR_22;
}
