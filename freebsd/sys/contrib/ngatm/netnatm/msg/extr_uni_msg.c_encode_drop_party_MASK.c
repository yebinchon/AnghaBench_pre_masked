
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
struct uni_msg {size_t* b_buf; size_t b_wptr; size_t b_rptr; } ;
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
struct uni_drop_party {TYPE_12__ unrec; TYPE_10__* git; TYPE_8__ uu; TYPE_6__ notify; TYPE_4__ epref; TYPE_2__ cause; int hdr; } ;
struct TYPE_24__ {int present; } ;
struct TYPE_13__ {TYPE_9__ h; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 scalar_t__ FUNC_0 (int,struct uni_msg*,union uni_ieall*,struct unicx*) ;
 scalar_t__ FUNC_1 (struct uni_msg*,int *,int ,struct unicx*,size_t*) ;

__attribute__((used)) static int
FUNC_2(struct uni_msg *VAR_9, struct uni_drop_party *VAR_10, struct unicx *VAR_11)
{
 u_int VAR_12;
 u_int VAR_13;

 if(FUNC_1(VAR_9, &VAR_10->hdr, VAR_0, VAR_11, &VAR_12))
  return (-2);

 if((VAR_10->cause.h.present & VAR_5) &&
    FUNC_0(VAR_1, VAR_9, (union uni_ieall *)&VAR_10->cause, VAR_11))
  return (VAR_1);
 if((VAR_10->epref.h.present & VAR_5) &&
    FUNC_0(VAR_2, VAR_9, (union uni_ieall *)&VAR_10->epref, VAR_11))
  return (VAR_2);
 if((VAR_10->notify.h.present & VAR_5) &&
    FUNC_0(VAR_4, VAR_9, (union uni_ieall *)&VAR_10->notify, VAR_11))
  return (VAR_4);
 if((VAR_10->uu.h.present & VAR_5) &&
    FUNC_0(VAR_7, VAR_9, (union uni_ieall *)&VAR_10->uu, VAR_11))
  return (VAR_7);
 for(VAR_13 = 0; VAR_13 < VAR_8; VAR_13++)
  if((VAR_10->git[VAR_13].h.present & VAR_5) &&
     FUNC_0(VAR_3, VAR_9, (union uni_ieall *)&VAR_10->git[VAR_13], VAR_11))
  return ((VAR_13 << 16) + VAR_3);
 if((VAR_10->unrec.h.present & VAR_5) &&
    FUNC_0(VAR_6, VAR_9, (union uni_ieall *)&VAR_10->unrec, VAR_11))
  return (VAR_6);

 VAR_9->b_buf[VAR_12+0] = ((VAR_9->b_wptr-VAR_9->b_rptr)-VAR_12-2) >> 8;
 VAR_9->b_buf[VAR_12+1] = ((VAR_9->b_wptr-VAR_9->b_rptr)-VAR_12-2) >> 0;

 return (0);
}
