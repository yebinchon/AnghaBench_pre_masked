
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tfrc_rx_hist_entry {int dummy; } ;
struct tfrc_rx_hist {size_t loss_start; struct tfrc_rx_hist_entry** ring; } ;



__attribute__((used)) static inline struct tfrc_rx_hist_entry *
   FUNC_0(const struct tfrc_rx_hist *VAR_0)
{
 return VAR_0->ring[VAR_0->loss_start];
}
