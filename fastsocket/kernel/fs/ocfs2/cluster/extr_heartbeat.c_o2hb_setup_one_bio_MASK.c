
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct o2hb_region {unsigned int hr_block_bits; unsigned int hr_slots_per_page; unsigned int hr_start_block; struct page** hr_slot_data; int hr_bdev; } ;
struct o2hb_bio_wait_ctxt {int dummy; } ;
struct bio {unsigned int bi_sector; int bi_end_io; struct o2hb_bio_wait_ctxt* bi_private; int bi_bdev; } ;


 int VAR_0 ;
 struct bio* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_1 (struct bio*,struct page*,unsigned int,unsigned int) ;
 struct bio* FUNC_2 (int ,int) ;
 unsigned int FUNC_3 (unsigned int,unsigned int) ;
 int FUNC_4 (int ,char*,...) ;
 int VAR_5 ;

__attribute__((used)) static struct bio *FUNC_5(struct o2hb_region *VAR_6,
          struct o2hb_bio_wait_ctxt *VAR_7,
          unsigned int *VAR_8,
          unsigned int VAR_9)
{
 int VAR_10, VAR_11;
 unsigned int VAR_12, VAR_13;
 unsigned int VAR_14 = VAR_6->hr_block_bits;
 unsigned int VAR_15 = VAR_6->hr_slots_per_page;
 unsigned int VAR_16 = *VAR_8;
 struct bio *VAR_17;
 struct page *VAR_18;





 VAR_17 = FUNC_2(VAR_1, 16);
 if (!VAR_17) {
  FUNC_4(VAR_2, "Could not alloc slots BIO!\n");
  VAR_17 = FUNC_0(-VAR_0);
  goto bail;
 }


 VAR_17->bi_sector = (VAR_6->hr_start_block + VAR_16) << (VAR_14 - 9);
 VAR_17->bi_bdev = VAR_6->hr_bdev;
 VAR_17->bi_private = VAR_7;
 VAR_17->bi_end_io = VAR_5;

 VAR_13 = (VAR_16 << VAR_14) % VAR_4;
 while(VAR_16 < VAR_9) {
  VAR_11 = VAR_16 / VAR_15;
  VAR_18 = VAR_6->hr_slot_data[VAR_11];

  VAR_12 = FUNC_3(VAR_4 - VAR_13,
         (VAR_9-VAR_16) * (VAR_4/VAR_15) );

  FUNC_4(VAR_3, "page %d, vec_len = %u, vec_start = %u\n",
       VAR_11, VAR_12, VAR_13);

  VAR_10 = FUNC_1(VAR_17, VAR_18, VAR_12, VAR_13);
  if (VAR_10 != VAR_12) break;

  VAR_16 += VAR_12 / (VAR_4/VAR_15);
  VAR_13 = 0;
 }

bail:
 *VAR_8 = VAR_16;
 return VAR_17;
}
