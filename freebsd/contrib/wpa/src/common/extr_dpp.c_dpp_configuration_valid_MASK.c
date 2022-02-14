
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dpp_configuration {scalar_t__ ssid_len; int passphrase; int akm; int psk_set; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;

int FUNC_2(const struct dpp_configuration *VAR_0)
{
 if (VAR_0->ssid_len == 0)
  return 0;
 if (FUNC_0(VAR_0->akm) && !VAR_0->passphrase && !VAR_0->psk_set)
  return 0;
 if (FUNC_1(VAR_0->akm) && !VAR_0->passphrase)
  return 0;
 return 1;
}
