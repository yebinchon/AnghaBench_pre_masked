
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {void* payload; } ;
struct nvme_request {int payload_size; TYPE_1__ u; int type; } ;
typedef int nvme_cb_fn_t ;


 int VAR_0 ;
 struct nvme_request* FUNC_0 (int ,void*) ;

__attribute__((used)) static __inline struct nvme_request *
FUNC_1(void *VAR_1, uint32_t VAR_2,
    nvme_cb_fn_t VAR_3, void *VAR_4)
{
 struct nvme_request *VAR_5;

 VAR_5 = FUNC_0(VAR_3, VAR_4);
 if (VAR_5 != ((void*)0)) {
  VAR_5->type = VAR_0;
  VAR_5->u.payload = VAR_1;
  VAR_5->payload_size = VAR_2;
 }
 return (VAR_5);
}
