
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sta_info {int dummy; } ;
struct mesh_path {int state_lock; int next_hop; } ;


 int FUNC_0 (int *) ;
 struct sta_info* FUNC_1 (int ,int ) ;

__attribute__((used)) static inline struct sta_info *
FUNC_2(struct mesh_path *VAR_0)
{
 return FUNC_1(VAR_0->next_hop,
      FUNC_0(&VAR_0->state_lock));
}
