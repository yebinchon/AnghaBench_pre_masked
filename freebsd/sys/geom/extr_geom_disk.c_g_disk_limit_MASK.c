
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct disk {int dummy; } ;
struct bio {scalar_t__ bio_length; int bio_flags; int bio_ma_n; scalar_t__ bio_ma_offset; scalar_t__ bio_data; } ;
typedef scalar_t__ off_t ;
typedef int bus_dma_segment_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct disk*,struct bio*) ;
 scalar_t__ FUNC_1 (struct disk*,struct bio*,int **) ;
 int FUNC_2 (scalar_t__,int ) ;

__attribute__((used)) static bool
FUNC_3(struct disk *VAR_3, struct bio *VAR_4)
{
 bool VAR_5 = 0;
 off_t VAR_6;

 VAR_6 = FUNC_0(VAR_3, VAR_4);







 if (VAR_4->bio_length > VAR_6) {
  VAR_4->bio_length = VAR_6;
  VAR_5 = 1;
 }

 if ((VAR_4->bio_flags & VAR_1) != 0) {
  bus_dma_segment_t *VAR_7, *VAR_8;
  off_t VAR_9;

  VAR_7 = (bus_dma_segment_t*)VAR_4->bio_data;
  VAR_9 = FUNC_1(VAR_3, VAR_4, &VAR_8);
  if (VAR_9 != 0) {
   VAR_4->bio_ma_n = VAR_8 - VAR_7;
   VAR_4->bio_length -= VAR_9;
   VAR_5 = 1;
  }
 } else if ((VAR_4->bio_flags & VAR_0) != 0) {
  VAR_4->bio_ma_n =
      FUNC_2(VAR_4->bio_ma_offset + VAR_4->bio_length, VAR_2);
 }

 return (VAR_5);
}
