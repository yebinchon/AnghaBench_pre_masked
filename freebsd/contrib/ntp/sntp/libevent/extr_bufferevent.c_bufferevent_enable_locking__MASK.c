
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bufferevent {int output; int input; } ;
struct TYPE_2__ {int own_lock; void* lock; } ;


 TYPE_1__* FUNC_0 (struct bufferevent*) ;
 int FUNC_1 (void*,int ) ;
 int VAR_0 ;
 struct bufferevent* FUNC_2 (struct bufferevent*) ;
 int FUNC_3 (int ,void*) ;

int
FUNC_4(struct bufferevent *VAR_1, void *VAR_2)
{



 struct bufferevent *VAR_3;

 if (FUNC_0(VAR_1)->lock)
  return -1;
 VAR_3 = FUNC_2(VAR_1);

 if (!VAR_2 && VAR_3 && FUNC_0(VAR_3)->lock) {
  VAR_2 = FUNC_0(VAR_3)->lock;
  FUNC_0(VAR_1)->lock = VAR_2;
  FUNC_0(VAR_1)->own_lock = 0;
 } else if (!VAR_2) {
  FUNC_1(VAR_2, VAR_0);
  if (!VAR_2)
   return -1;
  FUNC_0(VAR_1)->lock = VAR_2;
  FUNC_0(VAR_1)->own_lock = 1;
 } else {
  FUNC_0(VAR_1)->lock = VAR_2;
  FUNC_0(VAR_1)->own_lock = 0;
 }
 FUNC_3(VAR_1->input, VAR_2);
 FUNC_3(VAR_1->output, VAR_2);

 if (VAR_3 && !FUNC_0(VAR_3)->lock)
  FUNC_4(VAR_3, VAR_2);

 return 0;

}
