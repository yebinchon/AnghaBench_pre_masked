
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
struct TYPE_72__ {int present; } ;
struct TYPE_74__ {TYPE_39__ h; } ;
struct TYPE_68__ {int present; } ;
struct TYPE_69__ {TYPE_35__ h; } ;
struct TYPE_66__ {int present; } ;
struct TYPE_67__ {TYPE_33__ h; } ;
struct TYPE_64__ {int present; } ;
struct TYPE_65__ {TYPE_31__ h; } ;
struct TYPE_61__ {int present; } ;
struct TYPE_63__ {TYPE_29__ h; } ;
struct TYPE_57__ {int present; } ;
struct TYPE_58__ {TYPE_25__ h; } ;
struct TYPE_55__ {int present; } ;
struct TYPE_56__ {TYPE_23__ h; } ;
struct TYPE_53__ {int present; } ;
struct TYPE_54__ {TYPE_21__ h; } ;
struct TYPE_50__ {int present; } ;
struct TYPE_52__ {TYPE_19__ h; } ;
struct TYPE_46__ {int present; } ;
struct TYPE_47__ {TYPE_15__ h; } ;
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
struct uni_add_party {TYPE_40__ unrec; TYPE_38__* dtl; TYPE_36__ dtl_repeat; TYPE_34__ called_soft; TYPE_32__ calling_soft; TYPE_30__ lij_seqno; TYPE_28__* git; TYPE_26__ uu; TYPE_24__ eetd; TYPE_22__ notify; TYPE_20__ epref; TYPE_18__* tns; TYPE_16__ scompl; TYPE_14__* callingsub; TYPE_12__ calling; TYPE_10__* calledsub; TYPE_8__ called; TYPE_6__ blli; TYPE_4__ bhli; TYPE_2__ aal; } ;
struct TYPE_80__ {int present; } ;
struct TYPE_70__ {int present; } ;
struct TYPE_71__ {TYPE_37__ h; } ;
struct TYPE_59__ {int present; } ;
struct TYPE_60__ {TYPE_27__ h; } ;
struct TYPE_48__ {int present; } ;
struct TYPE_49__ {TYPE_17__ h; } ;
struct TYPE_44__ {int present; } ;
struct TYPE_45__ {TYPE_13__ h; } ;
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
 int FUNC_0 (int ,union uni_ieall*,struct unicx*) ;

__attribute__((used)) static void
FUNC_1(struct uni_add_party *VAR_26, struct unicx *VAR_27)
{
 u_int VAR_28;

 if(VAR_26->aal.h.present & VAR_15)
  FUNC_0(VAR_0, (union uni_ieall *)&VAR_26->aal, VAR_27);
 if(VAR_26->bhli.h.present & VAR_15)
  FUNC_0(VAR_1, (union uni_ieall *)&VAR_26->bhli, VAR_27);
 if(VAR_26->blli.h.present & VAR_15)
  FUNC_0(VAR_2, (union uni_ieall *)&VAR_26->blli, VAR_27);
 if(VAR_26->called.h.present & VAR_15)
  FUNC_0(VAR_3, (union uni_ieall *)&VAR_26->called, VAR_27);
 for(VAR_28 = 0; VAR_28 < VAR_21; VAR_28++)
  if(VAR_26->calledsub[VAR_28].h.present & VAR_15)
   FUNC_0(VAR_4, (union uni_ieall *)&VAR_26->calledsub[VAR_28], VAR_27);
 if(VAR_26->calling.h.present & VAR_15)
  FUNC_0(VAR_6, (union uni_ieall *)&VAR_26->calling, VAR_27);
 for(VAR_28 = 0; VAR_28 < VAR_22; VAR_28++)
  if(VAR_26->callingsub[VAR_28].h.present & VAR_15)
   FUNC_0(VAR_7, (union uni_ieall *)&VAR_26->callingsub[VAR_28], VAR_27);
 if(VAR_26->scompl.h.present & VAR_15)
  FUNC_0(VAR_17, (union uni_ieall *)&VAR_26->scompl, VAR_27);
 for(VAR_28 = 0; VAR_28 < VAR_25; VAR_28++)
  if(VAR_26->tns[VAR_28].h.present & VAR_15)
   FUNC_0(VAR_18, (union uni_ieall *)&VAR_26->tns[VAR_28], VAR_27);
 if(VAR_26->epref.h.present & VAR_15)
  FUNC_0(VAR_11, (union uni_ieall *)&VAR_26->epref, VAR_27);
 if(VAR_26->notify.h.present & VAR_15)
  FUNC_0(VAR_14, (union uni_ieall *)&VAR_26->notify, VAR_27);
 if(VAR_26->eetd.h.present & VAR_15)
  FUNC_0(VAR_10, (union uni_ieall *)&VAR_26->eetd, VAR_27);
 if(VAR_26->uu.h.present & VAR_15)
  FUNC_0(VAR_20, (union uni_ieall *)&VAR_26->uu, VAR_27);
 for(VAR_28 = 0; VAR_28 < VAR_24; VAR_28++)
  if(VAR_26->git[VAR_28].h.present & VAR_15)
   FUNC_0(VAR_12, (union uni_ieall *)&VAR_26->git[VAR_28], VAR_27);
 if(VAR_26->lij_seqno.h.present & VAR_15)
  FUNC_0(VAR_13, (union uni_ieall *)&VAR_26->lij_seqno, VAR_27);
 if(VAR_26->calling_soft.h.present & VAR_15)
  FUNC_0(VAR_8, (union uni_ieall *)&VAR_26->calling_soft, VAR_27);
 if(VAR_26->called_soft.h.present & VAR_15)
  FUNC_0(VAR_5, (union uni_ieall *)&VAR_26->called_soft, VAR_27);
 if(VAR_26->dtl_repeat.h.present & VAR_15)
  FUNC_0(VAR_16, (union uni_ieall *)&VAR_26->dtl_repeat, VAR_27);
 for(VAR_28 = 0; VAR_28 < VAR_23; VAR_28++)
  if(VAR_26->dtl[VAR_28].h.present & VAR_15)
   FUNC_0(VAR_9, (union uni_ieall *)&VAR_26->dtl[VAR_28], VAR_27);
 if(VAR_26->unrec.h.present & VAR_15)
  FUNC_0(VAR_19, (union uni_ieall *)&VAR_26->unrec, VAR_27);
}
