
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpabuf {int dummy; } ;
struct TYPE_2__ {int token; } ;
struct wpa_supplicant {TYPE_1__ beacon_rep_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct wpabuf**,int ,int ,int ,int *,int ) ;

__attribute__((used)) static int FUNC_1(struct wpa_supplicant *VAR_2,
          struct wpabuf **VAR_3)
{
 return FUNC_0(VAR_3, VAR_2->beacon_rep_data.token,
        VAR_0,
        VAR_1, ((void*)0), 0);
}
