
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
struct uni_msg {size_t* b_buf; size_t b_wptr; size_t b_rptr; } ;
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
struct uni_connect {TYPE_36__ unrec; TYPE_34__ report; TYPE_32__ called_soft; TYPE_30__ abradd; TYPE_28__ abrsetup; TYPE_26__ facility; TYPE_24__ exqos; TYPE_22__ traffic; TYPE_20__ uu; TYPE_18__* git; TYPE_16__ eetd; TYPE_14__ connedsub; TYPE_12__ conned; TYPE_10__ notify; TYPE_8__ epref; TYPE_6__ connid; TYPE_4__ blli; TYPE_2__ aal; int hdr; } ;
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
 int VAR_19 ;
 size_t VAR_20 ;
 scalar_t__ FUNC_0 (int,struct uni_msg*,union uni_ieall*,struct unicx*) ;
 scalar_t__ FUNC_1 (struct uni_msg*,int *,int ,struct unicx*,size_t*) ;

__attribute__((used)) static int
FUNC_2(struct uni_msg *VAR_21, struct uni_connect *VAR_22, struct unicx *VAR_23)
{
 u_int VAR_24;
 u_int VAR_25;

 if(FUNC_1(VAR_21, &VAR_22->hdr, VAR_0, VAR_23, &VAR_24))
  return (-2);

 if((VAR_22->aal.h.present & VAR_15) &&
    FUNC_0(VAR_1, VAR_21, (union uni_ieall *)&VAR_22->aal, VAR_23))
  return (VAR_1);
 if((VAR_22->blli.h.present & VAR_15) &&
    FUNC_0(VAR_4, VAR_21, (union uni_ieall *)&VAR_22->blli, VAR_23))
  return (VAR_4);
 if((VAR_22->connid.h.present & VAR_15) &&
    FUNC_0(VAR_8, VAR_21, (union uni_ieall *)&VAR_22->connid, VAR_23))
  return (VAR_8);
 if((VAR_22->epref.h.present & VAR_15) &&
    FUNC_0(VAR_10, VAR_21, (union uni_ieall *)&VAR_22->epref, VAR_23))
  return (VAR_10);
 if((VAR_22->notify.h.present & VAR_15) &&
    FUNC_0(VAR_14, VAR_21, (union uni_ieall *)&VAR_22->notify, VAR_23))
  return (VAR_14);
 if((VAR_22->conned.h.present & VAR_15) &&
    FUNC_0(VAR_6, VAR_21, (union uni_ieall *)&VAR_22->conned, VAR_23))
  return (VAR_6);
 if((VAR_22->connedsub.h.present & VAR_15) &&
    FUNC_0(VAR_7, VAR_21, (union uni_ieall *)&VAR_22->connedsub, VAR_23))
  return (VAR_7);
 if((VAR_22->eetd.h.present & VAR_15) &&
    FUNC_0(VAR_9, VAR_21, (union uni_ieall *)&VAR_22->eetd, VAR_23))
  return (VAR_9);
 for(VAR_25 = 0; VAR_25 < VAR_20; VAR_25++)
  if((VAR_22->git[VAR_25].h.present & VAR_15) &&
     FUNC_0(VAR_13, VAR_21, (union uni_ieall *)&VAR_22->git[VAR_25], VAR_23))
  return ((VAR_25 << 16) + VAR_13);
 if((VAR_22->uu.h.present & VAR_15) &&
    FUNC_0(VAR_19, VAR_21, (union uni_ieall *)&VAR_22->uu, VAR_23))
  return (VAR_19);
 if((VAR_22->traffic.h.present & VAR_15) &&
    FUNC_0(VAR_17, VAR_21, (union uni_ieall *)&VAR_22->traffic, VAR_23))
  return (VAR_17);
 if((VAR_22->exqos.h.present & VAR_15) &&
    FUNC_0(VAR_11, VAR_21, (union uni_ieall *)&VAR_22->exqos, VAR_23))
  return (VAR_11);
 if((VAR_22->facility.h.present & VAR_15) &&
    FUNC_0(VAR_12, VAR_21, (union uni_ieall *)&VAR_22->facility, VAR_23))
  return (VAR_12);
 if((VAR_22->abrsetup.h.present & VAR_15) &&
    FUNC_0(VAR_3, VAR_21, (union uni_ieall *)&VAR_22->abrsetup, VAR_23))
  return (VAR_3);
 if((VAR_22->abradd.h.present & VAR_15) &&
    FUNC_0(VAR_2, VAR_21, (union uni_ieall *)&VAR_22->abradd, VAR_23))
  return (VAR_2);
 if((VAR_22->called_soft.h.present & VAR_15) &&
    FUNC_0(VAR_5, VAR_21, (union uni_ieall *)&VAR_22->called_soft, VAR_23))
  return (VAR_5);
 if((VAR_22->report.h.present & VAR_15) &&
    FUNC_0(VAR_16, VAR_21, (union uni_ieall *)&VAR_22->report, VAR_23))
  return (VAR_16);
 if((VAR_22->unrec.h.present & VAR_15) &&
    FUNC_0(VAR_18, VAR_21, (union uni_ieall *)&VAR_22->unrec, VAR_23))
  return (VAR_18);

 VAR_21->b_buf[VAR_24+0] = ((VAR_21->b_wptr-VAR_21->b_rptr)-VAR_24-2) >> 8;
 VAR_21->b_buf[VAR_24+1] = ((VAR_21->b_wptr-VAR_21->b_rptr)-VAR_24-2) >> 0;

 return (0);
}
