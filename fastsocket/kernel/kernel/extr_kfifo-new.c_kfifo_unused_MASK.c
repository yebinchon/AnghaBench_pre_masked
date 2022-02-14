
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct __kfifo {unsigned int mask; unsigned int in; unsigned int out; } ;



__attribute__((used)) static inline unsigned int FUNC_0(struct __kfifo *VAR_0)
{
 return (VAR_0->mask + 1) - (VAR_0->in - VAR_0->out);
}
