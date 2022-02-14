
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dummy; } ;
struct iser_data_buf {int size; struct scatterlist* sgl; } ;
struct bio {size_t bio_bcount; int bio_ma_offset; int * bio_ma; } ;


 scalar_t__ VAR_0 ;
 size_t FUNC_0 (scalar_t__,size_t) ;
 int FUNC_1 (struct scatterlist*) ;
 int FUNC_2 (struct scatterlist*,int ,size_t,int) ;

__attribute__((used)) static void
FUNC_3(struct bio *VAR_1, struct iser_data_buf *VAR_2)
{
 struct scatterlist *VAR_3;
 int VAR_4;
 size_t VAR_5, VAR_6;
 int VAR_7;

 VAR_6 = VAR_1->bio_bcount;
 VAR_7 = VAR_1->bio_ma_offset;

 for (VAR_4 = 0; 0 < VAR_6; VAR_4++, VAR_6 -= VAR_5) {
  VAR_3 = &VAR_2->sgl[VAR_4];
  VAR_5 = FUNC_0(VAR_0 - VAR_7, VAR_6);
  FUNC_2(VAR_3, VAR_1->bio_ma[VAR_4], VAR_5, VAR_7);
  VAR_7 = 0;
 }

 VAR_2->size = VAR_4;
 FUNC_1(VAR_3);
}
