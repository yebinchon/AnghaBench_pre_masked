
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int const* addr; } ;
union wpa_event_data {TYPE_1__ disassoc_info; } ;
typedef int u8 ;
typedef int event ;


 int VAR_0 ;
 int FUNC_0 (union wpa_event_data*,int ,int) ;
 int FUNC_1 (void*,int ,union wpa_event_data*) ;

__attribute__((used)) static inline void FUNC_2(void *VAR_1, const u8 *VAR_2)
{
 union wpa_event_data VAR_3;
 FUNC_0(&VAR_3, 0, sizeof(VAR_3));
 VAR_3.disassoc_info.addr = VAR_2;
 FUNC_1(VAR_1, VAR_0, &VAR_3);
}
