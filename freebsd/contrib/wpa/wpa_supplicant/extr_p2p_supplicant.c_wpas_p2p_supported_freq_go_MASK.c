
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_supplicant {TYPE_1__* global; } ;
struct p2p_channels {int dummy; } ;
struct TYPE_2__ {int p2p; } ;


 scalar_t__ FUNC_0 (struct wpa_supplicant*,struct p2p_channels const*,int) ;
 scalar_t__ FUNC_1 (int ,int) ;
 int FUNC_2 (TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_3(struct wpa_supplicant *VAR_0,
          const struct p2p_channels *VAR_1,
          int VAR_2)
{
 if (!FUNC_2(VAR_0->global, VAR_2) &&
     FUNC_1(VAR_0->global->p2p, VAR_2) &&
     FUNC_0(VAR_0, VAR_1, VAR_2))
  return 1;
 return 0;
}
