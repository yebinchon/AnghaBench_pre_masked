
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
typedef size_t u_int ;
struct unicx {int dummy; } ;
struct uni_msg {size_t* b_buf; size_t b_wptr; size_t b_rptr; } ;
struct TYPE_18__ {int present; } ;
struct TYPE_19__ {TYPE_13__ h; } ;
struct TYPE_16__ {int present; } ;
struct TYPE_17__ {TYPE_11__ h; } ;
struct TYPE_28__ {int present; } ;
struct TYPE_15__ {TYPE_9__ h; } ;
struct TYPE_24__ {int present; } ;
struct TYPE_25__ {TYPE_5__ h; } ;
struct TYPE_22__ {int present; } ;
struct TYPE_23__ {TYPE_3__ h; } ;
struct TYPE_20__ {int present; } ;
struct TYPE_21__ {TYPE_1__ h; } ;
struct uni_alerting {TYPE_14__ unrec; TYPE_12__ report; TYPE_10__ uu; TYPE_8__* git; TYPE_6__ notify; TYPE_4__ epref; TYPE_2__ connid; int hdr; } ;
struct TYPE_26__ {int present; } ;
struct TYPE_27__ {TYPE_7__ h; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 scalar_t__ FUNC_0 (int,struct uni_msg*,union uni_ieall*,struct unicx*) ;
 scalar_t__ FUNC_1 (struct uni_msg*,int *,int ,struct unicx*,size_t*) ;

__attribute__((used)) static int
FUNC_2(struct uni_msg *VAR_10, struct uni_alerting *VAR_11, struct unicx *VAR_12)
{
 u_int VAR_13;
 u_int VAR_14;

 if(FUNC_1(VAR_10, &VAR_11->hdr, VAR_0, VAR_12, &VAR_13))
  return (-2);

 if((VAR_11->connid.h.present & VAR_5) &&
    FUNC_0(VAR_1, VAR_10, (union uni_ieall *)&VAR_11->connid, VAR_12))
  return (VAR_1);
 if((VAR_11->epref.h.present & VAR_5) &&
    FUNC_0(VAR_2, VAR_10, (union uni_ieall *)&VAR_11->epref, VAR_12))
  return (VAR_2);
 if((VAR_11->notify.h.present & VAR_5) &&
    FUNC_0(VAR_4, VAR_10, (union uni_ieall *)&VAR_11->notify, VAR_12))
  return (VAR_4);
 for(VAR_14 = 0; VAR_14 < VAR_9; VAR_14++)
  if((VAR_11->git[VAR_14].h.present & VAR_5) &&
     FUNC_0(VAR_3, VAR_10, (union uni_ieall *)&VAR_11->git[VAR_14], VAR_12))
  return ((VAR_14 << 16) + VAR_3);
 if((VAR_11->uu.h.present & VAR_5) &&
    FUNC_0(VAR_8, VAR_10, (union uni_ieall *)&VAR_11->uu, VAR_12))
  return (VAR_8);
 if((VAR_11->report.h.present & VAR_5) &&
    FUNC_0(VAR_6, VAR_10, (union uni_ieall *)&VAR_11->report, VAR_12))
  return (VAR_6);
 if((VAR_11->unrec.h.present & VAR_5) &&
    FUNC_0(VAR_7, VAR_10, (union uni_ieall *)&VAR_11->unrec, VAR_12))
  return (VAR_7);

 VAR_10->b_buf[VAR_13+0] = ((VAR_10->b_wptr-VAR_10->b_rptr)-VAR_13-2) >> 8;
 VAR_10->b_buf[VAR_13+1] = ((VAR_10->b_wptr-VAR_10->b_rptr)-VAR_13-2) >> 0;

 return (0);
}
