
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct resource_list_entry {int count; int end; int start; } ;
struct resource {int dummy; } ;
struct gic_v3_ofw_devinfo {int di_rl; } ;
typedef int rman_res_t ;
typedef int device_t ;


 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct resource* FUNC_2 (int ,int ,int,int*,int ,int ,int ,int ) ;
 struct gic_v3_ofw_devinfo* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ,char*) ;
 struct resource_list_entry* FUNC_7 (int *,int,int) ;

__attribute__((used)) static struct resource *
FUNC_8(device_t VAR_2, device_t VAR_3, int VAR_4, int *VAR_5,
    rman_res_t VAR_6, rman_res_t VAR_7, rman_res_t VAR_8, u_int VAR_9)
{
 struct gic_v3_ofw_devinfo *VAR_10;
 struct resource_list_entry *VAR_11;
 int VAR_12;

 if (FUNC_1(VAR_6, VAR_7)) {
  if ((VAR_10 = FUNC_3(VAR_3)) == ((void*)0))
   return (((void*)0));
  if (VAR_4 != VAR_0)
   return (((void*)0));


  VAR_11 = FUNC_7(&VAR_10->di_rl, VAR_4, *VAR_5);
  if (VAR_11 == ((void*)0))
   return (((void*)0));

  VAR_6 = VAR_11->start;
  VAR_7 = VAR_11->end;
  VAR_8 = VAR_11->count;
 }




 if (FUNC_6(VAR_2, "ranges")) {
  VAR_12 = FUNC_0(FUNC_5(VAR_2), "ranges");
  if (VAR_12 != 0) {
   if (VAR_1) {
    FUNC_4(VAR_3,
        "Ranges remap not supported\n");
   }
   return (((void*)0));
  }
 }
 return (FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7,
     VAR_8, VAR_9));
}
