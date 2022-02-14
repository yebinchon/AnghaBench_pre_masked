
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct resource_list_entry {int flags; } ;
struct resource_list {int dummy; } ;
struct resource {int dummy; } ;
typedef int rman_res_t ;
typedef scalar_t__ device_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*) ;
 struct resource* FUNC_2 (struct resource_list*,scalar_t__,scalar_t__,int,int*,int ,int ,int ,int) ;
 struct resource_list_entry* FUNC_3 (struct resource_list*,int,int) ;

struct resource *
FUNC_4(struct resource_list *VAR_2, device_t VAR_3, device_t VAR_4,
    int VAR_5, int *VAR_6, rman_res_t VAR_7, rman_res_t VAR_8, rman_res_t VAR_9, u_int VAR_10)
{
 struct resource_list_entry *VAR_11 = ((void*)0);
 int VAR_12 = (FUNC_0(VAR_4) != VAR_3);
 struct resource *VAR_13;

 if (VAR_12)
  FUNC_1(
    "resource_list_reserve() should only be called for direct children");
 if (VAR_10 & VAR_0)
  FUNC_1(
    "resource_list_reserve() should only reserve inactive resources");

 VAR_13 = FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9,
     VAR_10);
 if (VAR_13 != ((void*)0)) {
  VAR_11 = FUNC_3(VAR_2, VAR_5, *VAR_6);
  VAR_11->flags |= VAR_1;
 }
 return (VAR_13);
}
