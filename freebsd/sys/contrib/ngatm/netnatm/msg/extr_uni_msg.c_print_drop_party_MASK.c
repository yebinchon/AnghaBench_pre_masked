
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_12__ ;
typedef struct TYPE_14__ TYPE_11__ ;
typedef struct TYPE_13__ TYPE_10__ ;


typedef union uni_ieall {int dummy; } uni_ieall ;
typedef size_t u_int ;
struct unicx {int dummy; } ;
struct TYPE_14__ {int present; } ;
struct TYPE_15__ {TYPE_11__ h; } ;
struct TYPE_22__ {int present; } ;
struct TYPE_23__ {TYPE_7__ h; } ;
struct TYPE_20__ {int present; } ;
struct TYPE_21__ {TYPE_5__ h; } ;
struct TYPE_18__ {int present; } ;
struct TYPE_19__ {TYPE_3__ h; } ;
struct TYPE_16__ {int present; } ;
struct TYPE_17__ {TYPE_1__ h; } ;
struct uni_drop_party {TYPE_12__ unrec; TYPE_10__* git; TYPE_8__ uu; TYPE_6__ notify; TYPE_4__ epref; TYPE_2__ cause; } ;
struct TYPE_24__ {int present; } ;
struct TYPE_13__ {TYPE_9__ h; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int FUNC_0 (int ,union uni_ieall*,struct unicx*) ;

__attribute__((used)) static void
FUNC_1(struct uni_drop_party *VAR_8, struct unicx *VAR_9)
{
 u_int VAR_10;

 if(VAR_8->cause.h.present & VAR_4)
  FUNC_0(VAR_0, (union uni_ieall *)&VAR_8->cause, VAR_9);
 if(VAR_8->epref.h.present & VAR_4)
  FUNC_0(VAR_1, (union uni_ieall *)&VAR_8->epref, VAR_9);
 if(VAR_8->notify.h.present & VAR_4)
  FUNC_0(VAR_3, (union uni_ieall *)&VAR_8->notify, VAR_9);
 if(VAR_8->uu.h.present & VAR_4)
  FUNC_0(VAR_6, (union uni_ieall *)&VAR_8->uu, VAR_9);
 for(VAR_10 = 0; VAR_10 < VAR_7; VAR_10++)
  if(VAR_8->git[VAR_10].h.present & VAR_4)
   FUNC_0(VAR_2, (union uni_ieall *)&VAR_8->git[VAR_10], VAR_9);
 if(VAR_8->unrec.h.present & VAR_4)
  FUNC_0(VAR_5, (union uni_ieall *)&VAR_8->unrec, VAR_9);
}
