
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ type; } ;
struct e1000_hw {TYPE_1__ nvm; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct e1000_hw*,int ) ;
 int FUNC_2 (struct e1000_hw*,int ,int) ;
 int FUNC_3 (struct e1000_hw*,int*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (struct e1000_hw*,int*) ;

void FUNC_5(struct e1000_hw *VAR_5)
{
 u32 VAR_6;

 FUNC_0("e1000_stop_nvm");

 VAR_6 = FUNC_1(VAR_5, VAR_0);
 if (VAR_5->nvm.type == VAR_4) {

  VAR_6 |= VAR_1;
  FUNC_3(VAR_5, &VAR_6);
 } else if (VAR_5->nvm.type == VAR_3) {

  VAR_6 &= ~(VAR_1 | VAR_2);
  FUNC_2(VAR_5, VAR_0, VAR_6);
  FUNC_4(VAR_5, &VAR_6);
  FUNC_3(VAR_5, &VAR_6);
 }
}
