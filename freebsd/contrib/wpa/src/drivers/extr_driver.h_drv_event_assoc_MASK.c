
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int reassoc; size_t req_ies_len; int const* addr; int const* req_ies; } ;
union wpa_event_data {TYPE_1__ assoc_info; } ;
typedef int u8 ;
typedef int event ;


 int VAR_0 ;
 int FUNC_0 (union wpa_event_data*,int ,int) ;
 int FUNC_1 (void*,int ,union wpa_event_data*) ;

__attribute__((used)) static inline void FUNC_2(void *VAR_1, const u8 *VAR_2, const u8 *VAR_3,
       size_t VAR_4, int VAR_5)
{
 union wpa_event_data VAR_6;
 FUNC_0(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.assoc_info.reassoc = VAR_5;
 VAR_6.assoc_info.req_ies = VAR_3;
 VAR_6.assoc_info.req_ies_len = VAR_4;
 VAR_6.assoc_info.addr = VAR_2;
 FUNC_1(VAR_1, VAR_0, &VAR_6);
}
