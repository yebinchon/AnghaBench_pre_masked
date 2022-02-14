
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef union uni_ieall {int dummy; } uni_ieall ;
struct unicx {int dummy; } ;
struct TYPE_13__ {int present; } ;
struct TYPE_14__ {TYPE_5__ h; } ;
struct TYPE_11__ {int present; } ;
struct TYPE_12__ {TYPE_3__ h; } ;
struct TYPE_9__ {int present; } ;
struct TYPE_10__ {TYPE_1__ h; } ;
struct TYPE_15__ {int present; } ;
struct TYPE_16__ {TYPE_7__ h; } ;
struct uni_call_proc {TYPE_6__ unrec; TYPE_4__ notify; TYPE_2__ epref; TYPE_8__ connid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,union uni_ieall*,struct unicx*) ;

__attribute__((used)) static void
FUNC_1(struct uni_call_proc *VAR_5, struct unicx *VAR_6)
{
 if(VAR_5->connid.h.present & VAR_3)
  FUNC_0(VAR_0, (union uni_ieall *)&VAR_5->connid, VAR_6);
 if(VAR_5->epref.h.present & VAR_3)
  FUNC_0(VAR_1, (union uni_ieall *)&VAR_5->epref, VAR_6);
 if(VAR_5->notify.h.present & VAR_3)
  FUNC_0(VAR_2, (union uni_ieall *)&VAR_5->notify, VAR_6);
 if(VAR_5->unrec.h.present & VAR_3)
  FUNC_0(VAR_4, (union uni_ieall *)&VAR_5->unrec, VAR_6);
}
