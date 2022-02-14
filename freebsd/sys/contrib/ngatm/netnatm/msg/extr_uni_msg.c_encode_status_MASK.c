
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
typedef int u_int ;
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
struct uni_status {TYPE_10__ unrec; TYPE_8__ epstate; TYPE_6__ epref; TYPE_4__ cause; TYPE_2__ callstate; int hdr; } ;
struct uni_msg {int* b_buf; int b_wptr; int b_rptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int,struct uni_msg*,union uni_ieall*,struct unicx*) ;
 scalar_t__ FUNC_1 (struct uni_msg*,int *,int ,struct unicx*,int*) ;

__attribute__((used)) static int
FUNC_2(struct uni_msg *VAR_7, struct uni_status *VAR_8, struct unicx *VAR_9)
{
 u_int VAR_10;

 if(FUNC_1(VAR_7, &VAR_8->hdr, VAR_6, VAR_9, &VAR_10))
  return (-2);

 if((VAR_8->callstate.h.present & VAR_4) &&
    FUNC_0(VAR_0, VAR_7, (union uni_ieall *)&VAR_8->callstate, VAR_9))
  return (VAR_0);
 if((VAR_8->cause.h.present & VAR_4) &&
    FUNC_0(VAR_1, VAR_7, (union uni_ieall *)&VAR_8->cause, VAR_9))
  return (VAR_1);
 if((VAR_8->epref.h.present & VAR_4) &&
    FUNC_0(VAR_2, VAR_7, (union uni_ieall *)&VAR_8->epref, VAR_9))
  return (VAR_2);
 if((VAR_8->epstate.h.present & VAR_4) &&
    FUNC_0(VAR_3, VAR_7, (union uni_ieall *)&VAR_8->epstate, VAR_9))
  return (VAR_3);
 if((VAR_8->unrec.h.present & VAR_4) &&
    FUNC_0(VAR_5, VAR_7, (union uni_ieall *)&VAR_8->unrec, VAR_9))
  return (VAR_5);

 VAR_7->b_buf[VAR_10+0] = ((VAR_7->b_wptr-VAR_7->b_rptr)-VAR_10-2) >> 8;
 VAR_7->b_buf[VAR_10+1] = ((VAR_7->b_wptr-VAR_7->b_rptr)-VAR_10-2) >> 0;

 return (0);
}
