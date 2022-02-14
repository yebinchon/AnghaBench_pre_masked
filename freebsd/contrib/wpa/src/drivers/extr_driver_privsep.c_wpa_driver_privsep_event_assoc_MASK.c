
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int req_ies_len; int * req_ies; } ;
union wpa_event_data {TYPE_1__ assoc_info; } ;
typedef int u8 ;
typedef enum wpa_event_type { ____Placeholder_wpa_event_type } wpa_event_type ;
typedef int data ;


 int FUNC_0 (int*,int *,int) ;
 int FUNC_1 (union wpa_event_data*,int ,int) ;
 int FUNC_2 (void*,int,union wpa_event_data*) ;

__attribute__((used)) static void FUNC_3(void *VAR_0,
        enum wpa_event_type VAR_1,
        u8 *VAR_2, size_t VAR_3)
{
 union wpa_event_data VAR_4;
 int VAR_5 = 0;
 u8 *VAR_6, *VAR_7;
 int VAR_8;

 FUNC_1(&VAR_4, 0, sizeof(VAR_4));

 VAR_6 = VAR_2;
 VAR_7 = VAR_2 + VAR_3;

 if (VAR_7 - VAR_6 < (int) sizeof(int))
  return;
 FUNC_0(&VAR_8, VAR_6, sizeof(int));
 VAR_6 += sizeof(int);
 if (VAR_8 < 0 || VAR_8 > VAR_7 - VAR_6)
  return;
 if (VAR_8) {
  VAR_4.assoc_info.req_ies = VAR_6;
  VAR_4.assoc_info.req_ies_len = VAR_8;
  VAR_6 += VAR_8;
  VAR_5 = 1;
 }

 FUNC_2(VAR_0, VAR_1, VAR_5 ? &VAR_4 : ((void*)0));
}
