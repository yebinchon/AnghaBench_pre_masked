
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct sw_zone_info {int size; int head_hwidx; int tail_hwidx; int type; int zone; } ;
struct sge_params {int sge_control; scalar_t__ page_shift; int* sge_fl_buffer_size; int pad_boundary; } ;
struct sge {int safe_hwidx1; int safe_hwidx2; struct hw_buf_info* hw_buf_info; struct sw_zone_info* sw_zone_info; } ;
struct hw_buf_info {int size; int zidx; int next; } ;
struct TYPE_2__ {int b_wnd; int a_wnd; int mtus; struct sge_params sge; } ;
struct adapter {int flags; TYPE_1__ params; int dev; struct sge sge; } ;
typedef int int8_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;




 int FUNC_0 (int) ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,...) ;
 scalar_t__ VAR_17 ;
 scalar_t__ FUNC_7 (struct adapter*,int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (scalar_t__,int ) ;
 int FUNC_11 (struct hw_buf_info*) ;
 int FUNC_12 (int) ;
 int VAR_18 ;
 int FUNC_13 (struct adapter*,int) ;
 int FUNC_14 (struct adapter*,int ,int ,int ) ;
 int FUNC_15 (struct adapter*,int ,int *) ;
 int FUNC_16 (struct adapter*,int ) ;

int
FUNC_17(struct adapter *VAR_19)
{
 struct sge *VAR_20 = &VAR_19->sge;
 struct sge_params *VAR_21 = &VAR_19->params.sge;
 int VAR_22, VAR_23, VAR_24, VAR_25 = 0;
 uint32_t VAR_26, VAR_27, VAR_28;
 uint16_t VAR_29 = FUNC_10(VAR_14 - 1, VAR_11);
 static int VAR_30[] = {
  131,

  128,

  129,
  130
 };
 struct sw_zone_info *VAR_31, *VAR_32;
 struct hw_buf_info *VAR_33;

 VAR_26 = VAR_8;
 VAR_27 = VAR_8;
 VAR_28 = VAR_19->params.sge.sge_control;
 if ((VAR_28 & VAR_26) != VAR_27) {
  FUNC_6(VAR_19->dev, "invalid SGE_CONTROL(0x%x)\n", VAR_28);
  VAR_25 = VAR_5;
 }





 if (VAR_21->page_shift != VAR_12) {
  FUNC_6(VAR_19->dev, "invalid SGE_HOST_PAGE_SIZE(0x%x)\n", VAR_28);
  VAR_25 = VAR_5;
 }


 VAR_33 = &VAR_20->hw_buf_info[0];
 for (VAR_22 = 0; VAR_22 < FUNC_11(VAR_20->hw_buf_info); VAR_22++, VAR_33++) {
  VAR_28 = VAR_19->params.sge.sge_fl_buffer_size[VAR_22];
  VAR_33->size = VAR_28;
  VAR_33->zidx = FUNC_7(VAR_19, VAR_28) ? -1 : -2;
  VAR_33->next = -1;
 }
 VAR_24 = 0;
 VAR_31 = &VAR_20->sw_zone_info[0];
 VAR_32 = ((void*)0);
 for (VAR_22 = 0; VAR_22 < VAR_16; VAR_22++, VAR_31++) {
  int8_t VAR_34 = -1, VAR_35 = -1;

  VAR_31->size = VAR_30[VAR_22];
  VAR_31->zone = FUNC_9(VAR_31->size);
  VAR_31->type = FUNC_8(VAR_31->size);

  if (VAR_31->size < VAR_13) {
   FUNC_0(FUNC_12(VAR_31->size));
   if (VAR_17 && (VAR_31->size % VAR_21->pad_boundary != 0))
    continue;
  }

  if (VAR_31->size == VAR_18)
   VAR_32 = VAR_31;

  VAR_33 = &VAR_20->hw_buf_info[0];
  for (VAR_23 = 0; VAR_23 < VAR_15; VAR_23++, VAR_33++) {
   if (VAR_33->zidx != -1 || VAR_33->size > VAR_31->size)
    continue;




   VAR_33->zidx = VAR_22;
   if (VAR_34 == -1)
    VAR_34 = VAR_35 = VAR_23;
   else if (VAR_33->size < VAR_20->hw_buf_info[VAR_35].size) {
    VAR_20->hw_buf_info[VAR_35].next = VAR_23;
    VAR_35 = VAR_23;
   } else {
    int8_t *VAR_36;
    struct hw_buf_info *VAR_37;

    for (VAR_36 = &VAR_34; *VAR_36 != -1; VAR_36 = &VAR_37->next) {
     VAR_37 = &VAR_20->hw_buf_info[*VAR_36];
     if (VAR_33->size == VAR_37->size) {
      VAR_33->zidx = -2;
      break;
     }
     if (VAR_33->size > VAR_37->size) {
      VAR_33->next = *VAR_36;
      *VAR_36 = VAR_23;
      break;
     }
    }
   }
  }
  VAR_31->head_hwidx = VAR_34;
  VAR_31->tail_hwidx = VAR_35;

  if (VAR_35 != -1) {
   VAR_24++;
   if (VAR_31->size - VAR_20->hw_buf_info[VAR_35].size >=
       VAR_4)
    VAR_19->flags |= VAR_3;
  }
 }
 if (VAR_24 == 0) {
  FUNC_6(VAR_19->dev, "no usable SGE FL buffer size.\n");
  VAR_25 = VAR_5;
 }

 VAR_20->safe_hwidx1 = -1;
 VAR_20->safe_hwidx2 = -1;
 if (VAR_32 != ((void*)0)) {
  VAR_20->safe_hwidx1 = VAR_32->head_hwidx;
  for (VAR_22 = VAR_32->head_hwidx; VAR_22 != -1; VAR_22 = VAR_33->next) {
   int VAR_38;

   VAR_33 = &VAR_20->hw_buf_info[VAR_22];




   VAR_38 = VAR_32->size - VAR_33->size;
   if (VAR_38 >= VAR_4) {
    VAR_20->safe_hwidx2 = VAR_22;
    break;
   }
  }
 }

 if (VAR_19->flags & VAR_10)
  return (0);

 VAR_27 = FUNC_1(0) | FUNC_2(2) | FUNC_3(4) | FUNC_4(6);
 VAR_28 = FUNC_16(VAR_19, VAR_2);
 if (VAR_28 != VAR_27) {
  FUNC_6(VAR_19->dev, "invalid ULP_RX_TDDP_PSZ(0x%x)\n", VAR_28);
  VAR_25 = VAR_5;
 }

 VAR_26 = VAR_27 = VAR_9;
 VAR_28 = FUNC_16(VAR_19, VAR_1);
 if ((VAR_28 & VAR_26) != VAR_27) {
  FUNC_6(VAR_19->dev, "invalid ULP_RX_CTL(0x%x)\n", VAR_28);
  VAR_25 = VAR_5;
 }

 VAR_26 = FUNC_5(VAR_11) | VAR_6 |
     VAR_7;
 VAR_27 = FUNC_5(VAR_29) | VAR_6 | VAR_7;
 VAR_28 = FUNC_16(VAR_19, VAR_0);
 if ((VAR_28 & VAR_26) != VAR_27) {
  FUNC_6(VAR_19->dev, "invalid TP_PARA_REG5(0x%x)\n", VAR_28);
  VAR_25 = VAR_5;
 }

 FUNC_13(VAR_19, 1);

 FUNC_15(VAR_19, VAR_19->params.mtus, ((void*)0));
 FUNC_14(VAR_19, VAR_19->params.mtus, VAR_19->params.a_wnd, VAR_19->params.b_wnd);

 return (VAR_25);
}
