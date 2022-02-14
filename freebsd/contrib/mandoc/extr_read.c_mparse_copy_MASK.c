
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mparse {struct buf* secondary; } ;
struct buf {int buf; struct buf* next; } ;


 int FUNC_0 (int ) ;

void
FUNC_1(const struct mparse *VAR_0)
{
 struct buf *VAR_1;

 for (VAR_1 = VAR_0->secondary; VAR_1 != ((void*)0); VAR_1 = VAR_1->next)
  FUNC_0(VAR_1->buf);
}
