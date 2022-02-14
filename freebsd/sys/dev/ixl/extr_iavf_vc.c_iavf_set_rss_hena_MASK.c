
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct virtchnl_rss_hena {int hena; } ;
struct TYPE_2__ {scalar_t__ type; } ;
struct i40e_hw {TYPE_1__ mac; } ;
struct iavf_sc {struct i40e_hw hw; } ;
typedef int hena ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct iavf_sc*,int ,int *,int) ;

int
FUNC_1(struct iavf_sc *VAR_4)
{
 struct virtchnl_rss_hena VAR_5;
 struct i40e_hw *VAR_6 = &VAR_4->hw;

 if (VAR_6->mac.type == VAR_0)
  VAR_5.hena = VAR_1;
 else
  VAR_5.hena = VAR_2;

 FUNC_0(VAR_4, VAR_3,
     (u8 *)&VAR_5, sizeof(VAR_5));
 return (0);
}
