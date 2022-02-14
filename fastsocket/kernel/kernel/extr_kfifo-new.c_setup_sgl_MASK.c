
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dummy; } ;
struct __kfifo {int mask; unsigned int esize; scalar_t__ data; } ;


 unsigned int FUNC_0 (unsigned int,unsigned int) ;
 unsigned int FUNC_1 (struct scatterlist*,scalar_t__,int,unsigned int) ;
 int FUNC_2 (struct scatterlist*) ;

__attribute__((used)) static unsigned int FUNC_3(struct __kfifo *VAR_0, struct scatterlist *VAR_1,
  int VAR_2, unsigned int VAR_3, unsigned int VAR_4)
{
 unsigned int VAR_5 = VAR_0->mask + 1;
 unsigned int VAR_6 = VAR_0->esize;
 unsigned int VAR_7;
 unsigned int VAR_8;

 VAR_4 &= VAR_0->mask;
 if (VAR_6 != 1) {
  VAR_4 *= VAR_6;
  VAR_5 *= VAR_6;
  VAR_3 *= VAR_6;
 }
 VAR_7 = FUNC_0(VAR_3, VAR_5 - VAR_4);

 VAR_8 = FUNC_1(VAR_1, VAR_0->data + VAR_4, VAR_2, VAR_7);
 VAR_8 += FUNC_1(VAR_1 + VAR_8, VAR_0->data, VAR_2 - VAR_8, VAR_3 - VAR_7);

 if (VAR_8)
  FUNC_2(VAR_1 + VAR_8 - 1);
 return VAR_8;
}
