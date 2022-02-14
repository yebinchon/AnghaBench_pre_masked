
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct vmbus_channel {int dummy; } ;
struct hn_rx_ring {scalar_t__ hn_ack_failed; int hn_ifp; } ;
struct hn_nvs_rndis_ack {int nvs_status; int nvs_type; } ;
typedef int ack ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct vmbus_channel*,int ,int ,struct hn_nvs_rndis_ack*,int,int ) ;

__attribute__((used)) static void
FUNC_4(struct hn_rx_ring *VAR_5, struct vmbus_channel *VAR_6,
    uint64_t VAR_7)
{
 struct hn_nvs_rndis_ack VAR_8;
 int VAR_9, VAR_10;

 VAR_8.nvs_type = VAR_2;
 VAR_8.nvs_status = VAR_1;

 VAR_9 = 0;
again:
 VAR_10 = FUNC_3(VAR_6, VAR_4,
     VAR_3, &VAR_8, sizeof(VAR_8), VAR_7);
 if (FUNC_1(VAR_10 == VAR_0)) {






  if (VAR_5->hn_ack_failed == 0)
   FUNC_2(VAR_5->hn_ifp, "RXBUF ack retry\n");
  VAR_5->hn_ack_failed++;
  VAR_9++;
  if (VAR_9 < 10) {
   FUNC_0(100);
   goto again;
  }

  FUNC_2(VAR_5->hn_ifp, "RXBUF ack failed\n");
 }
}
