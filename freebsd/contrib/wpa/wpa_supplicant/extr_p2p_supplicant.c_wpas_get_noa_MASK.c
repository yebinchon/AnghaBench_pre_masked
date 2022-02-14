
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wpa_supplicant {int own_addr; struct wpa_supplicant* next; TYPE_1__* global; } ;
struct TYPE_2__ {struct wpa_supplicant* ifaces; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int const*,int ) ;
 int FUNC_1 (struct wpa_supplicant*,int *,size_t) ;

__attribute__((used)) static int FUNC_2(void *VAR_1, const u8 *VAR_2, u8 *VAR_3,
   size_t VAR_4)
{
 struct wpa_supplicant *VAR_5 = VAR_1;

 for (VAR_5 = VAR_5->global->ifaces; VAR_5; VAR_5 = VAR_5->next) {
  if (FUNC_0(VAR_5->own_addr, VAR_2, VAR_0) == 0)
   break;
 }
 if (VAR_5 == ((void*)0))
  return -1;

 return FUNC_1(VAR_5, VAR_3, VAR_4);
}
