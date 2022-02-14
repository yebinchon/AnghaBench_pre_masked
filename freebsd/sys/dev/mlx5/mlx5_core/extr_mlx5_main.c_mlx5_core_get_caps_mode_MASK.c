
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct mlx5_core_dev {int * hca_caps_cur; int * hca_caps_max; } ;
typedef int in ;
typedef enum mlx5_cap_type { ____Placeholder_mlx5_cap_type } mlx5_cap_type ;
typedef enum mlx5_cap_mode { ____Placeholder_mlx5_cap_mode } mlx5_cap_mode ;


 int VAR_0 ;
 int VAR_1 ;


 void* FUNC_0 (int ,void*,int ) ;
 int VAR_2 ;
 int FUNC_1 (int ,int *,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (void*) ;
 void* FUNC_5 (int,int ) ;
 int FUNC_6 (int ,void*,int ) ;
 int FUNC_7 (int *,int ,int) ;
 int FUNC_8 (struct mlx5_core_dev*,int *,int,void*,int) ;
 int FUNC_9 (struct mlx5_core_dev*,char*,int,int,...) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_10(struct mlx5_core_dev *VAR_9,
       enum mlx5_cap_type VAR_10,
       enum mlx5_cap_mode VAR_11)
{
 u8 VAR_12[FUNC_2(VAR_7)];
 int VAR_13 = FUNC_2(VAR_8);
 void *VAR_14, *VAR_15;
 u16 VAR_16 = (VAR_10 << 1) | (VAR_11 & 0x01);
 int VAR_17;

 FUNC_7(VAR_12, 0, sizeof(VAR_12));
 VAR_14 = FUNC_5(VAR_13, VAR_1);

 FUNC_1(VAR_7, VAR_12, VAR_6, VAR_2);
 FUNC_1(VAR_7, VAR_12, VAR_5, VAR_16);
 VAR_17 = FUNC_8(VAR_9, VAR_12, sizeof(VAR_12), VAR_14, VAR_13);
 if (VAR_17) {
  FUNC_9(VAR_9,
          "QUERY_HCA_CAP : type(%x) opmode(%x) Failed(%d)\n",
          VAR_10, VAR_11, VAR_17);
  goto query_ex;
 }

 VAR_15 = FUNC_0(VAR_8, VAR_14, VAR_3);

 switch (VAR_11) {
 case 128:
  FUNC_6(VAR_9->hca_caps_max[VAR_10], VAR_15,
         FUNC_3(VAR_4));
  break;
 case 129:
  FUNC_6(VAR_9->hca_caps_cur[VAR_10], VAR_15,
         FUNC_3(VAR_4));
  break;
 default:
  FUNC_9(VAR_9,
          "Tried to query dev cap type(%x) with wrong opmode(%x)\n",
          VAR_10, VAR_11);
  VAR_17 = -VAR_0;
  break;
 }
query_ex:
 FUNC_4(VAR_14);
 return VAR_17;
}
