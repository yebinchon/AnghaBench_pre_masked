
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct resource_list_entry {scalar_t__ start; scalar_t__ end; scalar_t__ count; } ;
struct resource {int dummy; } ;
struct mv_pcib_ctrl_softc {int nranges; TYPE_1__* ranges; } ;
struct mv_pcib_ctrl_devinfo {int di_rl; } ;
typedef scalar_t__ rman_res_t ;
typedef int device_t ;
struct TYPE_2__ {scalar_t__ bus; scalar_t__ size; scalar_t__ host; } ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 int VAR_0 ;
 struct resource* FUNC_1 (int ,int ,int,int*,scalar_t__,scalar_t__,scalar_t__,int ) ;
 struct mv_pcib_ctrl_devinfo* FUNC_2 (int ) ;
 struct mv_pcib_ctrl_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,scalar_t__,scalar_t__) ;
 struct resource_list_entry* FUNC_5 (int *,int,int) ;

__attribute__((used)) static struct resource *
FUNC_6(device_t VAR_1, device_t VAR_2, int VAR_3, int *VAR_4,
    rman_res_t VAR_5, rman_res_t VAR_6, rman_res_t VAR_7, u_int VAR_8)
{
 struct mv_pcib_ctrl_devinfo *VAR_9;
 struct resource_list_entry *VAR_10;
 struct mv_pcib_ctrl_softc *VAR_11;
 int VAR_12;

 if (FUNC_0(VAR_5, VAR_6)) {

  if ((VAR_9 = FUNC_2(VAR_2)) == ((void*)0))
   return (((void*)0));
  if (VAR_3 != VAR_0)
   return (((void*)0));


  VAR_10 = FUNC_5(&VAR_9->di_rl, VAR_3, *VAR_4);

  if (VAR_10 == ((void*)0))
   return (((void*)0));

  VAR_5 = VAR_10->start;
  VAR_6 = VAR_10->end;
  VAR_7 = VAR_10->count;
 }

 VAR_11 = FUNC_3(VAR_1);
 if (VAR_3 == VAR_0) {

  for (VAR_12 = 0; VAR_12 < VAR_11->nranges; VAR_12++) {
   if (VAR_5 >= VAR_11->ranges[VAR_12].bus && VAR_6 <
       VAR_11->ranges[VAR_12].bus + VAR_11->ranges[VAR_12].size) {
    VAR_5 -= VAR_11->ranges[VAR_12].bus;
    VAR_5 += VAR_11->ranges[VAR_12].host;
    VAR_6 -= VAR_11->ranges[VAR_12].bus;
    VAR_6 += VAR_11->ranges[VAR_12].host;
    break;
   }
  }

  if (VAR_12 == VAR_11->nranges && VAR_11->nranges != 0) {
   FUNC_4(VAR_1, "Could not map resource "
       "%#llx-%#llx\n", VAR_5, VAR_6);
   return (((void*)0));
  }
 }

 return (FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6,
     VAR_7, VAR_8));
}
