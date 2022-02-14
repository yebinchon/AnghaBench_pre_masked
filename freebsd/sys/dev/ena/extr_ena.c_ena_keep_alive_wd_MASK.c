
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct ena_admin_aenq_keep_alive_desc {int rx_drops_low; scalar_t__ rx_drops_high; } ;
struct ena_admin_aenq_entry {int dummy; } ;
struct TYPE_2__ {int rx_drops; } ;
struct ena_adapter {int keep_alive_timestamp; TYPE_1__ hw_stats; } ;
typedef int sbintime_t ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4(void *VAR_0,
    struct ena_admin_aenq_entry *VAR_1)
{
 struct ena_adapter *VAR_2 = (struct ena_adapter *)VAR_0;
 struct ena_admin_aenq_keep_alive_desc *VAR_3;
 sbintime_t VAR_4;
 uint64_t VAR_5;

 VAR_3 = (struct ena_admin_aenq_keep_alive_desc *)VAR_1;

 VAR_5 = ((uint64_t)VAR_3->rx_drops_high << 32) | VAR_3->rx_drops_low;
 FUNC_2(VAR_2->hw_stats.rx_drops);
 FUNC_1(VAR_2->hw_stats.rx_drops, VAR_5);

 VAR_4 = FUNC_3();
 FUNC_0(&VAR_2->keep_alive_timestamp, VAR_4);
}
