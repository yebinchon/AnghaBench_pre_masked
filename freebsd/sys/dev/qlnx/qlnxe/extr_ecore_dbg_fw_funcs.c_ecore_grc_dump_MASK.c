
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct ecore_ptt {int dummy; } ;
struct TYPE_3__ {scalar_t__ state; } ;
struct dbg_tools_data {scalar_t__ platform_id; scalar_t__ chip_id; TYPE_1__ bus; } ;
struct ecore_hwfn {struct dbg_tools_data dbg_info; } ;
typedef enum dbg_status { ____Placeholder_dbg_status } dbg_status ;
struct TYPE_4__ {int grc_param; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (struct ecore_hwfn*,int,char*) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 int FUNC_1 (struct ecore_hwfn*,struct ecore_ptt*,int*,int,int) ;
 int FUNC_2 (int*,int,int) ;
 int FUNC_3 (int*,int,char*,int) ;
 int FUNC_4 (int*,int,char*,char*) ;
 int FUNC_5 (struct ecore_hwfn*,struct ecore_ptt*) ;
 int FUNC_6 (struct ecore_hwfn*,struct ecore_ptt*,int*,int,int) ;
 int FUNC_7 (struct ecore_hwfn*,struct ecore_ptt*,int*,int) ;
 int FUNC_8 (struct ecore_hwfn*,struct ecore_ptt*,int*,int) ;
 int FUNC_9 (struct ecore_hwfn*,struct ecore_ptt*,int*,int) ;
 int FUNC_10 (struct ecore_hwfn*,struct ecore_ptt*,int*,int) ;
 int FUNC_11 (struct ecore_hwfn*,struct ecore_ptt*,int*,int) ;
 int FUNC_12 (struct ecore_hwfn*,struct ecore_ptt*,int*,int) ;
 int FUNC_13 (struct ecore_hwfn*,struct ecore_ptt*,int*,int,int*,int ,int ) ;
 int FUNC_14 (struct ecore_hwfn*,struct ecore_ptt*,int*,int) ;
 int FUNC_15 (struct ecore_hwfn*,struct ecore_ptt*,int*,int) ;
 int FUNC_16 (struct ecore_hwfn*,struct ecore_ptt*,int*,int) ;
 int FUNC_17 (struct ecore_hwfn*,struct ecore_ptt*,int*,int) ;
 int FUNC_18 (struct ecore_hwfn*,struct ecore_ptt*,int*,int) ;
 int FUNC_19 (struct ecore_hwfn*,int ) ;
 scalar_t__ FUNC_20 (struct ecore_hwfn*,int ) ;
 int FUNC_21 (struct ecore_hwfn*,struct ecore_ptt*,int) ;
 int FUNC_22 (struct ecore_hwfn*,struct ecore_ptt*) ;
 int FUNC_23 (struct ecore_hwfn*,struct ecore_ptt*,int) ;
 int FUNC_24 (struct ecore_hwfn*,struct ecore_ptt*,int ) ;
 int FUNC_25 (struct ecore_hwfn*,struct ecore_ptt*) ;
 TYPE_2__* VAR_23 ;

__attribute__((used)) static enum dbg_status FUNC_26(struct ecore_hwfn *VAR_24,
           struct ecore_ptt *VAR_25,
           u32 *VAR_26,
           bool VAR_27,
           u32 *VAR_28)
{
 struct dbg_tools_data *VAR_29 = &VAR_24->dbg_info;
 bool VAR_30, VAR_31 = 0;
 u8 VAR_32, VAR_33 = 0;
 u32 VAR_34 = 0;

 VAR_30 = VAR_29->platform_id == VAR_22;

 *VAR_28 = 0;

 if (VAR_27) {


  switch (FUNC_24(VAR_24, VAR_25, VAR_19)) {
  case 0: VAR_33 = 1; break;
  case 1: VAR_33 = 2; break;
  case 2: VAR_33 = 4; break;
  }


  FUNC_25(VAR_24, VAR_25);
 }


 VAR_34 += FUNC_1(VAR_24, VAR_25, VAR_26 + VAR_34, VAR_27, 4);
 VAR_34 += FUNC_4(VAR_26 + VAR_34, VAR_27, "dump-type", "grc-dump");
 VAR_34 += FUNC_3(VAR_26 + VAR_34, VAR_27, "num-lcids", FUNC_19(VAR_24, VAR_12));
 VAR_34 += FUNC_3(VAR_26 + VAR_34, VAR_27, "num-ltids", FUNC_19(VAR_24, VAR_13));
 VAR_34 += FUNC_3(VAR_26 + VAR_34, VAR_27, "num-ports", VAR_33);


 if (FUNC_20(VAR_24, VAR_7))
  VAR_34 += FUNC_14(VAR_24, VAR_25, VAR_26 + VAR_34, VAR_27);


 if (VAR_27) {
  FUNC_22(VAR_24, VAR_25);
  FUNC_25(VAR_24, VAR_25);
 }


 if (VAR_27 && VAR_30 && !FUNC_19(VAR_24, VAR_11)) {
   VAR_31 = !FUNC_23(VAR_24, VAR_25, 1);
   if (!VAR_31) {
    FUNC_0(VAR_24, 0, "Failed to mask parities using MFW\n");
    if (FUNC_19(VAR_24, VAR_14))
     return VAR_16;
   }
  }


 if (FUNC_20(VAR_24, VAR_7))
  VAR_34 += FUNC_11(VAR_24, VAR_25, VAR_26 + VAR_34, VAR_27);


 if (VAR_27 && (FUNC_20(VAR_24, VAR_4) || FUNC_20(VAR_24, VAR_10)))
  FUNC_21(VAR_24, VAR_25, 1);


 if (FUNC_20(VAR_24, VAR_7)) {
  bool VAR_35[VAR_18];


  for (VAR_32 = 0; VAR_32 < VAR_18; VAR_32++)
   VAR_35[VAR_32] = 1;
  VAR_35[VAR_0] = 0;
  VAR_34 += FUNC_13(VAR_24, VAR_25, VAR_26 + VAR_34, VAR_27, VAR_35, VAR_21, VAR_21);


  VAR_34 += FUNC_16(VAR_24, VAR_25, VAR_26 + VAR_34, VAR_27);
 }


 VAR_34 += FUNC_10(VAR_24, VAR_25, VAR_26 + VAR_34, VAR_27);


 if (FUNC_20(VAR_24, VAR_5))
  VAR_34 += FUNC_9(VAR_24, VAR_25, VAR_26 + VAR_34, VAR_27);


 if (FUNC_20(VAR_24, VAR_3))
  VAR_34 += FUNC_7(VAR_24, VAR_25, VAR_26 + VAR_34, VAR_27);


 if (FUNC_20(VAR_24, VAR_8))
  VAR_34 += FUNC_15(VAR_24, VAR_25, VAR_26 + VAR_34, VAR_27);


 for (VAR_32 = 0; VAR_32 < VAR_20; VAR_32++)
  if (FUNC_20(VAR_24, VAR_23[VAR_32].grc_param))
   VAR_34 += FUNC_6(VAR_24, VAR_25, VAR_26 + VAR_34, VAR_27, VAR_32);


 if (FUNC_20(VAR_24, VAR_4))
  VAR_34 += FUNC_8(VAR_24, VAR_25, VAR_26 + VAR_34, VAR_27);


 if (FUNC_20(VAR_24, VAR_10))
  VAR_34 += FUNC_18(VAR_24, VAR_25, VAR_26 + VAR_34, VAR_27);


 if (FUNC_20(VAR_24, VAR_6) && VAR_29->chip_id == VAR_1 && VAR_29->platform_id == VAR_22)
  VAR_34 += FUNC_12(VAR_24, VAR_25, VAR_26 + VAR_34, VAR_27);


 if (FUNC_20(VAR_24, VAR_9) && VAR_29->bus.state == VAR_2)
  VAR_34 += FUNC_17(VAR_24, VAR_25, VAR_26 + VAR_34, VAR_27);


 VAR_34 += FUNC_2(VAR_26, VAR_34, VAR_27);

 if (VAR_27) {


  if (FUNC_19(VAR_24, VAR_15))
   FUNC_21(VAR_24, VAR_25, 0);


  if (VAR_30)
   FUNC_5(VAR_24, VAR_25);


  if (VAR_31)
   FUNC_23(VAR_24, VAR_25, 0);
 }

 *VAR_28 = VAR_34;

 return VAR_17;
}
