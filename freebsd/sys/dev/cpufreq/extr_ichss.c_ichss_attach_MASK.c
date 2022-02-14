
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct ichss_softc {int bm_rid; int ctrl_rid; TYPE_1__* sets; int * bm_reg; int * ctrl_reg; void* dev; } ;
typedef int ss_en ;
typedef void* device_t ;
struct TYPE_2__ {int lat; void* dev; void* power; void* volts; void* freq; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (void*,int ,int*,int ) ;
 int FUNC_1 (void*,int ,int,int *) ;
 int FUNC_2 (void*) ;
 struct ichss_softc* FUNC_3 (void*) ;
 int FUNC_4 (void*,char*) ;
 int VAR_6 ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int ,int ,int,int) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_7)
{
 struct ichss_softc *VAR_8;
 uint16_t VAR_9;

 VAR_8 = FUNC_3(VAR_7);
 VAR_8->dev = VAR_7;

 VAR_8->bm_rid = 0;
 VAR_8->bm_reg = FUNC_0(VAR_7, VAR_5, &VAR_8->bm_rid,
     VAR_4);
 if (VAR_8->bm_reg == ((void*)0)) {
  FUNC_4(VAR_7, "failed to alloc BM arb register\n");
  return (VAR_1);
 }
 VAR_8->ctrl_rid = 1;
 VAR_8->ctrl_reg = FUNC_0(VAR_7, VAR_5,
     &VAR_8->ctrl_rid, VAR_4);
 if (VAR_8->ctrl_reg == ((void*)0)) {
  FUNC_4(VAR_7, "failed to alloc control register\n");
  FUNC_1(VAR_7, VAR_5, VAR_8->bm_rid,
      VAR_8->bm_reg);
  return (VAR_1);
 }


 VAR_9 = FUNC_5(VAR_6, VAR_3, sizeof(VAR_9));
 if ((VAR_9 & VAR_2) == 0) {
  FUNC_4(VAR_7, "enabling SpeedStep support\n");
  FUNC_6(VAR_6, VAR_3,
      VAR_9 | VAR_2, sizeof(VAR_9));
 }


 VAR_8->sets[0].freq = VAR_0;
 VAR_8->sets[0].volts = VAR_0;
 VAR_8->sets[0].power = VAR_0;
 VAR_8->sets[0].lat = 1000;
 VAR_8->sets[0].dev = VAR_7;
 VAR_8->sets[1] = VAR_8->sets[0];
 FUNC_2(VAR_7);

 return (0);
}
