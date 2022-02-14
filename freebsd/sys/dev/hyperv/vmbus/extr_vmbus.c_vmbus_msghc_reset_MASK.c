
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmbus_msghc {int mh_xact; } ;
struct hypercall_postmsg_in {size_t hc_dsize; int hc_msgtype; int hc_connid; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct hypercall_postmsg_in*,int ,int ) ;
 int FUNC_1 (char*,size_t) ;
 struct hypercall_postmsg_in* FUNC_2 (int ) ;

void
FUNC_3(struct vmbus_msghc *VAR_4, size_t VAR_5)
{
 struct hypercall_postmsg_in *VAR_6;

 if (VAR_5 > VAR_0)
  FUNC_1("invalid data size %zu", VAR_5);

 VAR_6 = FUNC_2(VAR_4->mh_xact);
 FUNC_0(VAR_6, 0, VAR_1);
 VAR_6->hc_connid = VAR_3;
 VAR_6->hc_msgtype = VAR_2;
 VAR_6->hc_dsize = VAR_5;
}
