
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct resource_list_entry {int flags; struct resource* res; scalar_t__ count; scalar_t__ end; scalar_t__ start; } ;
struct resource_list {int dummy; } ;
struct resource {int dummy; } ;
typedef scalar_t__ rman_res_t ;
typedef scalar_t__ device_t ;


 struct resource* FUNC_0 (scalar_t__,scalar_t__,int,int*,scalar_t__,scalar_t__,scalar_t__,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,int,int,struct resource*) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__,char*,int,int,int ) ;
 struct resource_list_entry* FUNC_6 (struct resource_list*,int,int) ;
 scalar_t__ FUNC_7 (struct resource*) ;
 scalar_t__ FUNC_8 (struct resource*) ;
 scalar_t__ FUNC_9 (scalar_t__,scalar_t__) ;

struct resource *
FUNC_10(struct resource_list *VAR_3, device_t VAR_4, device_t VAR_5,
    int VAR_6, int *VAR_7, rman_res_t VAR_8, rman_res_t VAR_9, rman_res_t VAR_10, u_int VAR_11)
{
 struct resource_list_entry *VAR_12 = ((void*)0);
 int VAR_13 = (FUNC_4(VAR_5) != VAR_4);
 int VAR_14 = FUNC_1(VAR_8, VAR_9);

 if (VAR_13) {
  return (FUNC_0(FUNC_4(VAR_4), VAR_5,
      VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11));
 }

 VAR_12 = FUNC_6(VAR_3, VAR_6, *VAR_7);

 if (!VAR_12)
  return (((void*)0));

 if (VAR_12->res) {
  if (VAR_12->flags & VAR_2) {
   if (VAR_12->flags & VAR_1)
    return (((void*)0));
   if ((VAR_11 & VAR_0) &&
       FUNC_2(VAR_5, VAR_6, *VAR_7,
       VAR_12->res) != 0)
    return (((void*)0));
   VAR_12->flags |= VAR_1;
   return (VAR_12->res);
  }
  FUNC_5(VAR_4,
      "resource entry %#x type %d for child %s is busy\n", *VAR_7,
      VAR_6, FUNC_3(VAR_5));
  return (((void*)0));
 }

 if (VAR_14) {
  VAR_8 = VAR_12->start;
  VAR_10 = FUNC_9(VAR_10, VAR_12->count);
  VAR_9 = FUNC_9(VAR_12->end, VAR_8 + VAR_10 - 1);
 }

 VAR_12->res = FUNC_0(FUNC_4(VAR_4), VAR_5,
     VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11);




 if (VAR_12->res) {
  VAR_12->start = FUNC_8(VAR_12->res);
  VAR_12->end = FUNC_7(VAR_12->res);
  VAR_12->count = VAR_10;
 }

 return (VAR_12->res);
}
