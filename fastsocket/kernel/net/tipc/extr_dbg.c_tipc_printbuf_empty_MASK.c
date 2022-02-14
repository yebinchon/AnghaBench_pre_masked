
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct print_buf {scalar_t__ buf; scalar_t__ crs; } ;



int FUNC_0(struct print_buf *VAR_0)
{
 return (!VAR_0->buf || (VAR_0->crs == VAR_0->buf));
}
