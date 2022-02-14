
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee802_11_elems {int supp_rates_len; int ext_supp_rates_len; int * ext_supp_rates; int * supp_rates; } ;


 scalar_t__ FUNC_0 (int ) ;

int FUNC_1(struct ieee802_11_elems *VAR_0)
{
 int VAR_1 = 0, VAR_2 = 0;
 int VAR_3;

 if (VAR_0->supp_rates == ((void*)0) && VAR_0->ext_supp_rates == ((void*)0))
  return 0;

 for (VAR_3 = 0; VAR_0->supp_rates && VAR_3 < VAR_0->supp_rates_len; VAR_3++) {
  if (FUNC_0(VAR_0->supp_rates[VAR_3]))
   VAR_1++;
  else
   VAR_2++;
 }

 for (VAR_3 = 0; VAR_0->ext_supp_rates && VAR_3 < VAR_0->ext_supp_rates_len;
      VAR_3++) {
  if (FUNC_0(VAR_0->ext_supp_rates[VAR_3]))
   VAR_1++;
  else
   VAR_2++;
 }

 return VAR_1 > 0 && VAR_2 == 0;
}
