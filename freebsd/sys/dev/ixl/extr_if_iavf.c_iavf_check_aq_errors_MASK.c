
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_5__ {int len; } ;
struct TYPE_4__ {int len; } ;
struct TYPE_6__ {TYPE_2__ asq; TYPE_1__ arq; } ;
struct i40e_hw {TYPE_3__ aq; } ;
struct iavf_sc {int init_state; int dev; struct i40e_hw hw; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct iavf_sc*) ;
 int FUNC_2 (struct iavf_sc*) ;
 int FUNC_3 (struct i40e_hw*,int ) ;
 int FUNC_4 (struct i40e_hw*,int ,int) ;

__attribute__((used)) static int
FUNC_5(struct iavf_sc *VAR_8)
{
 struct i40e_hw *VAR_9 = &VAR_8->hw;
 device_t VAR_10 = VAR_8->dev;
 u32 VAR_11, VAR_12;
 u8 VAR_13 = 0;


 VAR_12 = VAR_11 = FUNC_3(VAR_9, VAR_9->aq.arq.len);
 if (VAR_11 & VAR_3) {
  FUNC_0(VAR_10, "ARQ VF Error detected\n");
  VAR_11 &= ~VAR_3;
  VAR_13 = 1;
 }
 if (VAR_11 & VAR_2) {
  FUNC_0(VAR_10, "ARQ Overflow Error detected\n");
  VAR_11 &= ~VAR_2;
  VAR_13 = 1;
 }
 if (VAR_11 & VAR_1) {
  FUNC_0(VAR_10, "ARQ Critical Error detected\n");
  VAR_11 &= ~VAR_1;
  VAR_13 = 1;
 }
 if (VAR_12 != VAR_11)
  FUNC_4(VAR_9, VAR_9->aq.arq.len, VAR_11);

 VAR_12 = VAR_11 = FUNC_3(VAR_9, VAR_9->aq.asq.len);
 if (VAR_11 & VAR_6) {
  FUNC_0(VAR_10, "ASQ VF Error detected\n");
  VAR_11 &= ~VAR_6;
  VAR_13 = 1;
 }
 if (VAR_11 & VAR_5) {
  FUNC_0(VAR_10, "ASQ Overflow Error detected\n");
  VAR_11 &= ~VAR_5;
  VAR_13 = 1;
 }
 if (VAR_11 & VAR_4) {
  FUNC_0(VAR_10, "ASQ Critical Error detected\n");
  VAR_11 &= ~VAR_4;
  VAR_13 = 1;
 }
 if (VAR_12 != VAR_11)
  FUNC_4(VAR_9, VAR_9->aq.asq.len, VAR_11);

 if (VAR_13) {
  FUNC_0(VAR_10, "WARNING: Stopping VF!\n");




  VAR_8->init_state = VAR_7;
  FUNC_2(VAR_8);
  FUNC_1(VAR_8);
 }

 return (VAR_13 ? VAR_0 : 0);
}
