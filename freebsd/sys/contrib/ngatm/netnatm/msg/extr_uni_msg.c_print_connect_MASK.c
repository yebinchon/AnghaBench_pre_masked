
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_72__ TYPE_9__ ;
typedef struct TYPE_71__ TYPE_8__ ;
typedef struct TYPE_70__ TYPE_7__ ;
typedef struct TYPE_69__ TYPE_6__ ;
typedef struct TYPE_68__ TYPE_5__ ;
typedef struct TYPE_67__ TYPE_4__ ;
typedef struct TYPE_66__ TYPE_3__ ;
typedef struct TYPE_65__ TYPE_36__ ;
typedef struct TYPE_64__ TYPE_35__ ;
typedef struct TYPE_63__ TYPE_34__ ;
typedef struct TYPE_62__ TYPE_33__ ;
typedef struct TYPE_61__ TYPE_32__ ;
typedef struct TYPE_60__ TYPE_31__ ;
typedef struct TYPE_59__ TYPE_30__ ;
typedef struct TYPE_58__ TYPE_2__ ;
typedef struct TYPE_57__ TYPE_29__ ;
typedef struct TYPE_56__ TYPE_28__ ;
typedef struct TYPE_55__ TYPE_27__ ;
typedef struct TYPE_54__ TYPE_26__ ;
typedef struct TYPE_53__ TYPE_25__ ;
typedef struct TYPE_52__ TYPE_24__ ;
typedef struct TYPE_51__ TYPE_23__ ;
typedef struct TYPE_50__ TYPE_22__ ;
typedef struct TYPE_49__ TYPE_21__ ;
typedef struct TYPE_48__ TYPE_20__ ;
typedef struct TYPE_47__ TYPE_1__ ;
typedef struct TYPE_46__ TYPE_19__ ;
typedef struct TYPE_45__ TYPE_18__ ;
typedef struct TYPE_44__ TYPE_17__ ;
typedef struct TYPE_43__ TYPE_16__ ;
typedef struct TYPE_42__ TYPE_15__ ;
typedef struct TYPE_41__ TYPE_14__ ;
typedef struct TYPE_40__ TYPE_13__ ;
typedef struct TYPE_39__ TYPE_12__ ;
typedef struct TYPE_38__ TYPE_11__ ;
typedef struct TYPE_37__ TYPE_10__ ;


typedef union uni_ieall {int dummy; } uni_ieall ;
typedef size_t u_int ;
struct unicx {int dummy; } ;
struct TYPE_64__ {int present; } ;
struct TYPE_65__ {TYPE_35__ h; } ;
struct TYPE_62__ {int present; } ;
struct TYPE_63__ {TYPE_33__ h; } ;
struct TYPE_60__ {int present; } ;
struct TYPE_61__ {TYPE_31__ h; } ;
struct TYPE_57__ {int present; } ;
struct TYPE_59__ {TYPE_29__ h; } ;
struct TYPE_55__ {int present; } ;
struct TYPE_56__ {TYPE_27__ h; } ;
struct TYPE_53__ {int present; } ;
struct TYPE_54__ {TYPE_25__ h; } ;
struct TYPE_51__ {int present; } ;
struct TYPE_52__ {TYPE_23__ h; } ;
struct TYPE_49__ {int present; } ;
struct TYPE_50__ {TYPE_21__ h; } ;
struct TYPE_46__ {int present; } ;
struct TYPE_48__ {TYPE_19__ h; } ;
struct TYPE_42__ {int present; } ;
struct TYPE_43__ {TYPE_15__ h; } ;
struct TYPE_40__ {int present; } ;
struct TYPE_41__ {TYPE_13__ h; } ;
struct TYPE_38__ {int present; } ;
struct TYPE_39__ {TYPE_11__ h; } ;
struct TYPE_72__ {int present; } ;
struct TYPE_37__ {TYPE_9__ h; } ;
struct TYPE_70__ {int present; } ;
struct TYPE_71__ {TYPE_7__ h; } ;
struct TYPE_68__ {int present; } ;
struct TYPE_69__ {TYPE_5__ h; } ;
struct TYPE_66__ {int present; } ;
struct TYPE_67__ {TYPE_3__ h; } ;
struct TYPE_47__ {int present; } ;
struct TYPE_58__ {TYPE_1__ h; } ;
struct uni_connect {TYPE_36__ unrec; TYPE_34__ report; TYPE_32__ called_soft; TYPE_30__ abradd; TYPE_28__ abrsetup; TYPE_26__ facility; TYPE_24__ exqos; TYPE_22__ traffic; TYPE_20__ uu; TYPE_18__* git; TYPE_16__ eetd; TYPE_14__ connedsub; TYPE_12__ conned; TYPE_10__ notify; TYPE_8__ epref; TYPE_6__ connid; TYPE_4__ blli; TYPE_2__ aal; } ;
struct TYPE_44__ {int present; } ;
struct TYPE_45__ {TYPE_17__ h; } ;


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
 size_t VAR_19 ;
 int FUNC_0 (int ,union uni_ieall*,struct unicx*) ;

__attribute__((used)) static void
FUNC_1(struct uni_connect *VAR_20, struct unicx *VAR_21)
{
 u_int VAR_22;

 if(VAR_20->aal.h.present & VAR_14)
  FUNC_0(VAR_0, (union uni_ieall *)&VAR_20->aal, VAR_21);
 if(VAR_20->blli.h.present & VAR_14)
  FUNC_0(VAR_3, (union uni_ieall *)&VAR_20->blli, VAR_21);
 if(VAR_20->connid.h.present & VAR_14)
  FUNC_0(VAR_7, (union uni_ieall *)&VAR_20->connid, VAR_21);
 if(VAR_20->epref.h.present & VAR_14)
  FUNC_0(VAR_9, (union uni_ieall *)&VAR_20->epref, VAR_21);
 if(VAR_20->notify.h.present & VAR_14)
  FUNC_0(VAR_13, (union uni_ieall *)&VAR_20->notify, VAR_21);
 if(VAR_20->conned.h.present & VAR_14)
  FUNC_0(VAR_5, (union uni_ieall *)&VAR_20->conned, VAR_21);
 if(VAR_20->connedsub.h.present & VAR_14)
  FUNC_0(VAR_6, (union uni_ieall *)&VAR_20->connedsub, VAR_21);
 if(VAR_20->eetd.h.present & VAR_14)
  FUNC_0(VAR_8, (union uni_ieall *)&VAR_20->eetd, VAR_21);
 for(VAR_22 = 0; VAR_22 < VAR_19; VAR_22++)
  if(VAR_20->git[VAR_22].h.present & VAR_14)
   FUNC_0(VAR_12, (union uni_ieall *)&VAR_20->git[VAR_22], VAR_21);
 if(VAR_20->uu.h.present & VAR_14)
  FUNC_0(VAR_18, (union uni_ieall *)&VAR_20->uu, VAR_21);
 if(VAR_20->traffic.h.present & VAR_14)
  FUNC_0(VAR_16, (union uni_ieall *)&VAR_20->traffic, VAR_21);
 if(VAR_20->exqos.h.present & VAR_14)
  FUNC_0(VAR_10, (union uni_ieall *)&VAR_20->exqos, VAR_21);
 if(VAR_20->facility.h.present & VAR_14)
  FUNC_0(VAR_11, (union uni_ieall *)&VAR_20->facility, VAR_21);
 if(VAR_20->abrsetup.h.present & VAR_14)
  FUNC_0(VAR_2, (union uni_ieall *)&VAR_20->abrsetup, VAR_21);
 if(VAR_20->abradd.h.present & VAR_14)
  FUNC_0(VAR_1, (union uni_ieall *)&VAR_20->abradd, VAR_21);
 if(VAR_20->called_soft.h.present & VAR_14)
  FUNC_0(VAR_4, (union uni_ieall *)&VAR_20->called_soft, VAR_21);
 if(VAR_20->report.h.present & VAR_14)
  FUNC_0(VAR_15, (union uni_ieall *)&VAR_20->report, VAR_21);
 if(VAR_20->unrec.h.present & VAR_14)
  FUNC_0(VAR_17, (union uni_ieall *)&VAR_20->unrec, VAR_21);
}
