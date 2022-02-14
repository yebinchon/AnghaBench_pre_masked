
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_10__ {int pending_mutex; } ;
typedef TYPE_3__ hv_vss_sc ;
struct TYPE_8__ {int msgid; } ;
struct TYPE_9__ {TYPE_1__ opt_msg; } ;
struct TYPE_11__ {TYPE_2__ vss_req; TYPE_3__* sc; } ;
typedef TYPE_4__ hv_vss_req_internal ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 TYPE_4__* FUNC_1 (TYPE_3__*,int ) ;
 int FUNC_2 (TYPE_4__*,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(void *VAR_1)
{
 hv_vss_req_internal *VAR_2 = VAR_1;
 hv_vss_req_internal *VAR_3;
 hv_vss_sc* VAR_4 = VAR_2->sc;
 uint64_t VAR_5 = VAR_2->vss_req.opt_msg.msgid;

 FUNC_0(FUNC_3(&VAR_4->pending_mutex), ("mutex lock is not owned!"));
 VAR_3 = FUNC_1(VAR_4, VAR_5);
 FUNC_0(VAR_3 != ((void*)0), ("timeout but fail to find request"));
 FUNC_2(VAR_2, VAR_0);
}
