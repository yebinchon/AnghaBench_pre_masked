
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int16_t ;
struct imsgbuf {int w; } ;
struct imsg_hdr {scalar_t__ len; int flags; } ;
struct ibuf {int fd; scalar_t__ wpos; scalar_t__ buf; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct ibuf*) ;

void
FUNC_1(struct imsgbuf *VAR_1, struct ibuf *VAR_2)
{
 struct imsg_hdr *VAR_3;

 VAR_3 = (struct imsg_hdr *)VAR_2->buf;

 VAR_3->flags &= ~VAR_0;
 if (VAR_2->fd != -1)
  VAR_3->flags |= VAR_0;

 VAR_3->len = (u_int16_t)VAR_2->wpos;

 FUNC_0(&VAR_1->w, VAR_2);
}
