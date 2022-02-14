
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct scatterlist {int dummy; } ;
struct iser_data_buf {size_t data_len; int size; struct scatterlist* sgl; } ;


 uintptr_t VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t FUNC_0 (scalar_t__,size_t) ;
 int FUNC_1 (struct scatterlist*) ;
 int FUNC_2 (struct scatterlist*,void*,size_t) ;

__attribute__((used)) static void
FUNC_3(void *VAR_2, struct iser_data_buf *VAR_3)
{
 struct scatterlist *VAR_4;
 int VAR_5;
 size_t VAR_6, VAR_7;
 int VAR_8;

 VAR_7 = VAR_3->data_len;

 for (VAR_5 = 0; 0 < VAR_7; VAR_5++, VAR_7 -= VAR_6) {
  VAR_4 = &VAR_3->sgl[VAR_5];
  VAR_8 = ((uintptr_t)VAR_2) & ~VAR_0;
  VAR_6 = FUNC_0(VAR_1 - VAR_8, VAR_7);
  FUNC_2(VAR_4, VAR_2, VAR_6);
  VAR_2 = (void *)(((u64)VAR_2) + (u64)VAR_6);
 }

 VAR_3->size = VAR_5;
 FUNC_1(VAR_4);
}
