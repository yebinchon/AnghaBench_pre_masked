
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct al_hal_eth_adapter {TYPE_2__* mac_regs_base; } ;
typedef scalar_t__ al_bool ;
struct TYPE_3__ {int if_mode; int control; } ;
struct TYPE_4__ {TYPE_1__ mac_10g; } ;


 int FUNC_0 (int,int ,int ,int) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int,int ) ;
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
 int VAR_11 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;

__attribute__((used)) static void FUNC_5(
    struct al_hal_eth_adapter *VAR_12,
    al_bool VAR_13,
    al_bool VAR_14,
    uint32_t VAR_15,
    al_bool VAR_16)
{
 uint32_t VAR_17;
 uint32_t VAR_18;

 VAR_17 = FUNC_3(&VAR_12->mac_regs_base->mac_10g.if_mode);

 if (VAR_13) {
  uint32_t VAR_19;

  FUNC_1(VAR_17, VAR_6);

  VAR_19 = FUNC_3(&VAR_12->mac_regs_base->mac_10g.control);

  if (VAR_14)
   FUNC_2(VAR_19, VAR_0);
  else
   FUNC_1(VAR_19, VAR_0);

  FUNC_4(&VAR_12->mac_regs_base->mac_10g.control, VAR_19);

 } else {
  FUNC_2(VAR_17, VAR_6);
  if (VAR_14) {
   FUNC_2(VAR_17, VAR_1);
  } else {
   FUNC_1(VAR_17, VAR_1);

   if (VAR_15 == 1000)
    VAR_18 = VAR_9;
   else if (VAR_15 == 100)
    VAR_18 = VAR_7;
   else
    VAR_18 = VAR_8;

   FUNC_0(VAR_17,
      VAR_10,
      VAR_11,
      VAR_18);

   FUNC_0(VAR_17,
      VAR_4,
      VAR_5,
      ((VAR_16) ?
      VAR_2 :
      VAR_3));
  }
 }

 FUNC_4(&VAR_12->mac_regs_base->mac_10g.if_mode, VAR_17);
}
