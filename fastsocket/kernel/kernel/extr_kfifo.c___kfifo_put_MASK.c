
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kfifo {int size; int in; int out; scalar_t__ buffer; } ;


 int FUNC_0 (scalar_t__,unsigned char const*,unsigned int) ;
 unsigned int FUNC_1 (unsigned int,int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

unsigned int FUNC_4(struct kfifo *VAR_0,
   const unsigned char *VAR_1, unsigned int VAR_2)
{
 unsigned int VAR_3;

 VAR_2 = FUNC_1(VAR_2, VAR_0->size - VAR_0->in + VAR_0->out);






 FUNC_2();


 VAR_3 = FUNC_1(VAR_2, VAR_0->size - (VAR_0->in & (VAR_0->size - 1)));
 FUNC_0(VAR_0->buffer + (VAR_0->in & (VAR_0->size - 1)), VAR_1, VAR_3);


 FUNC_0(VAR_0->buffer, VAR_1 + VAR_3, VAR_2 - VAR_3);






 FUNC_3();

 VAR_0->in += VAR_2;

 return VAR_2;
}
