
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buf {scalar_t__ wpos; scalar_t__ size; scalar_t__ buf; } ;


 int FUNC_0 (scalar_t__,void const*,size_t) ;

int
FUNC_1(struct buf *VAR_0, const void *VAR_1, size_t VAR_2)
{
 if (VAR_0->wpos + VAR_2 > VAR_0->size)
  return (-1);

 FUNC_0(VAR_0->buf + VAR_0->wpos, VAR_1, VAR_2);
 VAR_0->wpos += VAR_2;
 return (0);
}
