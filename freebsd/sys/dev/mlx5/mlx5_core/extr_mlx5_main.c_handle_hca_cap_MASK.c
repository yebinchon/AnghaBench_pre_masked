
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_profile {int mask; int log_max_qp; } ;
struct mlx5_core_dev {int * hca_caps_cur; struct mlx5_profile* profile; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ,void*,int ) ;
 int FUNC_1 (struct mlx5_core_dev*,int ) ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,void*,int ,int) ;
 int FUNC_3 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (void*) ;
 void* FUNC_5 (int,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_6 (void*,int ,int) ;
 int FUNC_7 (struct mlx5_core_dev*,char*,int ,int) ;
 int FUNC_8 (struct mlx5_core_dev*,size_t) ;
 int FUNC_9 (int ) ;
 int VAR_11 ;
 int FUNC_10 (struct mlx5_core_dev*,void*,int) ;
 int VAR_12 ;
 int FUNC_11 (struct mlx5_core_dev*,int) ;

__attribute__((used)) static int FUNC_12(struct mlx5_core_dev *VAR_13)
{
 void *VAR_14 = ((void*)0);
 struct mlx5_profile *VAR_15 = VAR_13->profile;
 int VAR_16 = -VAR_0;
 int VAR_17 = FUNC_3(VAR_12);
 void *VAR_18;

 VAR_14 = FUNC_5(VAR_17, VAR_1);

 VAR_16 = FUNC_8(VAR_13, VAR_2);
 if (VAR_16)
  goto query_ex;

 VAR_18 = FUNC_0(VAR_12, VAR_14,
       VAR_5);
 FUNC_6(VAR_18, VAR_13->hca_caps_cur[VAR_2],
        FUNC_3(VAR_6));

 FUNC_7(VAR_13, "Current Pkey table size %d Setting new size %d\n",
        FUNC_9(FUNC_1(VAR_13, VAR_11)),
        128);

 FUNC_2(VAR_6, VAR_18, VAR_11,
   FUNC_11(VAR_13, 128));

 if (VAR_15->mask & VAR_3)
  FUNC_2(VAR_6, VAR_18, VAR_9,
    VAR_15->log_max_qp);


 FUNC_2(VAR_6, VAR_18, VAR_7, 0);


 FUNC_2(VAR_6, VAR_18, VAR_8, 1);

 FUNC_2(VAR_6, VAR_18, VAR_10, VAR_4 - 12);

 VAR_16 = FUNC_10(VAR_13, VAR_14, VAR_17);

query_ex:
 FUNC_4(VAR_14);
 return VAR_16;
}
