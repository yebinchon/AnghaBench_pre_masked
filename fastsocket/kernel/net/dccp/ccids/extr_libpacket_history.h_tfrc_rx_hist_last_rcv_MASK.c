
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tfrc_rx_hist_entry {int dummy; } ;
struct tfrc_rx_hist {int loss_count; struct tfrc_rx_hist_entry** ring; } ;


 size_t FUNC_0 (struct tfrc_rx_hist const*,int ) ;

__attribute__((used)) static inline struct tfrc_rx_hist_entry *
   FUNC_1(const struct tfrc_rx_hist *VAR_0)
{
 return VAR_0->ring[FUNC_0(VAR_0, VAR_0->loss_count)];
}
