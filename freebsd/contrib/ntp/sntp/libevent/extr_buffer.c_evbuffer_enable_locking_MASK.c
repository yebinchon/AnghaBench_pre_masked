
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evbuffer {int own_lock; void* lock; } ;


 int FUNC_0 (void*,int ) ;
 int VAR_0 ;

int
FUNC_1(struct evbuffer *VAR_1, void *VAR_2)
{



 if (VAR_1->lock)
  return -1;

 if (!VAR_2) {
  FUNC_0(VAR_2, VAR_0);
  if (!VAR_2)
   return -1;
  VAR_1->lock = VAR_2;
  VAR_1->own_lock = 1;
 } else {
  VAR_1->lock = VAR_2;
  VAR_1->own_lock = 0;
 }

 return 0;

}
