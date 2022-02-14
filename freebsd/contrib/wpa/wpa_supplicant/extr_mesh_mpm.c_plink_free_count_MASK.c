
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostapd_data {scalar_t__ max_plinks; scalar_t__ num_plinks; } ;



__attribute__((used)) static int FUNC_0(struct hostapd_data *VAR_0)
{
 if (VAR_0->max_plinks > VAR_0->num_plinks)
  return VAR_0->max_plinks - VAR_0->num_plinks;
 return 0;
}
