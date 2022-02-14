
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpa_supplicant {int dummy; } ;
typedef int reject_attr ;
typedef enum mbo_transition_reject_reason { ____Placeholder_mbo_transition_reject_reason } mbo_transition_reject_reason ;


 int VAR_0 ;
 size_t FUNC_0 (int*,size_t,int*,int) ;

size_t FUNC_1(struct wpa_supplicant *VAR_1, u8 *VAR_2,
        size_t VAR_3,
        enum mbo_transition_reject_reason VAR_4)
{
 u8 VAR_5[3];

 VAR_5[0] = VAR_0;
 VAR_5[1] = 1;
 VAR_5[2] = VAR_4;

 return FUNC_0(VAR_2, VAR_3, VAR_5, sizeof(VAR_5));
}
