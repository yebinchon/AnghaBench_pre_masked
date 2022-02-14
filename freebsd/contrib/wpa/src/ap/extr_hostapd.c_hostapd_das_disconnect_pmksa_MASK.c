
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radius_das_attrs {int dummy; } ;
struct hostapd_data {int wpa_auth; } ;


 int FUNC_0 (int ,struct radius_das_attrs*) ;

__attribute__((used)) static int FUNC_1(struct hostapd_data *VAR_0,
     struct radius_das_attrs *VAR_1)
{
 if (!VAR_0->wpa_auth)
  return -1;
 return FUNC_0(VAR_0->wpa_auth, VAR_1);
}
