
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct ibv_sa_path_rec {int dummy; } ;
struct ib_user_path_rec {int dummy; } ;
struct ib_ucm_lap {uintptr_t path; uintptr_t data; scalar_t__ len; int id; } ;
struct ib_cm_id {TYPE_1__* device; int handle; } ;
struct TYPE_2__ {int fd; } ;


 int FUNC_0 (void*,struct ib_ucm_lap*,int ,int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (struct ib_user_path_rec*,struct ibv_sa_path_rec*) ;
 int FUNC_3 (int ,void*,int) ;

int FUNC_4(struct ib_cm_id *VAR_2,
     struct ibv_sa_path_rec *VAR_3,
     void *VAR_4,
     uint8_t VAR_5)
{
 struct ib_user_path_rec VAR_6;
 struct ib_ucm_lap *VAR_7;
 void *VAR_8;
 int VAR_9;
 int VAR_10;

 FUNC_0(VAR_8, VAR_7, VAR_1, VAR_10);
 VAR_7->id = VAR_2->handle;

 FUNC_2(&VAR_6, VAR_3);
 VAR_7->path = (uintptr_t) &VAR_6;

 if (VAR_4 && VAR_5) {
  VAR_7->data = (uintptr_t) VAR_4;
  VAR_7->len = VAR_5;
 }

 VAR_9 = FUNC_3(VAR_2->device->fd, VAR_8, VAR_10);
 if (VAR_9 != VAR_10)
  return (VAR_9 >= 0) ? FUNC_1(VAR_0) : -1;

 return 0;
}
