
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buf_pr {size_t size; size_t avail; int * buf; int * ptr; } ;


 int VAR_0 ;
 int * FUNC_0 (int,size_t) ;
 int FUNC_1 (struct buf_pr*,int ,int) ;

int
FUNC_2(struct buf_pr *VAR_1, size_t VAR_2)
{
 FUNC_1(VAR_1, 0, sizeof(struct buf_pr));

 if ((VAR_1->buf = FUNC_0(1, VAR_2)) == ((void*)0))
  return (VAR_0);

 VAR_1->ptr = VAR_1->buf;
 VAR_1->size = VAR_2;
 VAR_1->avail = VAR_1->size;

 return (0);
}
