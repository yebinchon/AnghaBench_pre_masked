
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uintmax_t ;
typedef int u_int ;
struct resource_list_entry {scalar_t__ start; scalar_t__ end; scalar_t__ count; } ;
struct resource_list {int dummy; } ;
struct resource {int dummy; } ;
struct arm_gic_softc {int nranges; TYPE_1__* ranges; } ;
typedef scalar_t__ rman_res_t ;
typedef int device_t ;
struct TYPE_2__ {scalar_t__ bus; scalar_t__ size; scalar_t__ host; } ;


 struct resource_list* FUNC_0 (int ,int ) ;
 int FUNC_1 (int,char*) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct resource* FUNC_3 (int ,int ,int,int*,scalar_t__,scalar_t__,scalar_t__,int ) ;
 struct arm_gic_softc* FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,int,int) ;
 struct resource_list_entry* FUNC_6 (struct resource_list*,int,int) ;

__attribute__((used)) static struct resource *
FUNC_7(device_t VAR_3, device_t VAR_4, int VAR_5, int *VAR_6,
    rman_res_t VAR_7, rman_res_t VAR_8, rman_res_t VAR_9, u_int VAR_10)
{
 struct arm_gic_softc *VAR_11;
 struct resource_list_entry *VAR_12;
 struct resource_list *VAR_13;
 int VAR_14;

 FUNC_1(VAR_5 == VAR_1, ("Invalid resoure type %x", VAR_5));

 VAR_11 = FUNC_4(VAR_3);





 if (FUNC_2(VAR_7, VAR_8)) {
  VAR_13 = FUNC_0(VAR_3, VAR_4);

  if (VAR_5 == VAR_0)
   VAR_5 = VAR_1;

  VAR_12 = FUNC_6(VAR_13, VAR_5, *VAR_6);
  if (VAR_12 == ((void*)0)) {
   if (VAR_2)
    FUNC_5(VAR_3, "no default resources for "
        "rid = %d, type = %d\n", *VAR_6, VAR_5);
   return (((void*)0));
  }
  VAR_7 = VAR_12->start;
  VAR_8 = VAR_12->end;
  VAR_9 = VAR_12->count;
 }


 for (VAR_14 = 0; VAR_14 < VAR_11->nranges; VAR_14++) {
  if (VAR_7 >= VAR_11->ranges[VAR_14].bus && VAR_8 <
      VAR_11->ranges[VAR_14].bus + VAR_11->ranges[VAR_14].size) {
   VAR_7 -= VAR_11->ranges[VAR_14].bus;
   VAR_7 += VAR_11->ranges[VAR_14].host;
   VAR_8 -= VAR_11->ranges[VAR_14].bus;
   VAR_8 += VAR_11->ranges[VAR_14].host;
   break;
  }
 }
 if (VAR_14 == VAR_11->nranges && VAR_11->nranges != 0) {
  if (VAR_2)
   FUNC_5(VAR_3, "Could not map resource "
       "%#jx-%#jx\n", (uintmax_t)VAR_7, (uintmax_t)VAR_8);

  return (((void*)0));
 }

 return (FUNC_3(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8,
     VAR_9, VAR_10));
}
