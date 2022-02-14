
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpa_sm {int rx_replay_counter_set; int rx_replay_counter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int const*,int ) ;
 int FUNC_1 (int ,char*) ;

void FUNC_2(struct wpa_sm *VAR_2, const u8 *VAR_3)
{
 if (VAR_3 == ((void*)0))
  return;

 FUNC_0(VAR_2->rx_replay_counter, VAR_3,
    VAR_1);
 VAR_2->rx_replay_counter_set = 1;
 FUNC_1(VAR_0, "Updated key replay counter");
}
