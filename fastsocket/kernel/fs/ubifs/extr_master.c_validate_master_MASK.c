
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ empty_lebs; scalar_t__ idx_lebs; long long total_free; int total_dirty; int total_used; long long total_dead; long long total_dark; } ;
struct TYPE_5__ {scalar_t__ lnum; int offs; scalar_t__ len; } ;
struct ubifs_info {scalar_t__ max_sqnum; scalar_t__ cmt_no; scalar_t__ highest_inum; scalar_t__ lhead_lnum; scalar_t__ log_lebs; int lhead_offs; int leb_size; int min_io_size; scalar_t__ leb_cnt; scalar_t__ main_first; scalar_t__ gc_lnum; scalar_t__ ihead_lnum; int ihead_offs; int main_lebs; int old_idx_sz; scalar_t__ lpt_lnum; scalar_t__ lpt_first; scalar_t__ lpt_last; long long lpt_offs; long long nnode_sz; scalar_t__ nhead_lnum; int nhead_offs; scalar_t__ ltab_lnum; long long ltab_offs; long long ltab_sz; scalar_t__ lsave_lnum; long long lsave_offs; long long lsave_sz; scalar_t__ lscan_lnum; int mst_node; int mst_offs; TYPE_1__ lst; scalar_t__ big_lpt; TYPE_3__* ranges; TYPE_2__ zroot; } ;
struct TYPE_6__ {scalar_t__ min_len; scalar_t__ max_len; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct ubifs_info const*,int ) ;
 int FUNC_1 (char*,int ,int) ;

__attribute__((used)) static int FUNC_2(const struct ubifs_info *VAR_5)
{
 long long VAR_6;
 int VAR_7;

 if (VAR_5->max_sqnum >= VAR_2) {
  VAR_7 = 1;
  goto out;
 }

 if (VAR_5->cmt_no >= VAR_5->max_sqnum) {
  VAR_7 = 2;
  goto out;
 }

 if (VAR_5->highest_inum >= VAR_1) {
  VAR_7 = 3;
  goto out;
 }

 if (VAR_5->lhead_lnum < VAR_4 ||
     VAR_5->lhead_lnum >= VAR_4 + VAR_5->log_lebs ||
     VAR_5->lhead_offs < 0 || VAR_5->lhead_offs >= VAR_5->leb_size ||
     VAR_5->lhead_offs & (VAR_5->min_io_size - 1)) {
  VAR_7 = 4;
  goto out;
 }

 if (VAR_5->zroot.lnum >= VAR_5->leb_cnt || VAR_5->zroot.lnum < VAR_5->main_first ||
     VAR_5->zroot.offs >= VAR_5->leb_size || VAR_5->zroot.offs & 7) {
  VAR_7 = 5;
  goto out;
 }

 if (VAR_5->zroot.len < VAR_5->ranges[VAR_3].min_len ||
     VAR_5->zroot.len > VAR_5->ranges[VAR_3].max_len) {
  VAR_7 = 6;
  goto out;
 }

 if (VAR_5->gc_lnum >= VAR_5->leb_cnt || VAR_5->gc_lnum < VAR_5->main_first) {
  VAR_7 = 7;
  goto out;
 }

 if (VAR_5->ihead_lnum >= VAR_5->leb_cnt || VAR_5->ihead_lnum < VAR_5->main_first ||
     VAR_5->ihead_offs % VAR_5->min_io_size || VAR_5->ihead_offs < 0 ||
     VAR_5->ihead_offs > VAR_5->leb_size || VAR_5->ihead_offs & 7) {
  VAR_7 = 8;
  goto out;
 }

 VAR_6 = (long long)VAR_5->main_lebs * VAR_5->leb_size;
 if (VAR_5->old_idx_sz & 7 || VAR_5->old_idx_sz >= VAR_6) {
  VAR_7 = 9;
  goto out;
 }

 if (VAR_5->lpt_lnum < VAR_5->lpt_first || VAR_5->lpt_lnum > VAR_5->lpt_last ||
     VAR_5->lpt_offs < 0 || VAR_5->lpt_offs + VAR_5->nnode_sz > VAR_5->leb_size) {
  VAR_7 = 10;
  goto out;
 }

 if (VAR_5->nhead_lnum < VAR_5->lpt_first || VAR_5->nhead_lnum > VAR_5->lpt_last ||
     VAR_5->nhead_offs < 0 || VAR_5->nhead_offs % VAR_5->min_io_size ||
     VAR_5->nhead_offs > VAR_5->leb_size) {
  VAR_7 = 11;
  goto out;
 }

 if (VAR_5->ltab_lnum < VAR_5->lpt_first || VAR_5->ltab_lnum > VAR_5->lpt_last ||
     VAR_5->ltab_offs < 0 ||
     VAR_5->ltab_offs + VAR_5->ltab_sz > VAR_5->leb_size) {
  VAR_7 = 12;
  goto out;
 }

 if (VAR_5->big_lpt && (VAR_5->lsave_lnum < VAR_5->lpt_first ||
     VAR_5->lsave_lnum > VAR_5->lpt_last || VAR_5->lsave_offs < 0 ||
     VAR_5->lsave_offs + VAR_5->lsave_sz > VAR_5->leb_size)) {
  VAR_7 = 13;
  goto out;
 }

 if (VAR_5->lscan_lnum < VAR_5->main_first || VAR_5->lscan_lnum >= VAR_5->leb_cnt) {
  VAR_7 = 14;
  goto out;
 }

 if (VAR_5->lst.empty_lebs < 0 || VAR_5->lst.empty_lebs > VAR_5->main_lebs - 2) {
  VAR_7 = 15;
  goto out;
 }

 if (VAR_5->lst.idx_lebs < 0 || VAR_5->lst.idx_lebs > VAR_5->main_lebs - 1) {
  VAR_7 = 16;
  goto out;
 }

 if (VAR_5->lst.total_free < 0 || VAR_5->lst.total_free > VAR_6 ||
     VAR_5->lst.total_free & 7) {
  VAR_7 = 17;
  goto out;
 }

 if (VAR_5->lst.total_dirty < 0 || (VAR_5->lst.total_dirty & 7)) {
  VAR_7 = 18;
  goto out;
 }

 if (VAR_5->lst.total_used < 0 || (VAR_5->lst.total_used & 7)) {
  VAR_7 = 19;
  goto out;
 }

 if (VAR_5->lst.total_free + VAR_5->lst.total_dirty +
     VAR_5->lst.total_used > VAR_6) {
  VAR_7 = 20;
  goto out;
 }

 if (VAR_5->lst.total_dead + VAR_5->lst.total_dark +
     VAR_5->lst.total_used + VAR_5->old_idx_sz > VAR_6) {
  VAR_7 = 21;
  goto out;
 }

 if (VAR_5->lst.total_dead < 0 ||
     VAR_5->lst.total_dead > VAR_5->lst.total_free + VAR_5->lst.total_dirty ||
     VAR_5->lst.total_dead & 7) {
  VAR_7 = 22;
  goto out;
 }

 if (VAR_5->lst.total_dark < 0 ||
     VAR_5->lst.total_dark > VAR_5->lst.total_free + VAR_5->lst.total_dirty ||
     VAR_5->lst.total_dark & 7) {
  VAR_7 = 23;
  goto out;
 }

 return 0;

out:
 FUNC_1("bad master node at offset %d error %d", VAR_5->mst_offs, VAR_7);
 FUNC_0(VAR_5, VAR_5->mst_node);
 return -VAR_0;
}
