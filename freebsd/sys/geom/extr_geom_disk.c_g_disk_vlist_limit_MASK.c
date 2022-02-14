
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct disk {int dummy; } ;
struct bio {int bio_ma_n; scalar_t__ bio_length; scalar_t__ bio_ma_offset; scalar_t__ bio_data; } ;
typedef scalar_t__ off_t ;
typedef int bus_dma_segment_t ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct disk*,struct bio*) ;
 int FUNC_2 (int *,scalar_t__*,scalar_t__*,int*) ;

__attribute__((used)) static off_t
FUNC_3(struct disk *VAR_0, struct bio *VAR_1, bus_dma_segment_t **VAR_2)
{
 bus_dma_segment_t *VAR_3, *VAR_4;
 off_t VAR_5;
 off_t VAR_6;
 int VAR_7;

 VAR_3 = (bus_dma_segment_t *)VAR_1->bio_data;
 VAR_4 = (bus_dma_segment_t *)VAR_1->bio_data + VAR_1->bio_ma_n;
 VAR_5 = VAR_1->bio_length;
 VAR_6 = VAR_1->bio_ma_offset;
 VAR_7 = FUNC_1(VAR_0, VAR_1);
 while (VAR_5 != 0 && VAR_7 != 0) {
  FUNC_0((VAR_3 != VAR_4),
      ("vlist limit runs off the end"));
  FUNC_2(VAR_3, &VAR_6, &VAR_5, &VAR_7);
  VAR_3++;
 }
 if (VAR_2 != ((void*)0))
  *VAR_2 = VAR_3;
 return (VAR_5);
}
