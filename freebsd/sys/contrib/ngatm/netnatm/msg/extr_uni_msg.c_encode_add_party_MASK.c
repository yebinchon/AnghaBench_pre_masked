
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_80__ TYPE_9__ ;
typedef struct TYPE_79__ TYPE_8__ ;
typedef struct TYPE_78__ TYPE_7__ ;
typedef struct TYPE_77__ TYPE_6__ ;
typedef struct TYPE_76__ TYPE_5__ ;
typedef struct TYPE_75__ TYPE_4__ ;
typedef struct TYPE_74__ TYPE_40__ ;
typedef struct TYPE_73__ TYPE_3__ ;
typedef struct TYPE_72__ TYPE_39__ ;
typedef struct TYPE_71__ TYPE_38__ ;
typedef struct TYPE_70__ TYPE_37__ ;
typedef struct TYPE_69__ TYPE_36__ ;
typedef struct TYPE_68__ TYPE_35__ ;
typedef struct TYPE_67__ TYPE_34__ ;
typedef struct TYPE_66__ TYPE_33__ ;
typedef struct TYPE_65__ TYPE_32__ ;
typedef struct TYPE_64__ TYPE_31__ ;
typedef struct TYPE_63__ TYPE_30__ ;
typedef struct TYPE_62__ TYPE_2__ ;
typedef struct TYPE_61__ TYPE_29__ ;
typedef struct TYPE_60__ TYPE_28__ ;
typedef struct TYPE_59__ TYPE_27__ ;
typedef struct TYPE_58__ TYPE_26__ ;
typedef struct TYPE_57__ TYPE_25__ ;
typedef struct TYPE_56__ TYPE_24__ ;
typedef struct TYPE_55__ TYPE_23__ ;
typedef struct TYPE_54__ TYPE_22__ ;
typedef struct TYPE_53__ TYPE_21__ ;
typedef struct TYPE_52__ TYPE_20__ ;
typedef struct TYPE_51__ TYPE_1__ ;
typedef struct TYPE_50__ TYPE_19__ ;
typedef struct TYPE_49__ TYPE_18__ ;
typedef struct TYPE_48__ TYPE_17__ ;
typedef struct TYPE_47__ TYPE_16__ ;
typedef struct TYPE_46__ TYPE_15__ ;
typedef struct TYPE_45__ TYPE_14__ ;
typedef struct TYPE_44__ TYPE_13__ ;
typedef struct TYPE_43__ TYPE_12__ ;
typedef struct TYPE_42__ TYPE_11__ ;
typedef struct TYPE_41__ TYPE_10__ ;


typedef union uni_ieall {int dummy; } uni_ieall ;
typedef size_t u_int ;
struct unicx {int dummy; } ;
struct uni_msg {size_t* b_buf; size_t b_wptr; size_t b_rptr; } ;
struct TYPE_42__ {int present; } ;
struct TYPE_43__ {TYPE_11__ h; } ;
struct TYPE_78__ {int present; } ;
struct TYPE_79__ {TYPE_7__ h; } ;
struct TYPE_76__ {int present; } ;
struct TYPE_77__ {TYPE_5__ h; } ;
struct TYPE_73__ {int present; } ;
struct TYPE_75__ {TYPE_3__ h; } ;
struct TYPE_51__ {int present; } ;
struct TYPE_62__ {TYPE_1__ h; } ;
struct TYPE_70__ {int present; } ;
struct TYPE_71__ {TYPE_37__ h; } ;
struct TYPE_68__ {int present; } ;
struct TYPE_69__ {TYPE_35__ h; } ;
struct TYPE_66__ {int present; } ;
struct TYPE_67__ {TYPE_33__ h; } ;
struct TYPE_64__ {int present; } ;
struct TYPE_65__ {TYPE_31__ h; } ;
struct TYPE_59__ {int present; } ;
struct TYPE_60__ {TYPE_27__ h; } ;
struct TYPE_55__ {int present; } ;
struct TYPE_56__ {TYPE_23__ h; } ;
struct TYPE_50__ {int present; } ;
struct TYPE_52__ {TYPE_19__ h; } ;
struct TYPE_48__ {int present; } ;
struct TYPE_49__ {TYPE_17__ h; } ;
struct TYPE_46__ {int present; } ;
struct TYPE_47__ {TYPE_15__ h; } ;
struct TYPE_44__ {int present; } ;
struct TYPE_45__ {TYPE_13__ h; } ;
struct uni_add_party {TYPE_12__ unrec; TYPE_10__* dtl; TYPE_8__ dtl_repeat; TYPE_6__ called_soft; TYPE_4__ calling_soft; TYPE_2__ lij_seqno; TYPE_40__* git; TYPE_38__ uu; TYPE_36__ eetd; TYPE_34__ notify; TYPE_32__ epref; TYPE_30__* tns; TYPE_28__ scompl; TYPE_26__* callingsub; TYPE_24__ calling; TYPE_22__* calledsub; TYPE_20__ called; TYPE_18__ blli; TYPE_16__ bhli; TYPE_14__ aal; int hdr; } ;
struct TYPE_80__ {int present; } ;
struct TYPE_72__ {int present; } ;
struct TYPE_74__ {TYPE_39__ h; } ;
struct TYPE_61__ {int present; } ;
struct TYPE_63__ {TYPE_29__ h; } ;
struct TYPE_57__ {int present; } ;
struct TYPE_58__ {TYPE_25__ h; } ;
struct TYPE_53__ {int present; } ;
struct TYPE_54__ {TYPE_21__ h; } ;
struct TYPE_41__ {TYPE_9__ h; } ;


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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 size_t VAR_21 ;
 size_t VAR_22 ;
 size_t VAR_23 ;
 size_t VAR_24 ;
 size_t VAR_25 ;
 scalar_t__ FUNC_0 (int,struct uni_msg*,union uni_ieall*,struct unicx*) ;
 scalar_t__ FUNC_1 (struct uni_msg*,int *,int ,struct unicx*,size_t*) ;

__attribute__((used)) static int
FUNC_2(struct uni_msg *VAR_26, struct uni_add_party *VAR_27, struct unicx *VAR_28)
{
 u_int VAR_29;
 u_int VAR_30;

 if(FUNC_1(VAR_26, &VAR_27->hdr, VAR_0, VAR_28, &VAR_29))
  return (-2);

 if((VAR_27->aal.h.present & VAR_16) &&
    FUNC_0(VAR_1, VAR_26, (union uni_ieall *)&VAR_27->aal, VAR_28))
  return (VAR_1);
 if((VAR_27->bhli.h.present & VAR_16) &&
    FUNC_0(VAR_2, VAR_26, (union uni_ieall *)&VAR_27->bhli, VAR_28))
  return (VAR_2);
 if((VAR_27->blli.h.present & VAR_16) &&
    FUNC_0(VAR_3, VAR_26, (union uni_ieall *)&VAR_27->blli, VAR_28))
  return (VAR_3);
 if((VAR_27->called.h.present & VAR_16) &&
    FUNC_0(VAR_4, VAR_26, (union uni_ieall *)&VAR_27->called, VAR_28))
  return (VAR_4);
 for(VAR_30 = 0; VAR_30 < VAR_21; VAR_30++)
  if((VAR_27->calledsub[VAR_30].h.present & VAR_16) &&
     FUNC_0(VAR_5, VAR_26, (union uni_ieall *)&VAR_27->calledsub[VAR_30], VAR_28))
  return ((VAR_30 << 16) + VAR_5);
 if((VAR_27->calling.h.present & VAR_16) &&
    FUNC_0(VAR_7, VAR_26, (union uni_ieall *)&VAR_27->calling, VAR_28))
  return (VAR_7);
 for(VAR_30 = 0; VAR_30 < VAR_22; VAR_30++)
  if((VAR_27->callingsub[VAR_30].h.present & VAR_16) &&
     FUNC_0(VAR_8, VAR_26, (union uni_ieall *)&VAR_27->callingsub[VAR_30], VAR_28))
  return ((VAR_30 << 16) + VAR_8);
 if((VAR_27->scompl.h.present & VAR_16) &&
    FUNC_0(VAR_17, VAR_26, (union uni_ieall *)&VAR_27->scompl, VAR_28))
  return (VAR_17);
 for(VAR_30 = 0; VAR_30 < VAR_25; VAR_30++)
  if((VAR_27->tns[VAR_30].h.present & VAR_16) &&
     FUNC_0(VAR_18, VAR_26, (union uni_ieall *)&VAR_27->tns[VAR_30], VAR_28))
  return ((VAR_30 << 16) + VAR_18);
 if((VAR_27->epref.h.present & VAR_16) &&
    FUNC_0(VAR_12, VAR_26, (union uni_ieall *)&VAR_27->epref, VAR_28))
  return (VAR_12);
 if((VAR_27->notify.h.present & VAR_16) &&
    FUNC_0(VAR_15, VAR_26, (union uni_ieall *)&VAR_27->notify, VAR_28))
  return (VAR_15);
 if((VAR_27->eetd.h.present & VAR_16) &&
    FUNC_0(VAR_11, VAR_26, (union uni_ieall *)&VAR_27->eetd, VAR_28))
  return (VAR_11);
 if((VAR_27->uu.h.present & VAR_16) &&
    FUNC_0(VAR_20, VAR_26, (union uni_ieall *)&VAR_27->uu, VAR_28))
  return (VAR_20);
 for(VAR_30 = 0; VAR_30 < VAR_24; VAR_30++)
  if((VAR_27->git[VAR_30].h.present & VAR_16) &&
     FUNC_0(VAR_13, VAR_26, (union uni_ieall *)&VAR_27->git[VAR_30], VAR_28))
  return ((VAR_30 << 16) + VAR_13);
 if((VAR_27->lij_seqno.h.present & VAR_16) &&
    FUNC_0(VAR_14, VAR_26, (union uni_ieall *)&VAR_27->lij_seqno, VAR_28))
  return (VAR_14);
 if((VAR_27->calling_soft.h.present & VAR_16) &&
    FUNC_0(VAR_9, VAR_26, (union uni_ieall *)&VAR_27->calling_soft, VAR_28))
  return (VAR_9);
 if((VAR_27->called_soft.h.present & VAR_16) &&
    FUNC_0(VAR_6, VAR_26, (union uni_ieall *)&VAR_27->called_soft, VAR_28))
  return (VAR_6);
 if((VAR_27->dtl_repeat.h.present & VAR_16) &&
    FUNC_0(VAR_10, VAR_26, (union uni_ieall *)&VAR_27->dtl_repeat, VAR_28))
  return (0x10000000 + VAR_10);
 for(VAR_30 = 0; VAR_30 < VAR_23; VAR_30++)
  if((VAR_27->dtl[VAR_30].h.present & VAR_16) &&
     FUNC_0(VAR_10, VAR_26, (union uni_ieall *)&VAR_27->dtl[VAR_30], VAR_28))
  return ((VAR_30 << 16) + VAR_10);
 if((VAR_27->unrec.h.present & VAR_16) &&
    FUNC_0(VAR_19, VAR_26, (union uni_ieall *)&VAR_27->unrec, VAR_28))
  return (VAR_19);

 VAR_26->b_buf[VAR_29+0] = ((VAR_26->b_wptr-VAR_26->b_rptr)-VAR_29-2) >> 8;
 VAR_26->b_buf[VAR_29+1] = ((VAR_26->b_wptr-VAR_26->b_rptr)-VAR_29-2) >> 0;

 return (0);
}
