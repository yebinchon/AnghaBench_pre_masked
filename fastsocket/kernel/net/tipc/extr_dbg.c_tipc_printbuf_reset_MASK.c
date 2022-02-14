
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct print_buf {int size; int * buf; int * crs; } ;



void FUNC_0(struct print_buf *VAR_0)
{
 if (VAR_0->buf) {
  VAR_0->crs = VAR_0->buf;
  VAR_0->buf[0] = 0;
  VAR_0->buf[VAR_0->size - 1] = ~0;
 }
}
