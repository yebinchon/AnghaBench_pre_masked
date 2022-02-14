
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct resource_list_entry {struct resource* res; scalar_t__ start; scalar_t__ count; } ;
struct resource {int dummy; } ;
struct quicc_device {int qd_rman; int qd_rlist; } ;
typedef int rman_res_t ;
typedef scalar_t__ device_t ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 struct quicc_device* FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 struct resource_list_entry* FUNC_3 (int *,int,int) ;
 struct resource* FUNC_4 (int ,scalar_t__,scalar_t__,scalar_t__,int ,scalar_t__) ;
 int FUNC_5 (struct resource*,scalar_t__) ;
 int FUNC_6 (struct resource*,int *) ;

struct resource *
FUNC_7(device_t VAR_1, device_t VAR_2, int VAR_3, int *VAR_4,
    rman_res_t VAR_5, rman_res_t VAR_6, rman_res_t VAR_7, u_int VAR_8)
{
 struct quicc_device *VAR_9;
 struct resource_list_entry *VAR_10;

 if (FUNC_2(VAR_2) != VAR_1)
  return (((void*)0));


 if (!FUNC_0(VAR_5, VAR_6))
  return (((void*)0));

 VAR_9 = FUNC_1(VAR_2);
 VAR_10 = FUNC_3(&VAR_9->qd_rlist, VAR_3, *VAR_4);
 if (VAR_10 == ((void*)0))
  return (((void*)0));

 if (VAR_10->res == ((void*)0)) {
  VAR_10->res = FUNC_4(VAR_9->qd_rman, VAR_10->start,
      VAR_10->start + VAR_10->count - 1, VAR_10->count, VAR_8, VAR_2);
  if (VAR_10->res != ((void*)0)) {
   FUNC_6(VAR_10->res, &VAR_0);
   FUNC_5(VAR_10->res, VAR_10->start);
  }
 }
 return (VAR_10->res);
}
