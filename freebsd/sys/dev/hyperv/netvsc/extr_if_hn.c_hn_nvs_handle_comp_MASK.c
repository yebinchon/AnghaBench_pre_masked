
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmbus_chanpkt_hdr {scalar_t__ cph_xactid; } ;
struct vmbus_channel {int dummy; } ;
struct hn_softc {int dummy; } ;
struct hn_nvs_sendctx {int (* hn_cb ) (struct hn_nvs_sendctx*,struct hn_softc*,struct vmbus_channel*,int ,int ) ;} ;


 int FUNC_0 (struct vmbus_chanpkt_hdr const*) ;
 int FUNC_1 (struct vmbus_chanpkt_hdr const*) ;
 int FUNC_2 (struct hn_nvs_sendctx*,struct hn_softc*,struct vmbus_channel*,int ,int ) ;

__attribute__((used)) static void
FUNC_3(struct hn_softc *VAR_0, struct vmbus_channel *VAR_1,
    const struct vmbus_chanpkt_hdr *VAR_2)
{
 struct hn_nvs_sendctx *VAR_3;

 VAR_3 = (struct hn_nvs_sendctx *)(uintptr_t)VAR_2->cph_xactid;
 VAR_3->hn_cb(VAR_3, VAR_0, VAR_1, FUNC_0(VAR_2),
     FUNC_1(VAR_2));





}
