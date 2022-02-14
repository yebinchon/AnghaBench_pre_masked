
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct __kfifo {scalar_t__ out; } ;


 unsigned int FUNC_0 (struct __kfifo*,size_t) ;
 int FUNC_1 (struct __kfifo*,void*,unsigned int,scalar_t__) ;

__attribute__((used)) static unsigned int FUNC_2(struct __kfifo *VAR_0,
 void *VAR_1, unsigned int VAR_2, size_t VAR_3, unsigned int *VAR_4)
{
 *VAR_4 = FUNC_0(VAR_0, VAR_3);

 if (VAR_2 > *VAR_4)
  VAR_2 = *VAR_4;

 FUNC_1(VAR_0, VAR_1, VAR_2, VAR_0->out + VAR_3);
 return VAR_2;
}
