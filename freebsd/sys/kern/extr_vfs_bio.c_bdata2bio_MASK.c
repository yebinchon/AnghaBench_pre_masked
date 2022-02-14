
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
struct buf {int b_npages; int b_data; scalar_t__ b_offset; int * b_pages; } ;
struct bio {int bio_ma_n; int bio_ma_offset; int * bio_ma; int bio_data; scalar_t__ bio_length; int bio_flags; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct buf*) ;
 int FUNC_2 (scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;

void
FUNC_3(struct buf *VAR_5, struct bio *VAR_6)
{

 if (!FUNC_1(VAR_5)) {
  FUNC_0(VAR_4, ("unmapped"));
  VAR_6->bio_ma = VAR_5->b_pages;
  VAR_6->bio_ma_n = VAR_5->b_npages;
  VAR_6->bio_data = VAR_3;
  VAR_6->bio_ma_offset = (vm_offset_t)VAR_5->b_offset & VAR_1;
  VAR_6->bio_flags |= VAR_0;
  FUNC_0(FUNC_2(VAR_6->bio_ma_offset + VAR_6->bio_length) /
      VAR_2 == VAR_5->b_npages,
      ("Buffer %p too short: %d %lld %d", VAR_5, VAR_6->bio_ma_offset,
      (long long)VAR_6->bio_length, VAR_6->bio_ma_n));
 } else {
  VAR_6->bio_data = VAR_5->b_data;
  VAR_6->bio_ma = ((void*)0);
 }
}
