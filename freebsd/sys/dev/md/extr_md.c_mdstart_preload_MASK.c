
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct md_s {int * pl_ptr; } ;
struct bio {int bio_offset; int bio_cmd; int bio_flags; scalar_t__ bio_resid; int bio_length; int * bio_data; int bio_ma_offset; } ;
typedef int bus_dma_segment_t ;



 int VAR_0 ;

 int FUNC_0 (int *,int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ,int *,int ) ;
 int FUNC_3 (int *,int *,int ,int ) ;

__attribute__((used)) static int
FUNC_4(struct md_s *VAR_1, struct bio *VAR_2)
{
 uint8_t *VAR_3;

 VAR_3 = VAR_1->pl_ptr + VAR_2->bio_offset;
 switch (VAR_2->bio_cmd) {
 case 129:
  if ((VAR_2->bio_flags & VAR_0) != 0) {
   FUNC_3(VAR_3, (bus_dma_segment_t *)VAR_2->bio_data,
       VAR_2->bio_ma_offset, VAR_2->bio_length);
  } else {
   FUNC_0(VAR_3, VAR_2->bio_data, VAR_2->bio_length);
  }
  FUNC_1(VAR_2->bio_data, VAR_2->bio_length);
  break;
 case 128:
  if ((VAR_2->bio_flags & VAR_0) != 0) {
   FUNC_2((bus_dma_segment_t *)VAR_2->bio_data,
       VAR_2->bio_ma_offset, VAR_3, VAR_2->bio_length);
  } else {
   FUNC_0(VAR_2->bio_data, VAR_3, VAR_2->bio_length);
  }
  break;
 }
 VAR_2->bio_resid = 0;
 return (0);
}
