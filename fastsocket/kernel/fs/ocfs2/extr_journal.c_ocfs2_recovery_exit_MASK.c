
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_super {int disable_recovery; struct ocfs2_recovery_map* recovery_map; int recovery_event; int recovery_lock; } ;
struct ocfs2_recovery_map {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct ocfs2_recovery_map*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct ocfs2_super*) ;
 int VAR_0 ;
 int FUNC_5 (int ,int) ;

void FUNC_6(struct ocfs2_super *VAR_1)
{
 struct ocfs2_recovery_map *VAR_2;



 FUNC_2(&VAR_1->recovery_lock);
 VAR_1->disable_recovery = 1;
 FUNC_3(&VAR_1->recovery_lock);
 FUNC_5(VAR_1->recovery_event, !FUNC_4(VAR_1));




 FUNC_0(VAR_0);





 VAR_2 = VAR_1->recovery_map;


 FUNC_1(VAR_2);
}
