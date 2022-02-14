
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u8 ;
typedef int u32 ;
struct TYPE_4__ {int type; } ;
struct TYPE_3__ {int match_criteria; void* match_criteria_enable; } ;
struct mlx5_flow_group {void* start_index; void* max_ftes; TYPE_2__ base; TYPE_1__ mask; int ftes; } ;


 int VAR_0 ;
 struct mlx5_flow_group* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 void* FUNC_2 (int ,int *,int ) ;
 void* FUNC_3 (int ,int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 struct mlx5_flow_group* FUNC_4 (int,int ) ;
 void* VAR_5 ;
 void* VAR_6 ;
 int FUNC_5 (int *,void*,int) ;
 int VAR_7 ;

__attribute__((used)) static struct mlx5_flow_group *FUNC_6(u32 *VAR_8)
{
 struct mlx5_flow_group *VAR_9;
 void *VAR_10 = FUNC_2(VAR_3,
         VAR_8, VAR_10);
 u8 VAR_11 = FUNC_3(VAR_3,
         VAR_8,
         VAR_11);
 VAR_9 = FUNC_4(sizeof(*VAR_9), VAR_2);
 if (!VAR_9)
  return FUNC_0(-VAR_0);

 FUNC_1(&VAR_9->ftes);
 VAR_9->mask.match_criteria_enable = VAR_11;
 FUNC_5(&VAR_9->mask.match_criteria, VAR_10,
        sizeof(VAR_9->mask.match_criteria));
 VAR_9->base.type = VAR_1;
 VAR_9->start_index = FUNC_3(VAR_3, VAR_8,
       VAR_7);
 VAR_9->max_ftes = FUNC_3(VAR_3, VAR_8,
    VAR_4) - VAR_9->start_index + 1;
 return VAR_9;
}
