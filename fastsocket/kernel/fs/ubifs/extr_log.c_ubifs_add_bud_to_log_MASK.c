
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int node_type; } ;
struct ubifs_ref_node {int lnum; int start; int jhead; void* offs; TYPE_1__ ch; } ;
struct ubifs_info {scalar_t__ ref_node_alsz; scalar_t__ min_log_bytes; int bud_bytes; int leb_size; int max_bud_bytes; scalar_t__ bg_bud_bytes; scalar_t__ cmt_state; scalar_t__ lhead_offs; scalar_t__ lhead_lnum; int log_mutex; int ubi; scalar_t__ ro_media; } ;
struct ubifs_bud {int lnum; int start; int jhead; void* offs; TYPE_1__ ch; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (char*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (struct ubifs_info*) ;
 int FUNC_3 (struct ubifs_ref_node*) ;
 struct ubifs_ref_node* FUNC_4 (int,int ) ;
 struct ubifs_ref_node* FUNC_5 (scalar_t__,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (struct ubifs_info*,scalar_t__) ;
 int FUNC_9 (int ,int,int ) ;
 int FUNC_10 (struct ubifs_info*,struct ubifs_ref_node*) ;
 int FUNC_11 (struct ubifs_info*) ;
 int FUNC_12 (struct ubifs_info*,scalar_t__) ;
 int FUNC_13 (struct ubifs_info*) ;
 int FUNC_14 (struct ubifs_info*,int) ;
 int FUNC_15 (struct ubifs_info*,struct ubifs_ref_node*,int ,scalar_t__,scalar_t__,int ) ;

int FUNC_16(struct ubifs_info *VAR_8, int VAR_9, int VAR_10, int VAR_11)
{
 int VAR_12;
 struct ubifs_bud *VAR_13;
 struct ubifs_ref_node *VAR_14;

 VAR_13 = FUNC_4(sizeof(struct ubifs_bud), VAR_4);
 if (!VAR_13)
  return -VAR_2;
 VAR_14 = FUNC_5(VAR_8->ref_node_alsz, VAR_4);
 if (!VAR_14) {
  FUNC_3(VAR_13);
  return -VAR_2;
 }

 FUNC_6(&VAR_8->log_mutex);

 if (VAR_8->ro_media) {
  VAR_12 = -VAR_3;
  goto out_unlock;
 }


 if (FUNC_2(VAR_8) - VAR_8->ref_node_alsz < VAR_8->min_log_bytes) {
  FUNC_1("not enough log space - %lld, required %d",
   FUNC_2(VAR_8), VAR_8->min_log_bytes);
  FUNC_11(VAR_8);
  VAR_12 = -VAR_1;
  goto out_unlock;
 }
 if (VAR_8->bud_bytes + VAR_8->leb_size - VAR_11 > VAR_8->max_bud_bytes) {
  FUNC_1("bud bytes %lld (%lld max), require commit",
   VAR_8->bud_bytes, VAR_8->max_bud_bytes);
  FUNC_11(VAR_8);
  VAR_12 = -VAR_1;
  goto out_unlock;
 }






 if (VAR_8->bud_bytes >= VAR_8->bg_bud_bytes &&
     VAR_8->cmt_state == VAR_0) {
  FUNC_1("bud bytes %lld (%lld max), initiate BG commit",
   VAR_8->bud_bytes, VAR_8->max_bud_bytes);
  FUNC_13(VAR_8);
 }

 VAR_13->lnum = VAR_10;
 VAR_13->start = VAR_11;
 VAR_13->jhead = VAR_9;

 VAR_14->ch.node_type = VAR_5;
 VAR_14->lnum = FUNC_0(VAR_13->lnum);
 VAR_14->offs = FUNC_0(VAR_13->start);
 VAR_14->jhead = FUNC_0(VAR_9);

 if (VAR_8->lhead_offs > VAR_8->leb_size - VAR_8->ref_node_alsz) {
  VAR_8->lhead_lnum = FUNC_8(VAR_8, VAR_8->lhead_lnum);
  VAR_8->lhead_offs = 0;
 }

 if (VAR_8->lhead_offs == 0) {

  VAR_12 = FUNC_12(VAR_8, VAR_8->lhead_lnum);
  if (VAR_12)
   goto out_unlock;
 }

 if (VAR_13->start == 0) {







  VAR_12 = FUNC_9(VAR_8->ubi, VAR_13->lnum, VAR_7);
  if (VAR_12)
   goto out_unlock;
 }

 FUNC_1("write ref LEB %d:%d",
  VAR_8->lhead_lnum, VAR_8->lhead_offs);
 VAR_12 = FUNC_15(VAR_8, VAR_14, VAR_6, VAR_8->lhead_lnum,
          VAR_8->lhead_offs, VAR_7);
 if (VAR_12)
  goto out_unlock;

 VAR_8->lhead_offs += VAR_8->ref_node_alsz;

 FUNC_10(VAR_8, VAR_13);

 FUNC_7(&VAR_8->log_mutex);
 FUNC_3(VAR_14);
 return 0;

out_unlock:
 if (VAR_12 != -VAR_1)
  FUNC_14(VAR_8, VAR_12);
 FUNC_7(&VAR_8->log_mutex);
 FUNC_3(VAR_14);
 FUNC_3(VAR_13);
 return VAR_12;
}
