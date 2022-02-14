
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sta_info {int dummy; } ;
struct mesh_path {int sn; int state_lock; int flags; scalar_t__ exp_time; scalar_t__ hop_count; scalar_t__ metric; } ;


 int VAR_0 ;
 int FUNC_0 (struct mesh_path*) ;
 int FUNC_1 (struct mesh_path*,struct sta_info*) ;
 int FUNC_2 (struct mesh_path*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct mesh_path *VAR_1, struct sta_info *VAR_2)
{
 FUNC_3(&VAR_1->state_lock);
 FUNC_1(VAR_1, VAR_2);
 VAR_1->sn = 0xffff;
 VAR_1->metric = 0;
 VAR_1->hop_count = 0;
 VAR_1->exp_time = 0;
 VAR_1->flags |= VAR_0;
 FUNC_0(VAR_1);
 FUNC_4(&VAR_1->state_lock);
 FUNC_2(VAR_1);
}
