
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct __kfifo {unsigned int mask; unsigned char* data; scalar_t__ in; } ;


 int FUNC_0 (unsigned char*,scalar_t__,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_1(struct __kfifo *VAR_0, unsigned int VAR_1, size_t VAR_2)
{
 unsigned int VAR_3 = VAR_0->mask;
 unsigned char *VAR_4 = VAR_0->data;

 FUNC_0(VAR_4, VAR_0->in, VAR_3, VAR_1);

 if (VAR_2 > 1)
  FUNC_0(VAR_4, VAR_0->in + 1, VAR_3, VAR_1 >> 8);
}
