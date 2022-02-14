
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {int dummy; } ;
struct p2p_channels {int dummy; } ;


 scalar_t__ FUNC_0 (struct p2p_channels const*,unsigned int) ;
 scalar_t__ FUNC_1 (struct wpa_supplicant*,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct wpa_supplicant *VAR_0,
    const struct p2p_channels *VAR_1,
    unsigned int VAR_2)
{
 if ((VAR_1 == ((void*)0) || FUNC_0(VAR_1, VAR_2)) &&
     FUNC_1(VAR_0, VAR_2))
  return 1;
 return 0;
}
