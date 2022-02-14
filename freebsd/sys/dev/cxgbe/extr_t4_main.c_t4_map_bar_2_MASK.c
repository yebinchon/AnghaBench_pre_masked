
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vm_offset_t ;
struct TYPE_2__ {int wc_en; } ;
struct adapter {scalar_t__ rdmacaps; int doorbells; TYPE_1__ iwt; int dev; int * udbs_res; scalar_t__ udbs_base; int udbs_rid; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int * FUNC_4 (int ,int ,int *,int ) ;
 scalar_t__ FUNC_5 (struct adapter*) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int ,char*,...) ;
 scalar_t__ FUNC_8 (struct adapter*) ;
 scalar_t__ FUNC_9 (struct adapter*) ;
 scalar_t__ FUNC_10 (int *,int ) ;
 int FUNC_11 (int ,int ,int ) ;
 int FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int *) ;
 int FUNC_14 (int *,int ) ;
 int FUNC_15 (struct adapter*,int ,int) ;
 scalar_t__ VAR_9 ;

int
FUNC_16(struct adapter *VAR_10)
{





 if (FUNC_8(VAR_10) && VAR_10->rdmacaps == 0)
  return (0);

 VAR_10->udbs_rid = FUNC_0(2);
 VAR_10->udbs_res = FUNC_4(VAR_10->dev, VAR_8,
     &VAR_10->udbs_rid, VAR_7);
 if (VAR_10->udbs_res == ((void*)0)) {
  FUNC_7(VAR_10->dev, "cannot map doorbell BAR.\n");
  return (VAR_5);
 }
 VAR_10->udbs_base = FUNC_13(VAR_10->udbs_res);

 if (FUNC_5(VAR_10) >= VAR_1) {
  FUNC_14(&VAR_10->doorbells, VAR_2);

  if (VAR_9) {
   int VAR_11, VAR_12;
   VAR_11 = FUNC_11((vm_offset_t)VAR_10->udbs_base,
       FUNC_12(VAR_10->udbs_res), VAR_6);
   if (VAR_11 == 0) {
    FUNC_6(&VAR_10->doorbells, VAR_2);
    FUNC_14(&VAR_10->doorbells, VAR_4);
    FUNC_14(&VAR_10->doorbells, VAR_3);
   } else {
    FUNC_7(VAR_10->dev,
        "couldn't enable write combining: %d\n",
        VAR_11);
   }

   VAR_12 = FUNC_9(VAR_10) ? FUNC_1(0) : FUNC_3(0);
   FUNC_15(VAR_10, VAR_0,
       FUNC_2(7) | VAR_12);
  }

 }
 VAR_10->iwt.wc_en = FUNC_10(&VAR_10->doorbells, VAR_3) ? 1 : 0;

 return (0);
}
