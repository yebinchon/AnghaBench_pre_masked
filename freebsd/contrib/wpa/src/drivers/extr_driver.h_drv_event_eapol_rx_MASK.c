
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t data_len; int const* data; int const* src; } ;
union wpa_event_data {TYPE_1__ eapol_rx; } ;
typedef int u8 ;
typedef int event ;


 int VAR_0 ;
 int FUNC_0 (union wpa_event_data*,int ,int) ;
 int FUNC_1 (void*,int ,union wpa_event_data*) ;

__attribute__((used)) static inline void FUNC_2(void *VAR_1, const u8 *VAR_2, const u8 *VAR_3,
          size_t VAR_4)
{
 union wpa_event_data VAR_5;
 FUNC_0(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.eapol_rx.src = VAR_2;
 VAR_5.eapol_rx.data = VAR_3;
 VAR_5.eapol_rx.data_len = VAR_4;
 FUNC_1(VAR_1, VAR_0, &VAR_5);
}
