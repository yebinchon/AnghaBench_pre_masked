
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union wpa_event_data {int pmkid_candidate; } ;
typedef int u8 ;
struct pmkid_candidate {int dummy; } ;
typedef int data ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,size_t) ;
 int FUNC_1 (union wpa_event_data*,int ,int) ;
 int FUNC_2 (void*,int ,union wpa_event_data*) ;

__attribute__((used)) static void FUNC_3(void *VAR_1, u8 *VAR_2,
           size_t VAR_3)
{
 union wpa_event_data VAR_4;

 if (VAR_3 != sizeof(struct pmkid_candidate))
  return;

 FUNC_1(&VAR_4, 0, sizeof(VAR_4));
 FUNC_0(&VAR_4.pmkid_candidate, VAR_2, VAR_3);
 FUNC_2(VAR_1, VAR_0, &VAR_4);
}
