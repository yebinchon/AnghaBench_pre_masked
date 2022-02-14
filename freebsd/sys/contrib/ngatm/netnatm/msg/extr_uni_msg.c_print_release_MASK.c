
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_9__ ;
typedef struct TYPE_27__ TYPE_8__ ;
typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_14__ ;
typedef struct TYPE_18__ TYPE_13__ ;
typedef struct TYPE_17__ TYPE_12__ ;
typedef struct TYPE_16__ TYPE_11__ ;
typedef struct TYPE_15__ TYPE_10__ ;


typedef union uni_ieall {int dummy; } uni_ieall ;
typedef int u_int ;
struct unicx {int dummy; } ;
struct TYPE_18__ {int present; } ;
struct TYPE_19__ {TYPE_13__ h; } ;
struct TYPE_16__ {int present; } ;
struct TYPE_17__ {TYPE_11__ h; } ;
struct TYPE_28__ {int present; } ;
struct TYPE_15__ {TYPE_9__ h; } ;
struct TYPE_26__ {int present; } ;
struct TYPE_27__ {TYPE_7__ h; } ;
struct TYPE_22__ {int present; } ;
struct TYPE_23__ {TYPE_3__ h; } ;
struct uni_release {TYPE_14__ unrec; TYPE_12__ crankback; TYPE_10__ facility; TYPE_8__ uu; TYPE_6__* git; TYPE_4__ notify; TYPE_2__* cause; } ;
struct TYPE_24__ {int present; } ;
struct TYPE_25__ {TYPE_5__ h; } ;
struct TYPE_20__ {int present; } ;
struct TYPE_21__ {TYPE_1__ h; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,union uni_ieall*,struct unicx*) ;

__attribute__((used)) static void
FUNC_1(struct uni_release *VAR_9, struct unicx *VAR_10)
{
 u_int VAR_11;

 for(VAR_11 = 0; VAR_11 < 2; VAR_11++)
  if(VAR_9->cause[VAR_11].h.present & VAR_5)
   FUNC_0(VAR_0, (union uni_ieall *)&VAR_9->cause[VAR_11], VAR_10);
 if(VAR_9->notify.h.present & VAR_5)
  FUNC_0(VAR_4, (union uni_ieall *)&VAR_9->notify, VAR_10);
 for(VAR_11 = 0; VAR_11 < VAR_8; VAR_11++)
  if(VAR_9->git[VAR_11].h.present & VAR_5)
   FUNC_0(VAR_3, (union uni_ieall *)&VAR_9->git[VAR_11], VAR_10);
 if(VAR_9->uu.h.present & VAR_5)
  FUNC_0(VAR_7, (union uni_ieall *)&VAR_9->uu, VAR_10);
 if(VAR_9->facility.h.present & VAR_5)
  FUNC_0(VAR_2, (union uni_ieall *)&VAR_9->facility, VAR_10);
 if(VAR_9->crankback.h.present & VAR_5)
  FUNC_0(VAR_1, (union uni_ieall *)&VAR_9->crankback, VAR_10);
 if(VAR_9->unrec.h.present & VAR_5)
  FUNC_0(VAR_6, (union uni_ieall *)&VAR_9->unrec, VAR_10);
}
