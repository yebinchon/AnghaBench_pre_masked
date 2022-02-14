
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int unicast; } ;
union wpa_event_data {TYPE_1__ michael_mic_failure; } ;
typedef int u8 ;
typedef int data ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (union wpa_event_data*,int ,int) ;
 int FUNC_2 (void*,int ,union wpa_event_data*) ;

__attribute__((used)) static void FUNC_3(
 void *VAR_1, u8 *VAR_2, size_t VAR_3)
{
 union wpa_event_data VAR_4;

 if (VAR_3 != sizeof(int))
  return;

 FUNC_1(&VAR_4, 0, sizeof(VAR_4));
 FUNC_0(&VAR_4.michael_mic_failure.unicast, VAR_2, sizeof(int));
 FUNC_2(VAR_1, VAR_0, &VAR_4);
}
