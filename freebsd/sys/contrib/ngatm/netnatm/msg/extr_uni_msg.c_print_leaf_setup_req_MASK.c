
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
struct uni_leaf_setup_req {TYPE_16__ unrec; TYPE_14__ lij_seqno; TYPE_12__ lij_callid; TYPE_10__* calledsub; TYPE_8__ called; TYPE_6__* callingsub; TYPE_4__ calling; TYPE_2__* tns; } ;
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
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 int FUNC_0 (int ,union uni_ieall*,struct unicx*) ;

__attribute__((used)) static void
FUNC_1(struct uni_leaf_setup_req *VAR_12, struct unicx *VAR_13)
{
 u_int VAR_14;

 for(VAR_14 = 0; VAR_14 < VAR_11; VAR_14++)
  if(VAR_12->tns[VAR_14].h.present & VAR_6)
   FUNC_0(VAR_7, (union uni_ieall *)&VAR_12->tns[VAR_14], VAR_13);
 if(VAR_12->calling.h.present & VAR_6)
  FUNC_0(VAR_2, (union uni_ieall *)&VAR_12->calling, VAR_13);
 for(VAR_14 = 0; VAR_14 < VAR_10; VAR_14++)
  if(VAR_12->callingsub[VAR_14].h.present & VAR_6)
   FUNC_0(VAR_3, (union uni_ieall *)&VAR_12->callingsub[VAR_14], VAR_13);
 if(VAR_12->called.h.present & VAR_6)
  FUNC_0(VAR_0, (union uni_ieall *)&VAR_12->called, VAR_13);
 for(VAR_14 = 0; VAR_14 < VAR_9; VAR_14++)
  if(VAR_12->calledsub[VAR_14].h.present & VAR_6)
   FUNC_0(VAR_1, (union uni_ieall *)&VAR_12->calledsub[VAR_14], VAR_13);
 if(VAR_12->lij_callid.h.present & VAR_6)
  FUNC_0(VAR_4, (union uni_ieall *)&VAR_12->lij_callid, VAR_13);
 if(VAR_12->lij_seqno.h.present & VAR_6)
  FUNC_0(VAR_5, (union uni_ieall *)&VAR_12->lij_seqno, VAR_13);
 if(VAR_12->unrec.h.present & VAR_6)
  FUNC_0(VAR_8, (union uni_ieall *)&VAR_12->unrec, VAR_13);
}
