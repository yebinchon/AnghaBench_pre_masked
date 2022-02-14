
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union ccb {int dummy; } ccb ;
struct TYPE_2__ {union ccb* payload; } ;
struct nvme_request {TYPE_1__ u; int type; } ;
typedef int nvme_cb_fn_t ;


 int VAR_0 ;
 struct nvme_request* FUNC_0 (int ,void*) ;

__attribute__((used)) static __inline struct nvme_request *
FUNC_1(union ccb *VAR_1, nvme_cb_fn_t VAR_2, void *VAR_3)
{
 struct nvme_request *VAR_4;

 VAR_4 = FUNC_0(VAR_2, VAR_3);
 if (VAR_4 != ((void*)0)) {
  VAR_4->type = VAR_0;
  VAR_4->u.payload = VAR_1;
 }

 return (VAR_4);
}
