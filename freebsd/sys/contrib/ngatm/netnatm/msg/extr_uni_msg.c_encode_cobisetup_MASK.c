
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
typedef int u_int ;
struct unicx {int dummy; } ;
struct uni_msg {int* b_buf; int b_wptr; int b_rptr; } ;
struct TYPE_14__ {int present; } ;
struct TYPE_15__ {TYPE_11__ h; } ;
struct TYPE_24__ {int present; } ;
struct TYPE_13__ {TYPE_9__ h; } ;
struct TYPE_22__ {int present; } ;
struct TYPE_23__ {TYPE_7__ h; } ;
struct TYPE_20__ {int present; } ;
struct TYPE_21__ {TYPE_5__ h; } ;
struct TYPE_18__ {int present; } ;
struct TYPE_19__ {TYPE_3__ h; } ;
struct TYPE_16__ {int present; } ;
struct TYPE_17__ {TYPE_1__ h; } ;
struct uni_cobisetup {TYPE_12__ unrec; TYPE_10__ notify; TYPE_8__ calling; TYPE_6__ calledsub; TYPE_4__ called; TYPE_2__ facility; int hdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int,struct uni_msg*,union uni_ieall*,struct unicx*) ;
 scalar_t__ FUNC_1 (struct uni_msg*,int *,int ,struct unicx*,int*) ;

__attribute__((used)) static int
FUNC_2(struct uni_msg *VAR_8, struct uni_cobisetup *VAR_9, struct unicx *VAR_10)
{
 u_int VAR_11;

 if(FUNC_1(VAR_8, &VAR_9->hdr, VAR_0, VAR_10, &VAR_11))
  return (-2);

 if((VAR_9->facility.h.present & VAR_6) &&
    FUNC_0(VAR_4, VAR_8, (union uni_ieall *)&VAR_9->facility, VAR_10))
  return (VAR_4);
 if((VAR_9->called.h.present & VAR_6) &&
    FUNC_0(VAR_1, VAR_8, (union uni_ieall *)&VAR_9->called, VAR_10))
  return (VAR_1);
 if((VAR_9->calledsub.h.present & VAR_6) &&
    FUNC_0(VAR_2, VAR_8, (union uni_ieall *)&VAR_9->calledsub, VAR_10))
  return (VAR_2);
 if((VAR_9->calling.h.present & VAR_6) &&
    FUNC_0(VAR_3, VAR_8, (union uni_ieall *)&VAR_9->calling, VAR_10))
  return (VAR_3);
 if((VAR_9->notify.h.present & VAR_6) &&
    FUNC_0(VAR_5, VAR_8, (union uni_ieall *)&VAR_9->notify, VAR_10))
  return (VAR_5);
 if((VAR_9->unrec.h.present & VAR_6) &&
    FUNC_0(VAR_7, VAR_8, (union uni_ieall *)&VAR_9->unrec, VAR_10))
  return (VAR_7);

 VAR_8->b_buf[VAR_11+0] = ((VAR_8->b_wptr-VAR_8->b_rptr)-VAR_11-2) >> 8;
 VAR_8->b_buf[VAR_11+1] = ((VAR_8->b_wptr-VAR_8->b_rptr)-VAR_11-2) >> 0;

 return (0);
}
