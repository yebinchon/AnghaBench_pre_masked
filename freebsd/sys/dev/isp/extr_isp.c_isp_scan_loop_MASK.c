
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int uint16_t ;
typedef int ispsoftc_t ;
typedef int isp_pdb_t ;
struct TYPE_3__ {scalar_t__ isp_loopstate; scalar_t__ isp_scanscratch; int isp_topo; } ;
typedef TYPE_1__ fcparam ;


 TYPE_1__* FUNC_0 (int *,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int *,int) ;
 scalar_t__ FUNC_7 (int *,int,int ,int) ;
 int FUNC_8 (int *,int,int *,int*,int) ;
 int FUNC_9 (int *,int,int ,int *) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (int *,int,int *) ;
 int FUNC_12 (int *,int ,char*,int,...) ;

__attribute__((used)) static int
FUNC_13(ispsoftc_t *VAR_10, int VAR_11)
{
 fcparam *VAR_12 = FUNC_0(VAR_10, VAR_11);
 int VAR_13, VAR_14, VAR_15;
 isp_pdb_t VAR_16;
 uint16_t *VAR_17;
 uint16_t VAR_18;

 if (VAR_12->isp_loopstate < VAR_6)
  return (-1);
 if (VAR_12->isp_loopstate >= VAR_5)
  return (0);

 FUNC_12(VAR_10, VAR_4, "Chan %d FC loop scan", VAR_11);
 VAR_12->isp_loopstate = VAR_7;
 if (FUNC_5(VAR_12->isp_topo)) {
  if (!FUNC_4(VAR_10)) {
   FUNC_6(VAR_10, VAR_11);
   if (VAR_12->isp_loopstate < VAR_7)
    goto abort;
  }
  FUNC_12(VAR_10, VAR_4,
      "Chan %d FC loop scan done (no loop)", VAR_11);
  VAR_12->isp_loopstate = VAR_5;
  return (0);
 }

 VAR_17 = (uint16_t *)VAR_12->isp_scanscratch;
 VAR_14 = VAR_2 / 2;
 VAR_15 = FUNC_8(VAR_10, VAR_11, VAR_17, &VAR_14, 1);
 if (VAR_15 != 0) {
  FUNC_12(VAR_10, VAR_4,
      "Chan %d Getting list of handles failed with %x", VAR_11, VAR_15);
  FUNC_12(VAR_10, VAR_4,
      "Chan %d FC loop scan done (bad)", VAR_11);
  return (-1);
 }

 FUNC_12(VAR_10, VAR_4, "Chan %d Got %d handles",
     VAR_11, VAR_14);




 FUNC_10(VAR_10, VAR_11);
 for (VAR_13 = 0; VAR_13 < VAR_14; VAR_13++) {
  VAR_18 = VAR_17[VAR_13];




  if (FUNC_1(VAR_10)) {
   if (VAR_18 >= VAR_8)
    continue;
  } else {
   if (VAR_18 >= VAR_0 && VAR_18 <= VAR_9)
    continue;
  }





  if (FUNC_2(VAR_10) || FUNC_3(VAR_10)) {
   uint64_t VAR_19 = FUNC_7(VAR_10, VAR_11, VAR_18, 1);
   if (VAR_12->isp_loopstate < VAR_7) {
abort:
    FUNC_12(VAR_10, VAR_4,
        "Chan %d FC loop scan aborted", VAR_11);
    return (1);
   }
   if (VAR_19 == VAR_1) {
    continue;
   }
  }




  VAR_15 = FUNC_9(VAR_10, VAR_11, VAR_18, &VAR_16);
  if (VAR_12->isp_loopstate < VAR_7)
   goto abort;
  if (VAR_15 != 0) {
   FUNC_12(VAR_10, VAR_3,
       "Chan %d FC Scan Loop handle %d returned %x",
       VAR_11, VAR_18, VAR_15);
   continue;
  }

  FUNC_11(VAR_10, VAR_11, &VAR_16);
 }
 if (VAR_12->isp_loopstate < VAR_7)
  goto abort;
 VAR_12->isp_loopstate = VAR_5;
 FUNC_12(VAR_10, VAR_4, "Chan %d FC loop scan done", VAR_11);
 return (0);
}
