
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_request {int type; } ;
typedef int nvme_cb_fn_t ;


 int VAR_0 ;
 struct nvme_request* FUNC_0 (int ,void*) ;

__attribute__((used)) static __inline struct nvme_request *
FUNC_1(nvme_cb_fn_t VAR_1, void *VAR_2)
{
 struct nvme_request *VAR_3;

 VAR_3 = FUNC_0(VAR_1, VAR_2);
 if (VAR_3 != ((void*)0))
  VAR_3->type = VAR_0;
 return (VAR_3);
}
