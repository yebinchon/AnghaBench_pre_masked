
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qtree_mem_dqinfo {int dqi_free_blk; int dqi_type; int dqi_sb; int dqi_blocks; int dqi_usable_bs; } ;
struct qt_disk_dqdbheader {int dqdh_next_free; } ;


 int VAR_0 ;
 char* FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (char*,int ,int ) ;
 int FUNC_5 (struct qtree_mem_dqinfo*,int,char*) ;
 int FUNC_6 (struct qtree_mem_dqinfo*,int ,char*) ;

__attribute__((used)) static int FUNC_7(struct qtree_mem_dqinfo *VAR_1)
{
 char *VAR_2 = FUNC_0(VAR_1->dqi_usable_bs);
 struct qt_disk_dqdbheader *VAR_3 = (struct qt_disk_dqdbheader *)VAR_2;
 int VAR_4, VAR_5;

 if (!VAR_2)
  return -VAR_0;
 if (VAR_1->dqi_free_blk) {
  VAR_5 = VAR_1->dqi_free_blk;
  VAR_4 = FUNC_5(VAR_1, VAR_5, VAR_2);
  if (VAR_4 < 0)
   goto out_buf;
  VAR_1->dqi_free_blk = FUNC_2(VAR_3->dqdh_next_free);
 }
 else {
  FUNC_4(VAR_2, 0, VAR_1->dqi_usable_bs);

  VAR_4 = FUNC_6(VAR_1, VAR_1->dqi_blocks, VAR_2);
  if (VAR_4 < 0)
   goto out_buf;
  VAR_5 = VAR_1->dqi_blocks++;
 }
 FUNC_3(VAR_1->dqi_sb, VAR_1->dqi_type);
 VAR_4 = VAR_5;
out_buf:
 FUNC_1(VAR_2);
 return VAR_4;
}
