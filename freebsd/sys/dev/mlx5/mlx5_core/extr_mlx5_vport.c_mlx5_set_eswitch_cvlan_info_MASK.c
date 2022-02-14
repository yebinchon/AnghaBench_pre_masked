
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct mlx5_core_dev {int dummy; } ;
typedef int in ;
struct TYPE_2__ {int vport_cvlan_strip; int vport_cvlan_insert; int cvlan_id; int cvlan_pcp; int cvlan_cfi; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int *,int ,scalar_t__) ;
 int FUNC_1 (int ) ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (struct mlx5_core_dev*,scalar_t__,int *,int) ;
 int VAR_5 ;

int FUNC_4(struct mlx5_core_dev *VAR_6, u8 VAR_7,
    u8 VAR_8, u8 VAR_9,
    u16 VAR_10, u8 VAR_11, u8 VAR_12)
{
 u32 VAR_13[FUNC_1(VAR_5)];

 FUNC_2(VAR_13, 0, sizeof(VAR_13));

 if (VAR_8 != VAR_0) {
  FUNC_0(VAR_5, VAR_13,
    VAR_3.cvlan_cfi, VAR_11);
  FUNC_0(VAR_5, VAR_13,
    VAR_3.cvlan_pcp, VAR_12);
  FUNC_0(VAR_5, VAR_13,
    VAR_3.cvlan_id, VAR_10);
 }

 FUNC_0(VAR_5, VAR_13,
   VAR_3.vport_cvlan_insert, VAR_8);

 FUNC_0(VAR_5, VAR_13,
   VAR_3.vport_cvlan_strip, VAR_9);

 FUNC_0(VAR_5, VAR_13, VAR_4,
   VAR_2 |
   VAR_1);

 return FUNC_3(VAR_6, VAR_7, VAR_13, sizeof(VAR_13));
}
