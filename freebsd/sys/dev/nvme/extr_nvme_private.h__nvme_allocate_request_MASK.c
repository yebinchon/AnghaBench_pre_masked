
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_request {int timeout; void* cb_arg; int cb_fn; } ;
typedef int nvme_cb_fn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct nvme_request* FUNC_0 (int ,int) ;

__attribute__((used)) static __inline struct nvme_request *
FUNC_1(nvme_cb_fn_t VAR_4, void *VAR_5)
{
 struct nvme_request *VAR_6;

 VAR_6 = FUNC_0(VAR_3, VAR_0 | VAR_1);
 if (VAR_6 != ((void*)0)) {
  VAR_6->cb_fn = VAR_4;
  VAR_6->cb_arg = VAR_5;
  VAR_6->timeout = VAR_2;
 }
 return (VAR_6);
}
