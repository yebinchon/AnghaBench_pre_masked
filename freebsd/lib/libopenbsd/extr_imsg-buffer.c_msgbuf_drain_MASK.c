
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msgbuf {int bufs; } ;
struct ibuf {scalar_t__ rpos; scalar_t__ wpos; } ;


 struct ibuf* FUNC_0 (int *) ;
 struct ibuf* FUNC_1 (struct ibuf*,int ) ;
 int VAR_0 ;
 int FUNC_2 (struct msgbuf*,struct ibuf*) ;

void
FUNC_3(struct msgbuf *VAR_1, size_t VAR_2)
{
 struct ibuf *VAR_3, *VAR_4;

 for (VAR_3 = FUNC_0(&VAR_1->bufs); VAR_3 != ((void*)0) && VAR_2 > 0;
     VAR_3 = VAR_4) {
  VAR_4 = FUNC_1(VAR_3, VAR_0);
  if (VAR_3->rpos + VAR_2 >= VAR_3->wpos) {
   VAR_2 -= VAR_3->wpos - VAR_3->rpos;
   FUNC_2(VAR_1, VAR_3);
  } else {
   VAR_3->rpos += VAR_2;
   VAR_2 = 0;
  }
 }
}
