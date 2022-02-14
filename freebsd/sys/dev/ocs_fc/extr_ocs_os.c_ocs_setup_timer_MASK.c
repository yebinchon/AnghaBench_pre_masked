
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct timeval {int tv_sec; int tv_usec; } ;
struct TYPE_4__ {void (* func ) (void*) ;int lock; int callout; void* data; } ;
typedef TYPE_1__ ocs_timer_t ;
typedef int ocs_os_handle_t ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *,int ) ;
 int FUNC_1 (int *,int,int ,TYPE_1__*) ;
 int FUNC_2 (int *,char*,int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (struct timeval*) ;

int32_t
FUNC_8(ocs_os_handle_t VAR_3, ocs_timer_t *VAR_4, void(*VAR_5)(void *VAR_6), void *VAR_7, uint32_t VAR_8)
{
 struct timeval VAR_9;
 int VAR_10;

 if (VAR_4 == ((void*)0)) {
  FUNC_6(((void*)0), "bad parameter\n");
  return -1;
 }

 if (!FUNC_3(&VAR_4->lock)) {
  FUNC_2(&VAR_4->lock, "ocs_timer", ((void*)0), VAR_1);
 }

 FUNC_0(&VAR_4->callout, &VAR_4->lock, 0);

 VAR_4->func = VAR_5;
 VAR_4->data = VAR_7;

 VAR_9.tv_sec = VAR_8 / 1000;
 VAR_9.tv_usec = (VAR_8 % 1000) * 1000;

 VAR_10 = FUNC_7(&VAR_9);
 if (VAR_10 < 0)
  VAR_10 = VAR_0;
 if (VAR_10 == 0)
  VAR_10 = 1;

 FUNC_4(&VAR_4->lock);
  FUNC_1(&VAR_4->callout, VAR_10, VAR_2, VAR_4);
 FUNC_5(&VAR_4->lock);

 return 0;
}
