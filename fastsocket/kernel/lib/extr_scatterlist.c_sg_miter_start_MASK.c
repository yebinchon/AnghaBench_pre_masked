
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sg_mapping_iter {unsigned int __nents; unsigned int __flags; scalar_t__ __offset; struct scatterlist* __sg; } ;
struct scatterlist {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct sg_mapping_iter*,int ,int) ;

void FUNC_2(struct sg_mapping_iter *VAR_2, struct scatterlist *VAR_3,
      unsigned int VAR_4, unsigned int VAR_5)
{
 FUNC_1(VAR_2, 0, sizeof(struct sg_mapping_iter));

 VAR_2->__sg = VAR_3;
 VAR_2->__nents = VAR_4;
 VAR_2->__offset = 0;
 FUNC_0(!(VAR_5 & (VAR_1 | VAR_0)));
 VAR_2->__flags = VAR_5;
}
