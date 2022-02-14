
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* uint8_t ;
struct ib_ucm_mra {uintptr_t data; void* len; void* timeout; int id; } ;
struct ib_cm_id {TYPE_1__* device; int handle; } ;
struct TYPE_2__ {int fd; } ;


 int FUNC_0 (void*,struct ib_ucm_mra*,int ,int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int ,void*,int) ;

int FUNC_3(struct ib_cm_id *VAR_2,
     uint8_t VAR_3,
     void *VAR_4,
     uint8_t VAR_5)
{
 struct ib_ucm_mra *VAR_6;
 void *VAR_7;
 int VAR_8;
 int VAR_9;

 FUNC_0(VAR_7, VAR_6, VAR_1, VAR_9);
 VAR_6->id = VAR_2->handle;
 VAR_6->timeout = VAR_3;

 if (VAR_4 && VAR_5) {
  VAR_6->data = (uintptr_t) VAR_4;
  VAR_6->len = VAR_5;
 }

 VAR_8 = FUNC_2(VAR_2->device->fd, VAR_7, VAR_9);
 if (VAR_8 != VAR_9)
  return (VAR_8 >= 0) ? FUNC_1(VAR_0) : VAR_8;

 return 0;
}
