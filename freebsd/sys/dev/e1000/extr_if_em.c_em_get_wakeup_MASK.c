
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_7__ {int func; } ;
struct TYPE_6__ {int type; } ;
struct TYPE_8__ {TYPE_2__ bus; TYPE_1__ mac; } ;
struct adapter {int wol; TYPE_3__ hw; void* has_amt; int has_manage; } ;
typedef int if_ctx_t ;
typedef int device_t ;
 int FUNC_0 (TYPE_3__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 void* VAR_11 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,int ,int,int*) ;


 int VAR_12 ;
 int FUNC_3 (int ) ;
 struct adapter* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6(if_ctx_t VAR_13)
{
 struct adapter *VAR_14 = FUNC_4(VAR_13);
 device_t VAR_15 = FUNC_3(VAR_13);
 u16 VAR_16 = 0, VAR_17, VAR_18;

 VAR_14->has_manage = FUNC_1(&VAR_14->hw);
 VAR_18 = VAR_7;

 switch (VAR_14->hw.mac.type) {
 case 152:
 case 151:
  break;
 case 150:
  FUNC_2(&VAR_14->hw,
      VAR_8, 1, &VAR_16);
  VAR_18 = VAR_6;
  break;
 case 149:
 case 148:
  if (VAR_14->hw.bus.func == 1) {
   FUNC_2(&VAR_14->hw,
       VAR_10, 1, &VAR_16);
   break;
  } else
   FUNC_2(&VAR_14->hw,
       VAR_9, 1, &VAR_16);
  break;
 case 145:
 case 141:
  VAR_14->has_amt = VAR_11;

 case 147:
 case 146:
 case 153:
  if (VAR_14->hw.bus.func == 1) {
   FUNC_2(&VAR_14->hw,
       VAR_10, 1, &VAR_16);
   break;
  } else
   FUNC_2(&VAR_14->hw,
       VAR_9, 1, &VAR_16);
  break;
 case 135:
 case 134:
 case 136:
 case 130:
 case 133:
 case 132:
 case 131:
 case 144:
 case 143:
 case 142:
 case 138:
 case 137:
 case 140:
 case 139:
 case 129:
 case 128:
  VAR_18 = VAR_3;
  VAR_14->has_amt = VAR_11;
  VAR_16 = FUNC_0(&VAR_14->hw, VAR_2);
  break;
 default:
  FUNC_2(&VAR_14->hw,
      VAR_9, 1, &VAR_16);
  break;
 }
 if (VAR_16 & VAR_18)
  VAR_14->wol = (VAR_4 | VAR_5);





 VAR_17 = FUNC_5(VAR_15);
 switch (VAR_17) {
 case 159:
  VAR_14->wol = 0;
  break;
 case 161:
 case 160:


  if (FUNC_0(&VAR_14->hw, VAR_0) &
      VAR_1)
   VAR_14->wol = 0;
  break;
 case 158:

  if (VAR_12 != 0)
   VAR_14->wol = 0;

  if (++VAR_12 == 4)
   VAR_12 = 0;
  break;
 case 157:


  if (FUNC_0(&VAR_14->hw, VAR_0) &
      VAR_1)
   VAR_14->wol = 0;
  break;
 case 156:
 case 154:
 case 155:

  if (VAR_12 != 0)
   VAR_14->wol = 0;

  if (++VAR_12 == 4)
   VAR_12 = 0;
  break;
 }
 return;
}
