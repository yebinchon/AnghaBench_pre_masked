
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wpa_supplicant {int drv_flags; TYPE_1__* conf; } ;
struct TYPE_2__ {scalar_t__ key_mgmt_offload; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct wpa_supplicant*,int ,int *,int ,int ,int *,int ,int const*,size_t) ;

__attribute__((used)) static int FUNC_1(void *VAR_2, const u8 *VAR_3,
        size_t VAR_4)
{
 struct wpa_supplicant *VAR_5 = VAR_2;

 if (VAR_5->conf->key_mgmt_offload &&
     (VAR_5->drv_flags & VAR_1))
  return FUNC_0(VAR_5, VAR_0, ((void*)0), 0, 0,
           ((void*)0), 0, VAR_3, VAR_4);
 else
  return 0;
}
