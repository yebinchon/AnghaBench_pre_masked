
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_info {int ltail_lnum; int log_mutex; int buds_lock; scalar_t__ cmt_bud_bytes; int bud_bytes; int leb_size; int min_log_bytes; } ;


 int FUNC_0 (struct ubifs_info*) ;
 int FUNC_1 (char*,int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct ubifs_info *VAR_0, int VAR_1)
{
 int VAR_2;






 FUNC_2(&VAR_0->log_mutex);

 FUNC_1("old tail was LEB %d:0, new tail is LEB %d:0",
  VAR_0->ltail_lnum, VAR_1);

 VAR_0->ltail_lnum = VAR_1;




 VAR_0->min_log_bytes = VAR_0->leb_size;

 FUNC_4(&VAR_0->buds_lock);
 VAR_0->bud_bytes -= VAR_0->cmt_bud_bytes;
 FUNC_5(&VAR_0->buds_lock);

 VAR_2 = FUNC_0(VAR_0);

 FUNC_3(&VAR_0->log_mutex);
 return VAR_2;
}
