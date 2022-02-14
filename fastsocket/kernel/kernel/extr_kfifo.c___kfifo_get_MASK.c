
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kfifo {int in; int out; int size; scalar_t__ buffer; } ;


 int FUNC_0 (unsigned char*,scalar_t__,unsigned int) ;
 unsigned int FUNC_1 (unsigned int,int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

unsigned int FUNC_4(struct kfifo *VAR_0,
    unsigned char *VAR_1, unsigned int VAR_2)
{
 unsigned int VAR_3;

 VAR_2 = FUNC_1(VAR_2, VAR_0->in - VAR_0->out);






 FUNC_3();


 VAR_3 = FUNC_1(VAR_2, VAR_0->size - (VAR_0->out & (VAR_0->size - 1)));
 FUNC_0(VAR_1, VAR_0->buffer + (VAR_0->out & (VAR_0->size - 1)), VAR_3);


 FUNC_0(VAR_1 + VAR_3, VAR_0->buffer, VAR_2 - VAR_3);






 FUNC_2();

 VAR_0->out += VAR_2;

 return VAR_2;
}
