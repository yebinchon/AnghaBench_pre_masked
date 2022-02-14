
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bio {int bio_flags; int bio_bcount; scalar_t__ bio_data; int bio_ma_offset; int bio_ma; int bio_ma_n; } ;
typedef int bus_dmamap_t ;
typedef int bus_dma_tag_t ;
typedef int bus_dma_segment_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,scalar_t__,int ,int ,int,int *,int*) ;
 int FUNC_1 (int ,int ,int ,int ,int ,int,int *,int*) ;
 int FUNC_2 (int ,int ,int *,int ,int ,int*,int,int ,int ) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_3(bus_dma_tag_t VAR_3, bus_dmamap_t VAR_4, struct bio *VAR_5,
    int *VAR_6, int VAR_7)
{

 if ((VAR_5->bio_flags & VAR_1) != 0) {
  bus_dma_segment_t *VAR_8 = (bus_dma_segment_t *)VAR_5->bio_data;
  return (FUNC_2(VAR_3, VAR_4, VAR_8, VAR_5->bio_ma_n,
      VAR_2, VAR_6, VAR_7, VAR_5->bio_ma_offset,
      VAR_5->bio_bcount));
 }

 if ((VAR_5->bio_flags & VAR_0) != 0)
  return (FUNC_1(VAR_3, VAR_4, VAR_5->bio_ma,
      VAR_5->bio_bcount, VAR_5->bio_ma_offset, VAR_7, ((void*)0), VAR_6));

 return (FUNC_0(VAR_3, VAR_4, VAR_5->bio_data,
     VAR_5->bio_bcount, VAR_2, VAR_7, ((void*)0), VAR_6));
}
