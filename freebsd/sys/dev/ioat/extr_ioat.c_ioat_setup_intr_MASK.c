
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ioat_softc {int rid; int * tag; int * res; int device; } ;
typedef scalar_t__ boolean_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 void* FUNC_0 (int ,int ,int*,int) ;
 int FUNC_1 (int ,int *,int,int *,int ,struct ioat_softc*,int **) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct ioat_softc*,int ) ;
 int FUNC_4 (int ,int*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(struct ioat_softc *VAR_11)
{
 uint32_t VAR_12;
 int VAR_13;
 boolean_t VAR_14;
 boolean_t VAR_15;

 VAR_14 = VAR_1;
 VAR_15 = VAR_1;

 if (!VAR_9 && FUNC_5(VAR_11->device) >= 1) {
  VAR_12 = 1;
  FUNC_4(VAR_11->device, &VAR_12);
  if (VAR_12 == 1)
   VAR_14 = VAR_8;
 }

 if (VAR_14) {
  VAR_11->rid = 1;
  VAR_11->res = FUNC_0(VAR_11->device, VAR_7,
      &VAR_11->rid, VAR_5);
 } else {
  VAR_11->rid = 0;
  VAR_11->res = FUNC_0(VAR_11->device, VAR_7,
      &VAR_11->rid, VAR_6 | VAR_5);
 }
 if (VAR_11->res == ((void*)0)) {
  FUNC_2(0, "bus_alloc_resource failed\n");
  return (VAR_0);
 }

 VAR_11->tag = ((void*)0);
 VAR_13 = FUNC_1(VAR_11->device, VAR_11->res, VAR_2 |
     VAR_3, ((void*)0), VAR_10, VAR_11, &VAR_11->tag);
 if (VAR_13 != 0) {
  FUNC_2(0, "bus_setup_intr failed\n");
  return (VAR_13);
 }

 FUNC_3(VAR_11, VAR_4);
 return (0);
}
