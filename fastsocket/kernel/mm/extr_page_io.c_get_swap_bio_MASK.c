
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int val; } ;
typedef TYPE_2__ swp_entry_t ;
struct page {int dummy; } ;
struct bio {int bi_sector; int bi_vcnt; int bi_end_io; void* bi_size; scalar_t__ bi_idx; TYPE_1__* bi_io_vec; int bi_bdev; } ;
typedef int gfp_t ;
typedef int bio_end_io_t ;
struct TYPE_4__ {scalar_t__ bv_offset; void* bv_len; struct page* bv_page; } ;


 int VAR_0 ;
 void* VAR_1 ;
 struct bio* FUNC_0 (int ,int) ;
 int FUNC_1 (TYPE_2__,int *) ;
 int FUNC_2 (struct page*) ;

__attribute__((used)) static struct bio *FUNC_3(gfp_t VAR_2,
    struct page *VAR_3, bio_end_io_t VAR_4)
{
 struct bio *VAR_5;

 VAR_5 = FUNC_0(VAR_2, 1);
 if (VAR_5) {
  swp_entry_t VAR_6;
  VAR_6.val = FUNC_2(VAR_3);
  VAR_5->bi_sector = FUNC_1(VAR_6, &VAR_5->bi_bdev);
  VAR_5->bi_sector <<= VAR_0 - 9;
  VAR_5->bi_io_vec[0].bv_page = VAR_3;
  VAR_5->bi_io_vec[0].bv_len = VAR_1;
  VAR_5->bi_io_vec[0].bv_offset = 0;
  VAR_5->bi_vcnt = 1;
  VAR_5->bi_idx = 0;
  VAR_5->bi_size = VAR_1;
  VAR_5->bi_end_io = VAR_4;
 }
 return VAR_5;
}
