
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct __kfifo {int mask; unsigned int esize; scalar_t__ data; } ;


 int FUNC_0 (void*,scalar_t__,unsigned int) ;
 unsigned int FUNC_1 (unsigned int,unsigned int) ;
 int FUNC_2 () ;

__attribute__((used)) static void FUNC_3(struct __kfifo *VAR_0, void *VAR_1,
  unsigned int VAR_2, unsigned int VAR_3)
{
 unsigned int VAR_4 = VAR_0->mask + 1;
 unsigned int VAR_5 = VAR_0->esize;
 unsigned int VAR_6;

 VAR_3 &= VAR_0->mask;
 if (VAR_5 != 1) {
  VAR_3 *= VAR_5;
  VAR_4 *= VAR_5;
  VAR_2 *= VAR_5;
 }
 VAR_6 = FUNC_1(VAR_2, VAR_4 - VAR_3);

 FUNC_0(VAR_1, VAR_0->data + VAR_3, VAR_6);
 FUNC_0(VAR_1 + VAR_6, VAR_0->data, VAR_2 - VAR_6);




 FUNC_2();
}
