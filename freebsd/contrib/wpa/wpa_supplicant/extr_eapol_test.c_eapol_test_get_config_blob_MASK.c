
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_config_blob {int dummy; } ;
struct eapol_test_data {TYPE_1__* wpa_s; } ;
struct TYPE_2__ {int conf; } ;


 struct wpa_config_blob const* FUNC_0 (int ,char const*) ;

__attribute__((used)) static const struct wpa_config_blob *
FUNC_1(void *VAR_0, const char *VAR_1)
{
 struct eapol_test_data *VAR_2 = VAR_0;
 return FUNC_0(VAR_2->wpa_s->conf, VAR_1);
}
