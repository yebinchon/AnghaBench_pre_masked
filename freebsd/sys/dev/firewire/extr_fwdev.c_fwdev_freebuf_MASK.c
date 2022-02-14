
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_xferq {int flag; int maxq; scalar_t__ psize; int * bulkxfer; int * buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int
FUNC_2(struct fw_xferq *VAR_3)
{
 if (VAR_3->flag & VAR_1) {
  if (VAR_3->buf != ((void*)0))
   FUNC_1(VAR_3->buf);
  VAR_3->buf = ((void*)0);
  FUNC_0(VAR_3->bulkxfer, VAR_2);
  VAR_3->bulkxfer = ((void*)0);
  VAR_3->flag &= ~VAR_1;
  VAR_3->psize = 0;
  VAR_3->maxq = VAR_0;
 }
 return (0);
}
