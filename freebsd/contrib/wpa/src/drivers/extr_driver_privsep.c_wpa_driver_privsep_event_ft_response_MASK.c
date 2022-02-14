
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t ies_len; int * ies; int * target_ap; int ft_action; } ;
union wpa_event_data {TYPE_1__ ft_ies; } ;
typedef int u8 ;
typedef int data ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (union wpa_event_data*,int ,int) ;
 int FUNC_2 (void*,int ,union wpa_event_data*) ;

__attribute__((used)) static void FUNC_3(void *VAR_2, u8 *VAR_3,
       size_t VAR_4)
{
 union wpa_event_data VAR_5;

 if (VAR_4 < sizeof(int) + VAR_0)
  return;

 FUNC_1(&VAR_5, 0, sizeof(VAR_5));
 FUNC_0(&VAR_5.ft_ies.ft_action, VAR_3, sizeof(int));
 FUNC_0(VAR_5.ft_ies.target_ap, VAR_3 + sizeof(int), VAR_0);
 VAR_5.ft_ies.ies = VAR_3 + sizeof(int) + VAR_0;
 VAR_5.ft_ies.ies_len = VAR_4 - sizeof(int) - VAR_0;
 FUNC_2(VAR_2, VAR_1, &VAR_5);
}
