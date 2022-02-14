
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
typedef int u_int ;
struct unicx {int dummy; } ;
struct uni_msg {int* b_buf; int b_wptr; int b_rptr; } ;
struct TYPE_15__ {int present; } ;
struct TYPE_16__ {TYPE_7__ h; } ;
struct TYPE_13__ {int present; } ;
struct TYPE_14__ {TYPE_5__ h; } ;
struct TYPE_11__ {int present; } ;
struct TYPE_12__ {TYPE_3__ h; } ;
struct TYPE_9__ {int present; } ;
struct TYPE_10__ {TYPE_1__ h; } ;
struct uni_call_proc {TYPE_8__ unrec; TYPE_6__ notify; TYPE_4__ epref; TYPE_2__ connid; int hdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int,struct uni_msg*,union uni_ieall*,struct unicx*) ;
 scalar_t__ FUNC_1 (struct uni_msg*,int *,int ,struct unicx*,int*) ;

__attribute__((used)) static int
FUNC_2(struct uni_msg *VAR_6, struct uni_call_proc *VAR_7, struct unicx *VAR_8)
{
 u_int VAR_9;

 if(FUNC_1(VAR_6, &VAR_7->hdr, VAR_0, VAR_8, &VAR_9))
  return (-2);

 if((VAR_7->connid.h.present & VAR_4) &&
    FUNC_0(VAR_1, VAR_6, (union uni_ieall *)&VAR_7->connid, VAR_8))
  return (VAR_1);
 if((VAR_7->epref.h.present & VAR_4) &&
    FUNC_0(VAR_2, VAR_6, (union uni_ieall *)&VAR_7->epref, VAR_8))
  return (VAR_2);
 if((VAR_7->notify.h.present & VAR_4) &&
    FUNC_0(VAR_3, VAR_6, (union uni_ieall *)&VAR_7->notify, VAR_8))
  return (VAR_3);
 if((VAR_7->unrec.h.present & VAR_4) &&
    FUNC_0(VAR_5, VAR_6, (union uni_ieall *)&VAR_7->unrec, VAR_8))
  return (VAR_5);

 VAR_6->b_buf[VAR_9+0] = ((VAR_6->b_wptr-VAR_6->b_rptr)-VAR_9-2) >> 8;
 VAR_6->b_buf[VAR_9+1] = ((VAR_6->b_wptr-VAR_6->b_rptr)-VAR_9-2) >> 0;

 return (0);
}
