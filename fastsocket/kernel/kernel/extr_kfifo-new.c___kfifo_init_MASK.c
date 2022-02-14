
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct __kfifo {size_t esize; unsigned int mask; void* data; scalar_t__ out; scalar_t__ in; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (unsigned int) ;

int FUNC_2(struct __kfifo *VAR_1, void *VAR_2,
  unsigned int VAR_3, size_t VAR_4)
{
 VAR_3 /= VAR_4;

 if (!FUNC_0(VAR_3))
  VAR_3 = FUNC_1(VAR_3);

 VAR_1->in = 0;
 VAR_1->out = 0;
 VAR_1->esize = VAR_4;
 VAR_1->data = VAR_2;

 if (VAR_3 < 2) {
  VAR_1->mask = 0;
  return -VAR_0;
 }
 VAR_1->mask = VAR_3 - 1;

 return 0;
}
