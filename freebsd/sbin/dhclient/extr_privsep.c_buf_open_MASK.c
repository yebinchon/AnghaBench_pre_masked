
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buf {size_t size; int * buf; } ;


 struct buf* FUNC_0 (int,int) ;
 int FUNC_1 (struct buf*) ;
 int * FUNC_2 (size_t) ;

struct buf *
FUNC_3(size_t VAR_0)
{
 struct buf *VAR_1;

 if ((VAR_1 = FUNC_0(1, sizeof(struct buf))) == ((void*)0))
  return (((void*)0));
 if ((VAR_1->buf = FUNC_2(VAR_0)) == ((void*)0)) {
  FUNC_1(VAR_1);
  return (((void*)0));
 }
 VAR_1->size = VAR_0;

 return (VAR_1);
}
