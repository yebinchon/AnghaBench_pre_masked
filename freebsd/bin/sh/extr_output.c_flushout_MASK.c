
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct output {scalar_t__ fd; int * buf; int * nextc; int flags; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,int *,int) ;

void
FUNC_1(struct output *VAR_1)
{

 if (VAR_1->buf == ((void*)0) || VAR_1->nextc == VAR_1->buf || VAR_1->fd < 0)
  return;
 if (FUNC_0(VAR_1->fd, VAR_1->buf, VAR_1->nextc - VAR_1->buf) < 0)
  VAR_1->flags |= VAR_0;
 VAR_1->nextc = VAR_1->buf;
}
