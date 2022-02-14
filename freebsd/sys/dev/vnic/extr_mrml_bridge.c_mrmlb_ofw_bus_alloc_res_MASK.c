
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct simplebus_softc {int nranges; TYPE_1__* ranges; } ;
struct resource_list_entry {scalar_t__ start; scalar_t__ end; scalar_t__ count; } ;
struct resource {int dummy; } ;
struct mrmlb_ofw_devinfo {int di_rl; } ;
typedef scalar_t__ rman_res_t ;
typedef int device_t ;
struct TYPE_2__ {scalar_t__ bus; scalar_t__ size; scalar_t__ host; } ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 struct resource* FUNC_1 (int ,int ,int,int*,scalar_t__,scalar_t__,scalar_t__,int ) ;
 struct mrmlb_ofw_devinfo* FUNC_2 (int ) ;
 struct simplebus_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,scalar_t__,scalar_t__) ;
 struct resource_list_entry* FUNC_5 (int *,int,int) ;

__attribute__((used)) static struct resource *
FUNC_6(device_t VAR_2, device_t VAR_3, int VAR_4, int *VAR_5,
    rman_res_t VAR_6, rman_res_t VAR_7, rman_res_t VAR_8, u_int VAR_9)
{
 struct simplebus_softc *VAR_10;
 struct mrmlb_ofw_devinfo *VAR_11;
 struct resource_list_entry *VAR_12;
 int VAR_13;

 if (FUNC_0(VAR_6, VAR_7)) {
  if ((VAR_11 = FUNC_2(VAR_3)) == ((void*)0))
   return (((void*)0));
  if (VAR_4 == VAR_0)
      VAR_4 = VAR_1;


  VAR_12 = FUNC_5(&VAR_11->di_rl, VAR_4, *VAR_5);
  if (VAR_12 == ((void*)0))
   return (((void*)0));

  VAR_6 = VAR_12->start;
  VAR_7 = VAR_12->end;
  VAR_8 = VAR_12->count;
 }

 VAR_10 = FUNC_3(VAR_2);

 if (VAR_4 == VAR_1) {

  for (VAR_13 = 0; VAR_13 < VAR_10->nranges; VAR_13++) {
   if (VAR_6 >= VAR_10->ranges[VAR_13].bus && VAR_7 <
       VAR_10->ranges[VAR_13].bus + VAR_10->ranges[VAR_13].size) {
    VAR_6 -= VAR_10->ranges[VAR_13].bus;
    VAR_6 += VAR_10->ranges[VAR_13].host;
    VAR_7 -= VAR_10->ranges[VAR_13].bus;
    VAR_7 += VAR_10->ranges[VAR_13].host;
    break;
   }
  }

  if (VAR_13 == VAR_10->nranges && VAR_10->nranges != 0) {
   FUNC_4(VAR_2, "Could not map resource "
       "%#lx-%#lx\n", VAR_6, VAR_7);
   return (((void*)0));
  }
 }

 return (FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7,
     VAR_8, VAR_9));
}
