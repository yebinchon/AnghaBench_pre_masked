
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct disk {int dummy; } ;
struct bio {scalar_t__ bio_offset; scalar_t__ bio_length; int bio_flags; int bio_ma_n; scalar_t__ bio_ma_offset; scalar_t__ bio_ma; void* bio_data; } ;
typedef scalar_t__ off_t ;
struct TYPE_2__ {scalar_t__ ds_len; } ;
typedef TYPE_1__ bus_dma_segment_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void
FUNC_1(struct disk *VAR_3, struct bio *VAR_4, off_t VAR_5)
{

 VAR_4->bio_offset += VAR_5;
 VAR_4->bio_length -= VAR_5;

 if ((VAR_4->bio_flags & VAR_1) != 0) {
  bus_dma_segment_t *VAR_6, *VAR_7;

  VAR_6 = (bus_dma_segment_t *)VAR_4->bio_data;
  VAR_7 = (bus_dma_segment_t *)VAR_4->bio_data + VAR_4->bio_ma_n;
  VAR_5 += VAR_4->bio_ma_offset;
  while (VAR_5 >= VAR_6->ds_len) {
   FUNC_0((VAR_6 != VAR_7),
       ("vlist request runs off the end"));
   VAR_5 -= VAR_6->ds_len;
   VAR_6++;
  }
  VAR_4->bio_ma_offset = VAR_5;
  VAR_4->bio_ma_n = VAR_7 - VAR_6;
  VAR_4->bio_data = (void *)VAR_6;
 } else if ((VAR_4->bio_flags & VAR_0) != 0) {
  VAR_4->bio_ma += VAR_5 / VAR_2;
  VAR_4->bio_ma_offset += VAR_5;
  VAR_4->bio_ma_offset %= VAR_2;
  VAR_4->bio_ma_n -= VAR_5 / VAR_2;
 } else {
  VAR_4->bio_data += VAR_5;
 }
}
