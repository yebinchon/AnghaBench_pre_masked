
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hd_struct {int rcu_head; int holder_dir; } ;
struct gendisk {struct disk_part_tbl* part_tbl; } ;
struct disk_part_tbl {int len; struct hd_struct* last_lookup; struct hd_struct** part; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct hd_struct*) ;
 int FUNC_5 (struct hd_struct*) ;
 int FUNC_6 (struct hd_struct*,int *) ;

void FUNC_7(struct gendisk *VAR_1, int VAR_2)
{
 struct disk_part_tbl *VAR_3 = VAR_1->part_tbl;
 struct hd_struct *VAR_4;

 if (VAR_2 >= VAR_3->len)
  return;

 VAR_4 = VAR_3->part[VAR_2];
 if (!VAR_4)
  return;

 FUNC_6(VAR_3->part[VAR_2], ((void*)0));
 FUNC_6(VAR_3->last_lookup, ((void*)0));
 FUNC_3(VAR_4->holder_dir);
 FUNC_2(FUNC_5(VAR_4));
 FUNC_0(FUNC_4(VAR_4));

 FUNC_1(&VAR_4->rcu_head, VAR_0);
}
