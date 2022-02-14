
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
struct ib_ucm_private_data {uintptr_t data; scalar_t__ len; int id; } ;
struct ib_cm_id {TYPE_1__* device; int handle; } ;
struct TYPE_2__ {int fd; } ;


 int FUNC_0 (void*,struct ib_ucm_private_data*,int ,int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,void*,int) ;

__attribute__((used)) static inline int FUNC_3(struct ib_cm_id *VAR_1,
           uint32_t VAR_2,
           void *VAR_3,
           uint8_t VAR_4)
{
 struct ib_ucm_private_data *VAR_5;
 void *VAR_6;
 int VAR_7;
 int VAR_8;

 FUNC_0(VAR_6, VAR_5, VAR_2, VAR_8);
 VAR_5->id = VAR_1->handle;

 if (VAR_3 && VAR_4) {
  VAR_5->data = (uintptr_t) VAR_3;
  VAR_5->len = VAR_4;
 }

 VAR_7 = FUNC_2(VAR_1->device->fd, VAR_6, VAR_8);
 if (VAR_7 != VAR_8)
  return (VAR_7 >= 0) ? FUNC_1(VAR_0) : -1;

 return 0;
}
