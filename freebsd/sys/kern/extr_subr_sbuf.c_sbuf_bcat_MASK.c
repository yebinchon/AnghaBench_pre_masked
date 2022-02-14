
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbuf {scalar_t__ s_error; } ;


 int FUNC_0 (struct sbuf*,void const*,size_t) ;

int
FUNC_1(struct sbuf *VAR_0, const void *VAR_1, size_t VAR_2)
{

 FUNC_0(VAR_0, VAR_1, VAR_2);
 if (VAR_0->s_error != 0)
  return (-1);
 return (0);
}
