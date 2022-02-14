
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int func_code; int path; } ;
union ccb {TYPE_1__ ccb_h; } ;
typedef int target_id_t ;
struct storvsc_softc {int hs_sim; } ;
typedef int path_id_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;
 union ccb* FUNC_2 () ;
 scalar_t__ FUNC_3 (int *,int *,int,int,int ) ;
 int FUNC_4 (union ccb*) ;
 int FUNC_5 (union ccb*) ;

__attribute__((used)) static void
FUNC_6(struct storvsc_softc *VAR_5)
{
 path_id_t VAR_6;
 target_id_t VAR_7;
 union ccb *VAR_8;

 VAR_6 = FUNC_0(VAR_5->hs_sim);
 VAR_7 = VAR_2;




 VAR_8 = FUNC_2();
 if (VAR_8 == ((void*)0)) {
  FUNC_1("unable to alloc CCB for rescan\n");
  return;
 }

 if (FUNC_3(&VAR_8->ccb_h.path, ((void*)0), VAR_6, VAR_7,
     VAR_0) != VAR_1) {
  FUNC_1("unable to create path for rescan, pathid: %u,"
      "targetid: %u\n", VAR_6, VAR_7);
  FUNC_4(VAR_8);
  return;
 }

 if (VAR_7 == VAR_2)
  VAR_8->ccb_h.func_code = VAR_3;
 else
  VAR_8->ccb_h.func_code = VAR_4;

 FUNC_5(VAR_8);
}
