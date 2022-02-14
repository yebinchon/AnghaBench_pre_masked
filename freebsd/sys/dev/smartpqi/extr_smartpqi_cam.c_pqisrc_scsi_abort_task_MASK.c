
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {TYPE_1__* entries; } ;
struct TYPE_11__ {int status; TYPE_2__ sim_priv; } ;
union ccb {TYPE_3__ ccb_h; } ;
typedef size_t uint32_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_12__ {size_t tag; int status; int dvp; scalar_t__ resp_qid; } ;
typedef TYPE_4__ rcb_t ;
struct TYPE_13__ {int taglist; TYPE_4__* rcb; } ;
typedef TYPE_5__ pqisrc_softstate_t ;
struct TYPE_9__ {TYPE_4__* ptr; } ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t FUNC_1 (int *) ;
 int FUNC_2 (int *,size_t) ;
 int FUNC_3 (TYPE_5__*,int ,TYPE_4__*,size_t,int ) ;

__attribute__((used)) static int
FUNC_4(pqisrc_softstate_t *VAR_4, union ccb *VAR_5)
{
 rcb_t *VAR_6 = VAR_5->ccb_h.sim_priv.entries[0].ptr;
 uint32_t VAR_7 = VAR_6->tag;
 uint32_t VAR_8 = 0;
 int VAR_9 = VAR_1;
 uint16_t VAR_10;

    FUNC_0("IN\n");

 VAR_10 = (uint16_t)VAR_6->resp_qid;

 VAR_8 = FUNC_1(&VAR_4->taglist);
 VAR_6 = &VAR_4->rcb[VAR_8];
 VAR_6->tag = VAR_8;
 VAR_6->resp_qid = VAR_10;

 VAR_9 = FUNC_3(VAR_4, VAR_6->dvp, VAR_6, VAR_7,
  VAR_3);

 if (VAR_1 == VAR_9) {
  VAR_9 = VAR_6->status;
  if (VAR_2 == VAR_9) {
   VAR_5->ccb_h.status = VAR_0;
  }
 }
 FUNC_2(&VAR_4->taglist, VAR_7);
 FUNC_2(&VAR_4->taglist,VAR_6->tag);

 FUNC_0("OUT rval = %d\n", VAR_9);

 return VAR_9;
}
