
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ievent; char* ifname; } ;
union wpa_event_data {TYPE_1__ interface_status; } ;
typedef int u8 ;
struct wpa_priv_interface {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int) ;
 int FUNC_2 (int *,...) ;
 int FUNC_3 (struct wpa_priv_interface*,int ,int *,int) ;

__attribute__((used)) static void FUNC_4(struct wpa_priv_interface *VAR_1,
        union wpa_event_data *VAR_2)
{
 int VAR_3;
 size_t VAR_4, VAR_5;
 u8 *VAR_6;
 char *VAR_7;

 if (VAR_2 == ((void*)0))
  return;

 VAR_3 = VAR_2->interface_status.ievent;
 VAR_5 = sizeof(VAR_2->interface_status.ifname);
 VAR_7 = VAR_2->interface_status.ifname;
 for (VAR_4 = 0; VAR_4 < VAR_5 && VAR_7[VAR_4]; VAR_4++)
  ;

 VAR_6 = FUNC_1(sizeof(int) + VAR_4);
 if (VAR_6 == ((void*)0))
  return;

 FUNC_2(VAR_6, &VAR_3, sizeof(int));
 FUNC_2(VAR_6 + sizeof(int), VAR_7, VAR_4);

 FUNC_3(VAR_1, VAR_0,
       VAR_6, sizeof(int) + VAR_4);

 FUNC_0(VAR_6);

}
