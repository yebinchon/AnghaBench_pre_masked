
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef union uni_ieall {int dummy; } uni_ieall ;
struct unicx {int dummy; } ;
struct TYPE_20__ {int present; } ;
struct TYPE_11__ {TYPE_9__ h; } ;
struct TYPE_18__ {int present; } ;
struct TYPE_19__ {TYPE_7__ h; } ;
struct TYPE_16__ {int present; } ;
struct TYPE_17__ {TYPE_5__ h; } ;
struct TYPE_14__ {int present; } ;
struct TYPE_15__ {TYPE_3__ h; } ;
struct TYPE_12__ {int present; } ;
struct TYPE_13__ {TYPE_1__ h; } ;
struct uni_status {TYPE_10__ unrec; TYPE_8__ epstate; TYPE_6__ epref; TYPE_4__ cause; TYPE_2__ callstate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,union uni_ieall*,struct unicx*) ;

__attribute__((used)) static void
FUNC_1(struct uni_status *VAR_6, struct unicx *VAR_7)
{
 if(VAR_6->callstate.h.present & VAR_4)
  FUNC_0(VAR_0, (union uni_ieall *)&VAR_6->callstate, VAR_7);
 if(VAR_6->cause.h.present & VAR_4)
  FUNC_0(VAR_1, (union uni_ieall *)&VAR_6->cause, VAR_7);
 if(VAR_6->epref.h.present & VAR_4)
  FUNC_0(VAR_2, (union uni_ieall *)&VAR_6->epref, VAR_7);
 if(VAR_6->epstate.h.present & VAR_4)
  FUNC_0(VAR_3, (union uni_ieall *)&VAR_6->epstate, VAR_7);
 if(VAR_6->unrec.h.present & VAR_4)
  FUNC_0(VAR_5, (union uni_ieall *)&VAR_6->unrec, VAR_7);
}
