
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sg_mapping_iter {void* addr; int length; } ;
struct scatterlist {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (void*,void*,unsigned int) ;
 unsigned int FUNC_3 (int ,size_t) ;
 scalar_t__ FUNC_4 (struct sg_mapping_iter*) ;
 int FUNC_5 (struct sg_mapping_iter*,struct scatterlist*,unsigned int,unsigned int) ;
 int FUNC_6 (struct sg_mapping_iter*) ;

__attribute__((used)) static size_t FUNC_7(struct scatterlist *VAR_3, unsigned int VAR_4,
        void *VAR_5, size_t VAR_6, int VAR_7)
{
 unsigned int VAR_8 = 0;
 struct sg_mapping_iter VAR_9;
 unsigned long VAR_10;
 unsigned int VAR_11 = VAR_0;

 if (VAR_7)
  VAR_11 |= VAR_1;
 else
  VAR_11 |= VAR_2;

 FUNC_5(&VAR_9, VAR_3, VAR_4, VAR_11);

 FUNC_1(VAR_10);

 while (FUNC_4(&VAR_9) && VAR_8 < VAR_6) {
  unsigned int VAR_12;

  VAR_12 = FUNC_3(VAR_9.length, VAR_6 - VAR_8);

  if (VAR_7)
   FUNC_2(VAR_5 + VAR_8, VAR_9.addr, VAR_12);
  else
   FUNC_2(VAR_9.addr, VAR_5 + VAR_8, VAR_12);

  VAR_8 += VAR_12;
 }

 FUNC_6(&VAR_9);

 FUNC_0(VAR_10);
 return VAR_8;
}
