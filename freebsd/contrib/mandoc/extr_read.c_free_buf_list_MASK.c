
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buf {struct buf* buf; struct buf* next; } ;


 int FUNC_0 (struct buf*) ;

__attribute__((used)) static void
FUNC_1(struct buf *VAR_0)
{
 struct buf *VAR_1;

 while (VAR_0 != ((void*)0)) {
  VAR_1 = VAR_0;
  VAR_0 = VAR_1->next;
  FUNC_0(VAR_1->buf);
  FUNC_0(VAR_1);
 }
}
