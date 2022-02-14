
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_44__ TYPE_9__ ;
typedef struct TYPE_43__ TYPE_8__ ;
typedef struct TYPE_42__ TYPE_7__ ;
typedef struct TYPE_41__ TYPE_6__ ;
typedef struct TYPE_40__ TYPE_5__ ;
typedef struct TYPE_39__ TYPE_4__ ;
typedef struct TYPE_38__ TYPE_3__ ;
typedef struct TYPE_37__ TYPE_2__ ;
typedef struct TYPE_36__ TYPE_22__ ;
typedef struct TYPE_35__ TYPE_21__ ;
typedef struct TYPE_34__ TYPE_20__ ;
typedef struct TYPE_33__ TYPE_1__ ;
typedef struct TYPE_32__ TYPE_19__ ;
typedef struct TYPE_31__ TYPE_18__ ;
typedef struct TYPE_30__ TYPE_17__ ;
typedef struct TYPE_29__ TYPE_16__ ;
typedef struct TYPE_28__ TYPE_15__ ;
typedef struct TYPE_27__ TYPE_14__ ;
typedef struct TYPE_26__ TYPE_13__ ;
typedef struct TYPE_25__ TYPE_12__ ;
typedef struct TYPE_24__ TYPE_11__ ;
typedef struct TYPE_23__ TYPE_10__ ;


typedef union uni_ieall {int dummy; } uni_ieall ;
typedef size_t u_int ;
struct unicx {int dummy; } ;
struct uni_msg {size_t* b_buf; size_t b_wptr; size_t b_rptr; } ;
struct TYPE_35__ {int present; } ;
struct TYPE_36__ {TYPE_21__ h; } ;
struct TYPE_32__ {int present; } ;
struct TYPE_34__ {TYPE_19__ h; } ;
struct TYPE_28__ {int present; } ;
struct TYPE_29__ {TYPE_15__ h; } ;
struct TYPE_26__ {int present; } ;
struct TYPE_27__ {TYPE_13__ h; } ;
struct TYPE_24__ {int present; } ;
struct TYPE_25__ {TYPE_11__ h; } ;
struct TYPE_44__ {int present; } ;
struct TYPE_23__ {TYPE_9__ h; } ;
struct TYPE_42__ {int present; } ;
struct TYPE_43__ {TYPE_7__ h; } ;
struct TYPE_40__ {int present; } ;
struct TYPE_41__ {TYPE_5__ h; } ;
struct TYPE_38__ {int present; } ;
struct TYPE_39__ {TYPE_3__ h; } ;
struct TYPE_33__ {int present; } ;
struct TYPE_37__ {TYPE_1__ h; } ;
struct uni_add_party_ack {TYPE_22__ unrec; TYPE_20__ called_soft; TYPE_18__* git; TYPE_16__ uu; TYPE_14__ connedsub; TYPE_12__ conned; TYPE_10__ eetd; TYPE_8__ notify; TYPE_6__ blli; TYPE_4__ aal; TYPE_2__ epref; int hdr; } ;
struct TYPE_30__ {int present; } ;
struct TYPE_31__ {TYPE_17__ h; } ;


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
 size_t VAR_13 ;
 scalar_t__ FUNC_0 (int,struct uni_msg*,union uni_ieall*,struct unicx*) ;
 scalar_t__ FUNC_1 (struct uni_msg*,int *,int ,struct unicx*,size_t*) ;

__attribute__((used)) static int
FUNC_2(struct uni_msg *VAR_14, struct uni_add_party_ack *VAR_15, struct unicx *VAR_16)
{
 u_int VAR_17;
 u_int VAR_18;

 if(FUNC_1(VAR_14, &VAR_15->hdr, VAR_0, VAR_16, &VAR_17))
  return (-2);

 if((VAR_15->epref.h.present & VAR_10) &&
    FUNC_0(VAR_7, VAR_14, (union uni_ieall *)&VAR_15->epref, VAR_16))
  return (VAR_7);
 if((VAR_15->aal.h.present & VAR_10) &&
    FUNC_0(VAR_1, VAR_14, (union uni_ieall *)&VAR_15->aal, VAR_16))
  return (VAR_1);
 if((VAR_15->blli.h.present & VAR_10) &&
    FUNC_0(VAR_2, VAR_14, (union uni_ieall *)&VAR_15->blli, VAR_16))
  return (VAR_2);
 if((VAR_15->notify.h.present & VAR_10) &&
    FUNC_0(VAR_9, VAR_14, (union uni_ieall *)&VAR_15->notify, VAR_16))
  return (VAR_9);
 if((VAR_15->eetd.h.present & VAR_10) &&
    FUNC_0(VAR_6, VAR_14, (union uni_ieall *)&VAR_15->eetd, VAR_16))
  return (VAR_6);
 if((VAR_15->conned.h.present & VAR_10) &&
    FUNC_0(VAR_4, VAR_14, (union uni_ieall *)&VAR_15->conned, VAR_16))
  return (VAR_4);
 if((VAR_15->connedsub.h.present & VAR_10) &&
    FUNC_0(VAR_5, VAR_14, (union uni_ieall *)&VAR_15->connedsub, VAR_16))
  return (VAR_5);
 if((VAR_15->uu.h.present & VAR_10) &&
    FUNC_0(VAR_12, VAR_14, (union uni_ieall *)&VAR_15->uu, VAR_16))
  return (VAR_12);
 for(VAR_18 = 0; VAR_18 < VAR_13; VAR_18++)
  if((VAR_15->git[VAR_18].h.present & VAR_10) &&
     FUNC_0(VAR_8, VAR_14, (union uni_ieall *)&VAR_15->git[VAR_18], VAR_16))
  return ((VAR_18 << 16) + VAR_8);
 if((VAR_15->called_soft.h.present & VAR_10) &&
    FUNC_0(VAR_3, VAR_14, (union uni_ieall *)&VAR_15->called_soft, VAR_16))
  return (VAR_3);
 if((VAR_15->unrec.h.present & VAR_10) &&
    FUNC_0(VAR_11, VAR_14, (union uni_ieall *)&VAR_15->unrec, VAR_16))
  return (VAR_11);

 VAR_14->b_buf[VAR_17+0] = ((VAR_14->b_wptr-VAR_14->b_rptr)-VAR_17-2) >> 8;
 VAR_14->b_buf[VAR_17+1] = ((VAR_14->b_wptr-VAR_14->b_rptr)-VAR_17-2) >> 0;

 return (0);
}
