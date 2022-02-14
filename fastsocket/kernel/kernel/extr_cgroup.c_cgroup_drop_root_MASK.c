
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cgroupfs_root {int hierarchy_id; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct cgroupfs_root*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct cgroupfs_root *VAR_2)
{
 if (!VAR_2)
  return;

 FUNC_0(!VAR_2->hierarchy_id);
 FUNC_3(&VAR_0);
 FUNC_1(&VAR_1, VAR_2->hierarchy_id);
 FUNC_4(&VAR_0);
 FUNC_2(VAR_2);
}
