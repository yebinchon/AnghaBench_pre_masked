
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t wpos; scalar_t__ buf; scalar_t__ rptr; } ;
struct imsgbuf {TYPE_1__ r; } ;
struct TYPE_5__ {size_t len; int flags; } ;
struct imsg {int fd; TYPE_2__ hdr; TYPE_2__* data; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct imsgbuf*) ;
 TYPE_2__* FUNC_1 (size_t) ;
 int FUNC_2 (TYPE_2__*,scalar_t__,size_t) ;
 int FUNC_3 (scalar_t__*,scalar_t__,size_t) ;

ssize_t
FUNC_4(struct imsgbuf *VAR_5, struct imsg *VAR_6)
{
 size_t VAR_7, VAR_8, VAR_9;

 VAR_7 = VAR_5->r.wpos;

 if (VAR_2 > VAR_7)
  return (0);

 FUNC_2(&VAR_6->hdr, VAR_5->r.buf, sizeof(VAR_6->hdr));
 if (VAR_6->hdr.len < VAR_2 ||
     VAR_6->hdr.len > VAR_3) {
  VAR_4 = VAR_0;
  return (-1);
 }
 if (VAR_6->hdr.len > VAR_7)
  return (0);
 VAR_9 = VAR_6->hdr.len - VAR_2;
 VAR_5->r.rptr = VAR_5->r.buf + VAR_2;
 if (VAR_9 == 0)
  VAR_6->data = ((void*)0);
 else if ((VAR_6->data = FUNC_1(VAR_9)) == ((void*)0))
  return (-1);

 if (VAR_6->hdr.flags & VAR_1)
  VAR_6->fd = FUNC_0(VAR_5);
 else
  VAR_6->fd = -1;

 FUNC_2(VAR_6->data, VAR_5->r.rptr, VAR_9);

 if (VAR_6->hdr.len < VAR_7) {
  VAR_8 = VAR_7 - VAR_6->hdr.len;
  FUNC_3(&VAR_5->r.buf, VAR_5->r.buf + VAR_6->hdr.len, VAR_8);
  VAR_5->r.wpos = VAR_8;
 } else
  VAR_5->r.wpos = 0;

 return (VAR_9 + VAR_2);
}
