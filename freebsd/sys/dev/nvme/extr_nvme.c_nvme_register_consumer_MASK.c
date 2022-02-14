
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_consumer {int id; int fail_fn; int async_fn; int ctrlr_fn; int ns_fn; } ;
typedef int nvme_cons_ns_fn_t ;
typedef int nvme_cons_fail_fn_t ;
typedef int nvme_cons_ctrlr_fn_t ;
typedef int nvme_cons_async_fn_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct nvme_consumer* VAR_2 ;
 int FUNC_0 (struct nvme_consumer*) ;
 int FUNC_1 (char*) ;

struct nvme_consumer *
FUNC_2(nvme_cons_ns_fn_t VAR_3, nvme_cons_ctrlr_fn_t VAR_4,
         nvme_cons_async_fn_t VAR_5,
         nvme_cons_fail_fn_t VAR_6)
{
 int VAR_7;




 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++)
  if (VAR_2[VAR_7].id == VAR_0) {
   VAR_2[VAR_7].id = VAR_7;
   VAR_2[VAR_7].ns_fn = VAR_3;
   VAR_2[VAR_7].ctrlr_fn = VAR_4;
   VAR_2[VAR_7].async_fn = VAR_5;
   VAR_2[VAR_7].fail_fn = VAR_6;

   FUNC_0(&VAR_2[VAR_7]);
   return (&VAR_2[VAR_7]);
  }

 FUNC_1("nvme(4): consumer not registered - no slots available\n");
 return (((void*)0));
}
