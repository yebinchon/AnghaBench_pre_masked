
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* uint8_t ;
typedef int uint32_t ;
struct ib_ucm_info {int status; uintptr_t data; uintptr_t info; void* info_len; void* data_len; int id; } ;
struct ib_cm_id {TYPE_1__* device; int handle; } ;
struct TYPE_2__ {int fd; } ;


 int FUNC_0 (void*,struct ib_ucm_info*,int ,int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,void*,int) ;

__attribute__((used)) static inline int FUNC_3(struct ib_cm_id *VAR_1,
     uint32_t VAR_2,
     int VAR_3,
     void *VAR_4,
     uint8_t VAR_5,
     void *VAR_6,
     uint8_t VAR_7)
{
 struct ib_ucm_info *VAR_8;
 void *VAR_9;
 int VAR_10;
 int VAR_11;

 FUNC_0(VAR_9, VAR_8, VAR_2, VAR_11);
 VAR_8->id = VAR_1->handle;
 VAR_8->status = VAR_3;

 if (VAR_6 && VAR_7) {
  VAR_8->data = (uintptr_t) VAR_6;
  VAR_8->data_len = VAR_7;
 }

 if (VAR_4 && VAR_5) {
  VAR_8->info = (uintptr_t) VAR_4;
  VAR_8->info_len = VAR_5;
 }

 VAR_10 = FUNC_2(VAR_1->device->fd, VAR_9, VAR_11);
 if (VAR_10 != VAR_11)
  return (VAR_10 >= 0) ? FUNC_1(VAR_0) : -1;

 return 0;
}
