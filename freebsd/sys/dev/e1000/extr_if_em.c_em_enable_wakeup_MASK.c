
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_8__ {scalar_t__ media_type; scalar_t__ type; } ;
struct TYPE_7__ {scalar_t__ type; } ;
struct TYPE_9__ {TYPE_2__ phy; TYPE_1__ mac; } ;
struct adapter {int wol; TYPE_3__ hw; } ;
typedef int if_t ;
typedef int if_ctx_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_3__*,int ) ;
 int FUNC_1 (TYPE_3__*,int ,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 int FUNC_2 (TYPE_3__*) ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (struct adapter*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 struct adapter* FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ,int ,int*) ;
 int FUNC_10 (int ,int,int) ;
 int FUNC_11 (int ,int,int,int) ;

__attribute__((used)) static void
FUNC_12(if_ctx_t VAR_28)
{
 struct adapter *VAR_29 = FUNC_8(VAR_28);
 device_t VAR_30 = FUNC_6(VAR_28);
 if_t VAR_31 = FUNC_7(VAR_28);
 int VAR_32 = 0;
 u32 VAR_33, VAR_34, VAR_35, VAR_36;
 u16 VAR_37;

 if (FUNC_9(VAR_30, VAR_20, &VAR_33) != 0)
  return;





 if ((FUNC_5(VAR_31) & VAR_14) == 0)
  VAR_29->wol &= ~VAR_11;

 if ((FUNC_5(VAR_31) & VAR_16) == 0)
  VAR_29->wol &= ~VAR_10;

 if ((FUNC_5(VAR_31) & VAR_15) == 0)
  VAR_29->wol &= ~VAR_12;
 else {
  VAR_36 = FUNC_0(&VAR_29->hw, VAR_5);
  VAR_36 |= VAR_6;
  FUNC_1(&VAR_29->hw, VAR_5, VAR_36);
 }

 if (!(VAR_29->wol & (VAR_10 | VAR_11 | VAR_12)))
  goto pme;


 VAR_34 = FUNC_0(&VAR_29->hw, VAR_0);
 VAR_34 |= (VAR_3 | VAR_4);
 FUNC_1(&VAR_29->hw, VAR_0, VAR_34);


 if (VAR_29->hw.phy.media_type == VAR_24 ||
     VAR_29->hw.phy.media_type == VAR_25) {
  VAR_35 = FUNC_0(&VAR_29->hw, VAR_1);
  VAR_35 |= VAR_2;
  FUNC_1(&VAR_29->hw, VAR_1, VAR_35);
 }

 if ((VAR_29->hw.mac.type == VAR_22) ||
     (VAR_29->hw.mac.type == VAR_26) ||
     (VAR_29->hw.mac.type == VAR_23) ||
     (VAR_29->hw.mac.type == VAR_21))
  FUNC_3(&VAR_29->hw);

 if ( VAR_29->hw.mac.type >= VAR_26) {
  VAR_32 = FUNC_4(VAR_29);
  if (VAR_32)
   goto pme;
 } else {

  FUNC_1(&VAR_29->hw, VAR_7, VAR_8);
  FUNC_1(&VAR_29->hw, VAR_9, VAR_29->wol);
 }

 if (VAR_29->hw.phy.type == VAR_27)
  FUNC_2(&VAR_29->hw);

pme:
 VAR_37 = FUNC_10(VAR_30, VAR_33 + VAR_19, 2);
 VAR_37 &= ~(VAR_17 | VAR_18);
 if (!VAR_32 && (FUNC_5(VAR_31) & VAR_13))
  VAR_37 |= VAR_17 | VAR_18;
 FUNC_11(VAR_30, VAR_33 + VAR_19, VAR_37, 2);

 return;
}
