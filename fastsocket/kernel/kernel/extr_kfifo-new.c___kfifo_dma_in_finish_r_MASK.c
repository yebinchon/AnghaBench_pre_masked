
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct __kfifo {unsigned int in; } ;


 unsigned int FUNC_0 (unsigned int,size_t) ;
 int FUNC_1 (struct __kfifo*,unsigned int,size_t) ;

void FUNC_2(struct __kfifo *VAR_0,
 unsigned int VAR_1, size_t VAR_2)
{
 VAR_1 = FUNC_0(VAR_1, VAR_2);
 FUNC_1(VAR_0, VAR_1, VAR_2);
 VAR_0->in += VAR_1 + VAR_2;
}
