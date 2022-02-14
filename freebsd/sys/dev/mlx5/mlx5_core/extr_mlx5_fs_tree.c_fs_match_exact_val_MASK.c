
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_core_fs_mask {int match_criteria_enable; void* match_criteria; } ;


 void* FUNC_0 (int ,void*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (void*,void*,void*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

bool FUNC_3(struct mlx5_core_fs_mask *VAR_9,
          void *VAR_10, void *VAR_11)
{
 if (VAR_9->match_criteria_enable &
     1 << VAR_2) {
  void *VAR_12 = FUNC_0(VAR_3,
      VAR_10, VAR_8);
  void *VAR_13 = FUNC_0(VAR_3,
      VAR_11, VAR_8);
  void *VAR_14 = FUNC_0(VAR_3,
           VAR_9->match_criteria, VAR_8);

  if (!FUNC_2(VAR_14, VAR_12, VAR_13,
      FUNC_1(VAR_4)))
   return 0;
 }

 if (VAR_9->match_criteria_enable &
     1 << VAR_1) {
  void *VAR_15 = FUNC_0(VAR_3,
      VAR_10, VAR_7);
  void *VAR_16 = FUNC_0(VAR_3,
      VAR_11, VAR_7);
  void *VAR_17 = FUNC_0(VAR_3,
       VAR_9->match_criteria, VAR_7);

  if (!FUNC_2(VAR_17, VAR_15, VAR_16,
      FUNC_1(VAR_5)))
   return 0;
 }
 if (VAR_9->match_criteria_enable &
     1 << VAR_0) {
  void *VAR_18 = FUNC_0(VAR_3,
      VAR_10, VAR_6);
  void *VAR_19 = FUNC_0(VAR_3,
      VAR_11, VAR_6);
  void *VAR_20 = FUNC_0(VAR_3,
       VAR_9->match_criteria, VAR_6);

  if (!FUNC_2(VAR_20, VAR_18, VAR_19,
      FUNC_1(VAR_4)))
   return 0;
 }
 return 1;
}
