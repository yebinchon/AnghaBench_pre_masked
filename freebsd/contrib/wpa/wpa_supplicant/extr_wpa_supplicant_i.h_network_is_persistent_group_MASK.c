
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_ssid {int disabled; scalar_t__ p2p_persistent_group; } ;



__attribute__((used)) static inline int FUNC_0(struct wpa_ssid *VAR_0)
{
 return VAR_0->disabled == 2 && VAR_0->p2p_persistent_group;
}
