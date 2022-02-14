
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ model; } ;
struct psm_softc {int config; int unit; int flags; TYPE_1__ hw; int kbdc; } ;
struct TYPE_6__ {int resolution; int rate; } ;
typedef TYPE_2__ mousemode_t ;
struct TYPE_7__ {scalar_t__ model; int (* probefunc ) (struct psm_softc*,int ) ;} ;
typedef int KBDC ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int*,int ,int) ;
 int FUNC_4 (int ,char*,int ,...) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int) ;
 int FUNC_11 (struct psm_softc*,int ) ;
 int FUNC_12 (int ) ;
 TYPE_3__* VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static int
FUNC_13(struct psm_softc *VAR_10, mousemode_t *VAR_11)
{
 KBDC VAR_12 = VAR_10->kbdc;
 int VAR_13[3];
 int VAR_14;

 switch((VAR_14 = FUNC_12(VAR_12))) {
 case 1:
 case 2:
 case 3:
 case 128:
  if (VAR_9)
   FUNC_4(VAR_1,
       "psm%d: strange result for test aux port (%d).\n",
       VAR_10->unit, VAR_14);

 case 0:
  break;
 case -1:
 default:
  FUNC_5(VAR_12);
  if (VAR_10->config & VAR_3)
   break;
  FUNC_4(VAR_2, "psm%d: the aux port is not functioning (%d).\n",
      VAR_10->unit, VAR_14);
  return (VAR_0);
 }

 if (VAR_10->config & VAR_4) {




 } else {




  if (!FUNC_6(VAR_12)) {
   FUNC_5(VAR_12);
   FUNC_4(VAR_2, "psm%d: failed to reset the aux device.\n",
       VAR_10->unit);
   return (VAR_0);
  }
 }





 if (!FUNC_2(VAR_12) || !FUNC_0(VAR_12)) {
  FUNC_4(VAR_2, "psm%d: failed to enable the aux device.\n",
      VAR_10->unit);
  return (VAR_0);
 }
 FUNC_1(VAR_12, 10);


 for (VAR_14 = 0; VAR_8[VAR_14].probefunc != ((void*)0); ++VAR_14)
  if (VAR_8[VAR_14].model == VAR_10->hw.model)
   (*VAR_8[VAR_14].probefunc)(VAR_10, VAR_6);


 if (VAR_11 != (mousemode_t *)((void*)0)) {
  if (VAR_11->rate > 0)
   VAR_11->rate = FUNC_9(VAR_12, VAR_11->rate);
  if (VAR_11->resolution >= 0)
   VAR_11->resolution =
       FUNC_8(VAR_12, VAR_11->resolution);
  FUNC_10(VAR_12, 1);
  FUNC_7(VAR_12);
 }


 VAR_10->flags |= VAR_5;


 if (FUNC_3(VAR_12, VAR_13, 0, 3) < 3)
  FUNC_4(VAR_1, "psm%d: failed to get status (doinitialize).\n",
      VAR_10->unit);

 return (VAR_7);
}
