
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
struct uni_add_party_ack {TYPE_22__ unrec; TYPE_20__ called_soft; TYPE_18__* git; TYPE_16__ uu; TYPE_14__ connedsub; TYPE_12__ conned; TYPE_10__ eetd; TYPE_8__ notify; TYPE_6__ blli; TYPE_4__ aal; TYPE_2__ epref; } ;
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
 size_t VAR_12 ;
 int FUNC_0 (int ,union uni_ieall*,struct unicx*) ;

__attribute__((used)) static void
FUNC_1(struct uni_add_party_ack *VAR_13, struct unicx *VAR_14)
{
 u_int VAR_15;

 if(VAR_13->epref.h.present & VAR_9)
  FUNC_0(VAR_6, (union uni_ieall *)&VAR_13->epref, VAR_14);
 if(VAR_13->aal.h.present & VAR_9)
  FUNC_0(VAR_0, (union uni_ieall *)&VAR_13->aal, VAR_14);
 if(VAR_13->blli.h.present & VAR_9)
  FUNC_0(VAR_1, (union uni_ieall *)&VAR_13->blli, VAR_14);
 if(VAR_13->notify.h.present & VAR_9)
  FUNC_0(VAR_8, (union uni_ieall *)&VAR_13->notify, VAR_14);
 if(VAR_13->eetd.h.present & VAR_9)
  FUNC_0(VAR_5, (union uni_ieall *)&VAR_13->eetd, VAR_14);
 if(VAR_13->conned.h.present & VAR_9)
  FUNC_0(VAR_3, (union uni_ieall *)&VAR_13->conned, VAR_14);
 if(VAR_13->connedsub.h.present & VAR_9)
  FUNC_0(VAR_4, (union uni_ieall *)&VAR_13->connedsub, VAR_14);
 if(VAR_13->uu.h.present & VAR_9)
  FUNC_0(VAR_11, (union uni_ieall *)&VAR_13->uu, VAR_14);
 for(VAR_15 = 0; VAR_15 < VAR_12; VAR_15++)
  if(VAR_13->git[VAR_15].h.present & VAR_9)
   FUNC_0(VAR_7, (union uni_ieall *)&VAR_13->git[VAR_15], VAR_14);
 if(VAR_13->called_soft.h.present & VAR_9)
  FUNC_0(VAR_2, (union uni_ieall *)&VAR_13->called_soft, VAR_14);
 if(VAR_13->unrec.h.present & VAR_9)
  FUNC_0(VAR_10, (union uni_ieall *)&VAR_13->unrec, VAR_14);
}
