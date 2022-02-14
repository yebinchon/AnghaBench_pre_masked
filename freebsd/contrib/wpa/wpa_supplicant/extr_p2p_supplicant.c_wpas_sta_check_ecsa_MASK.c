
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sta_info {int ecsa_supported; } ;
struct hostapd_data {int dummy; } ;



__attribute__((used)) static int FUNC_0(struct hostapd_data *VAR_0,
          struct sta_info *VAR_1, void *VAR_2)
{
 int *VAR_3 = VAR_2;

 *VAR_3 &= VAR_1->ecsa_supported;

 return 0;
}
