
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct wpa_supplicant {TYPE_1__* global; } ;
struct TYPE_2__ {int p2p; } ;


 int FUNC_0 (int ,int,int ,char const*,int ,int ,char const*,int const*) ;
 int FUNC_1 (struct wpa_supplicant*) ;

int FUNC_2(struct wpa_supplicant *VAR_0,
        int VAR_1, u32 VAR_2,
        const char *VAR_3, u8 VAR_4,
        u16 VAR_5, const char *VAR_6,
        const u8 *VAR_7)
{
 int VAR_8;

 VAR_8 = FUNC_0(VAR_0->global->p2p, VAR_1, VAR_2,
      VAR_3, VAR_4, VAR_5,
      VAR_6, VAR_7);
 if (VAR_8 == 0)
  FUNC_1(VAR_0);
 return VAR_8;
}
