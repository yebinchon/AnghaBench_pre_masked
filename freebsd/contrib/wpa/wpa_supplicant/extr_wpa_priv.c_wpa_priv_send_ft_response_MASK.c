
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ies_len; int * ies; int * target_ap; int ft_action; } ;
union wpa_event_data {TYPE_1__ ft_ies; } ;
typedef int u8 ;
struct wpa_priv_interface {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (size_t) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (struct wpa_priv_interface*,int ,int *,size_t) ;

__attribute__((used)) static void FUNC_4(struct wpa_priv_interface *VAR_2,
          union wpa_event_data *VAR_3)
{
 size_t VAR_4;
 u8 *VAR_5, *VAR_6;

 if (VAR_3 == ((void*)0) || VAR_3->ft_ies.ies == ((void*)0))
  return;

 VAR_4 = sizeof(int) + VAR_0 + VAR_3->ft_ies.ies_len;
 VAR_5 = FUNC_1(VAR_4);
 if (VAR_5 == ((void*)0))
  return;

 VAR_6 = VAR_5;
 FUNC_2(VAR_6, &VAR_3->ft_ies.ft_action, sizeof(int));
 VAR_6 += sizeof(int);
 FUNC_2(VAR_6, VAR_3->ft_ies.target_ap, VAR_0);
 VAR_6 += VAR_0;
 FUNC_2(VAR_6, VAR_3->ft_ies.ies, VAR_3->ft_ies.ies_len);

 FUNC_3(VAR_2, VAR_1, VAR_5, VAR_4);

 FUNC_0(VAR_5);

}
