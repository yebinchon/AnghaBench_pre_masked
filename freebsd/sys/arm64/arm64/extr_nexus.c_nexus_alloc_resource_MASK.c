
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct rman {int dummy; } ;
struct resource_list_entry {int start; int end; int count; } ;
struct resource {int dummy; } ;
struct nexus_device {int nx_resources; } ;
typedef int rman_res_t ;
typedef scalar_t__ device_t ;


 struct nexus_device* FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int,int) ;



 scalar_t__ FUNC_2 (scalar_t__,int,int,struct resource*) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 struct rman VAR_1 ;
 struct rman VAR_2 ;
 struct resource_list_entry* FUNC_4 (int *,int,int) ;
 int FUNC_5 (struct resource*) ;
 int FUNC_6 (struct resource*) ;
 struct resource* FUNC_7 (struct rman*,int,int,int,int,scalar_t__) ;
 int FUNC_8 (struct resource*,int ) ;
 int FUNC_9 (struct resource*,int) ;

__attribute__((used)) static struct resource *
FUNC_10(device_t VAR_3, device_t VAR_4, int VAR_5, int *VAR_6,
    rman_res_t VAR_7, rman_res_t VAR_8, rman_res_t VAR_9, u_int VAR_10)
{
 struct nexus_device *VAR_11 = FUNC_0(VAR_4);
 struct resource *VAR_12;
 struct resource_list_entry *VAR_13;
 struct rman *VAR_14;
 int VAR_15 = VAR_10 & VAR_0;







 if (FUNC_1(VAR_7, VAR_8) && (VAR_9 == 1)) {
  if (FUNC_3(VAR_4) != VAR_3 || VAR_11 == ((void*)0))
   return(((void*)0));
  VAR_13 = FUNC_4(&VAR_11->nx_resources, VAR_5, *VAR_6);
  if (VAR_13 == ((void*)0))
   return(((void*)0));
  VAR_7 = VAR_13->start;
  VAR_8 = VAR_13->end;
  VAR_9 = VAR_13->count;
 }

 switch (VAR_5) {
 case 129:
  VAR_14 = &VAR_1;
  break;

 case 128:
 case 130:
  VAR_14 = &VAR_2;
  break;

 default:
  return (((void*)0));
 }

 VAR_12 = FUNC_7(VAR_14, VAR_7, VAR_8, VAR_9, VAR_10, VAR_4);
 if (VAR_12 == ((void*)0))
  return (((void*)0));

 FUNC_9(VAR_12, *VAR_6);
 FUNC_8(VAR_12, FUNC_5(VAR_12));

 if (VAR_15) {
  if (FUNC_2(VAR_4, VAR_5, *VAR_6, VAR_12)) {
   FUNC_6(VAR_12);
   return (((void*)0));
  }
 }

 return (VAR_12);
}
