
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct resource_list_entry {int count; int end; int start; } ;
struct resource {int dummy; } ;
struct localbus_devinfo {int di_bank; int di_res; } ;
typedef int rman_res_t ;
typedef int device_t ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct resource* FUNC_1 (int ,int ,int,int*,int ,int ,int ,int ) ;
 struct localbus_devinfo* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int,int) ;
 struct resource_list_entry* FUNC_4 (int *,int,int) ;

__attribute__((used)) static struct resource *
FUNC_5(device_t VAR_2, device_t VAR_3, int VAR_4, int *VAR_5,
    rman_res_t VAR_6, rman_res_t VAR_7, rman_res_t VAR_8, u_int VAR_9)
{
 struct localbus_devinfo *VAR_10;
 struct resource_list_entry *VAR_11;





 if (FUNC_0(VAR_6, VAR_7)) {
  if ((VAR_10 = FUNC_2(VAR_3)) == ((void*)0))
   return (((void*)0));

  if (VAR_4 == VAR_0)
   VAR_4 = VAR_1;

  VAR_5 = &VAR_10->di_bank;
  VAR_11 = FUNC_4(&VAR_10->di_res, VAR_4, *VAR_5);
  if (VAR_11 == ((void*)0)) {
   FUNC_3(VAR_2, "no default resources for "
       "rid = %d, type = %d\n", *VAR_5, VAR_4);
   return (((void*)0));
  }
  VAR_6 = VAR_11->start;
  VAR_7 = VAR_11->end;
  VAR_8 = VAR_11->count;
 }

 return (FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7,
     VAR_8, VAR_9));
}
