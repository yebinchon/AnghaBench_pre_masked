
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_wbuf {int lock; int next_ino; int * inodes; scalar_t__ used; int buf; } ;
typedef int ino_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct ubifs_wbuf *VAR_0, ino_t VAR_1)
{
 if (!VAR_0->buf)

  return;

 FUNC_0(&VAR_0->lock);
 if (VAR_0->used)
  VAR_0->inodes[VAR_0->next_ino++] = VAR_1;
 FUNC_1(&VAR_0->lock);
}
