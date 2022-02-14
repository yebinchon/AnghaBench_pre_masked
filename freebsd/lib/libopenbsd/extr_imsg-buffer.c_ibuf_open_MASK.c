
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ibuf {size_t size; size_t max; int fd; int * buf; } ;


 struct ibuf* FUNC_0 (int,int) ;
 int FUNC_1 (struct ibuf*) ;
 int * FUNC_2 (size_t) ;

struct ibuf *
FUNC_3(size_t VAR_0)
{
 struct ibuf *VAR_1;

 if ((VAR_1 = FUNC_0(1, sizeof(struct ibuf))) == ((void*)0))
  return (((void*)0));
 if ((VAR_1->buf = FUNC_2(VAR_0)) == ((void*)0)) {
  FUNC_1(VAR_1);
  return (((void*)0));
 }
 VAR_1->size = VAR_1->max = VAR_0;
 VAR_1->fd = -1;

 return (VAR_1);
}
