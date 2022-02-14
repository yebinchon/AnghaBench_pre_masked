
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct __kfifo {unsigned int out; } ;


 unsigned int FUNC_0 (struct __kfifo*,size_t) ;

void FUNC_1(struct __kfifo *VAR_0, size_t VAR_1)
{
 unsigned int VAR_2;

 VAR_2 = FUNC_0(VAR_0, VAR_1);
 VAR_0->out += VAR_2 + VAR_1;
}
