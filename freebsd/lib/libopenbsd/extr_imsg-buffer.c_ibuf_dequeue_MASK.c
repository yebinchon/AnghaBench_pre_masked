
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msgbuf {int queued; int bufs; } ;
struct ibuf {int fd; } ;


 int FUNC_0 (int *,struct ibuf*,int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (struct ibuf*) ;

void
FUNC_3(struct msgbuf *VAR_1, struct ibuf *VAR_2)
{
 FUNC_0(&VAR_1->bufs, VAR_2, VAR_0);

 if (VAR_2->fd != -1)
  FUNC_1(VAR_2->fd);

 VAR_1->queued--;
 FUNC_2(VAR_2);
}
