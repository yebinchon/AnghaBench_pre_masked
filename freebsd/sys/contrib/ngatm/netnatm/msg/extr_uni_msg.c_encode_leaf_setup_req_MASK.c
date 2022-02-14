
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_32__ TYPE_9__ ;
typedef struct TYPE_31__ TYPE_8__ ;
typedef struct TYPE_30__ TYPE_7__ ;
typedef struct TYPE_29__ TYPE_6__ ;
typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;
typedef struct TYPE_23__ TYPE_16__ ;
typedef struct TYPE_22__ TYPE_15__ ;
typedef struct TYPE_21__ TYPE_14__ ;
typedef struct TYPE_20__ TYPE_13__ ;
typedef struct TYPE_19__ TYPE_12__ ;
typedef struct TYPE_18__ TYPE_11__ ;
typedef struct TYPE_17__ TYPE_10__ ;


typedef union uni_ieall {int dummy; } uni_ieall ;
typedef size_t u_int ;
struct unicx {int dummy; } ;
struct uni_msg {size_t* b_buf; size_t b_wptr; size_t b_rptr; } ;
struct TYPE_22__ {int present; } ;
struct TYPE_23__ {TYPE_15__ h; } ;
struct TYPE_20__ {int present; } ;
struct TYPE_21__ {TYPE_13__ h; } ;
struct TYPE_18__ {int present; } ;
struct TYPE_19__ {TYPE_11__ h; } ;
struct TYPE_30__ {int present; } ;
struct TYPE_31__ {TYPE_7__ h; } ;
struct TYPE_26__ {int present; } ;
struct TYPE_27__ {TYPE_3__ h; } ;
struct uni_leaf_setup_req {TYPE_16__ unrec; TYPE_14__ lij_seqno; TYPE_12__ lij_callid; TYPE_10__* calledsub; TYPE_8__ called; TYPE_6__* callingsub; TYPE_4__ calling; TYPE_2__* tns; int hdr; } ;
struct TYPE_32__ {int present; } ;
struct TYPE_28__ {int present; } ;
struct TYPE_29__ {TYPE_5__ h; } ;
struct TYPE_24__ {int present; } ;
struct TYPE_25__ {TYPE_1__ h; } ;
struct TYPE_17__ {TYPE_9__ h; } ;


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
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 scalar_t__ FUNC_0 (int,struct uni_msg*,union uni_ieall*,struct unicx*) ;
 scalar_t__ FUNC_1 (struct uni_msg*,int *,int ,struct unicx*,size_t*) ;

__attribute__((used)) static int
FUNC_2(struct uni_msg *VAR_13, struct uni_leaf_setup_req *VAR_14, struct unicx *VAR_15)
{
 u_int VAR_16;
 u_int VAR_17;

 if(FUNC_1(VAR_13, &VAR_14->hdr, VAR_9, VAR_15, &VAR_16))
  return (-2);

 for(VAR_17 = 0; VAR_17 < VAR_12; VAR_17++)
  if((VAR_14->tns[VAR_17].h.present & VAR_6) &&
     FUNC_0(VAR_7, VAR_13, (union uni_ieall *)&VAR_14->tns[VAR_17], VAR_15))
  return ((VAR_17 << 16) + VAR_7);
 if((VAR_14->calling.h.present & VAR_6) &&
    FUNC_0(VAR_2, VAR_13, (union uni_ieall *)&VAR_14->calling, VAR_15))
  return (VAR_2);
 for(VAR_17 = 0; VAR_17 < VAR_11; VAR_17++)
  if((VAR_14->callingsub[VAR_17].h.present & VAR_6) &&
     FUNC_0(VAR_3, VAR_13, (union uni_ieall *)&VAR_14->callingsub[VAR_17], VAR_15))
  return ((VAR_17 << 16) + VAR_3);
 if((VAR_14->called.h.present & VAR_6) &&
    FUNC_0(VAR_0, VAR_13, (union uni_ieall *)&VAR_14->called, VAR_15))
  return (VAR_0);
 for(VAR_17 = 0; VAR_17 < VAR_10; VAR_17++)
  if((VAR_14->calledsub[VAR_17].h.present & VAR_6) &&
     FUNC_0(VAR_1, VAR_13, (union uni_ieall *)&VAR_14->calledsub[VAR_17], VAR_15))
  return ((VAR_17 << 16) + VAR_1);
 if((VAR_14->lij_callid.h.present & VAR_6) &&
    FUNC_0(VAR_4, VAR_13, (union uni_ieall *)&VAR_14->lij_callid, VAR_15))
  return (VAR_4);
 if((VAR_14->lij_seqno.h.present & VAR_6) &&
    FUNC_0(VAR_5, VAR_13, (union uni_ieall *)&VAR_14->lij_seqno, VAR_15))
  return (VAR_5);
 if((VAR_14->unrec.h.present & VAR_6) &&
    FUNC_0(VAR_8, VAR_13, (union uni_ieall *)&VAR_14->unrec, VAR_15))
  return (VAR_8);

 VAR_13->b_buf[VAR_16+0] = ((VAR_13->b_wptr-VAR_13->b_rptr)-VAR_16-2) >> 8;
 VAR_13->b_buf[VAR_16+1] = ((VAR_13->b_wptr-VAR_13->b_rptr)-VAR_16-2) >> 0;

 return (0);
}
