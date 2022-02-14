
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {scalar_t__ type; } ;
struct e1000_hw {TYPE_1__ bus; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (struct e1000_hw*,int ,int*) ;
 int FUNC_2 (struct e1000_hw*,int ,int*) ;

void FUNC_3(struct e1000_hw *VAR_9)
{
 u16 VAR_10;
 u16 VAR_11;
 u16 VAR_12;
 u16 VAR_13;

 FUNC_0("e1000_pcix_mmrbc_workaround_generic");


 if (VAR_9->bus.type != VAR_8)
  return;

 FUNC_1(VAR_9, VAR_2, &VAR_11);
 FUNC_1(VAR_9, VAR_7, &VAR_12);
 VAR_10 = (VAR_11 & VAR_0) >>
       VAR_1;
 VAR_13 = (VAR_12 & VAR_5) >>
        VAR_6;
 if (VAR_13 == VAR_4)
  VAR_13 = VAR_3;
 if (VAR_10 > VAR_13) {
  VAR_11 &= ~VAR_0;
  VAR_11 |= VAR_13 << VAR_1;
  FUNC_2(VAR_9, VAR_2, &VAR_11);
 }
}
