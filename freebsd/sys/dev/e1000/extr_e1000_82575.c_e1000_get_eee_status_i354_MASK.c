
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct e1000_phy_info {scalar_t__ media_type; scalar_t__ id; } ;
struct e1000_hw {struct e1000_phy_info phy; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_1 (struct e1000_hw*,int ,int ,int*) ;

s32 FUNC_2(struct e1000_hw *VAR_10, bool *VAR_11)
{
 struct e1000_phy_info *VAR_12 = &VAR_10->phy;
 s32 VAR_13 = VAR_4;
 u16 VAR_14;

 FUNC_0("e1000_get_eee_status_i354");


 if ((VAR_10->phy.media_type != VAR_9) ||
     ((VAR_12->id != VAR_7) &&
     (VAR_12->id != VAR_6)))
  goto out;

 VAR_13 = FUNC_1(VAR_10, VAR_0,
           VAR_1,
           &VAR_14);
 if (VAR_13)
  goto out;

 *VAR_11 = VAR_14 & (VAR_3 |
         VAR_2) ? VAR_8 : VAR_5;

out:
 return VAR_13;
}
