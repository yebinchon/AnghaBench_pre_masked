
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_mbo_non_pref_channel {scalar_t__ oper_class; scalar_t__ reason; scalar_t__ preference; } ;



__attribute__((used)) static int FUNC_0(const void *VAR_0, const void *VAR_1)
{
 const struct wpa_mbo_non_pref_channel *VAR_2 = VAR_0, *VAR_3 = VAR_1;

 if (VAR_2->oper_class != VAR_3->oper_class)
  return (int) VAR_2->oper_class - (int) VAR_3->oper_class;
 if (VAR_2->reason != VAR_3->reason)
  return (int) VAR_2->reason - (int) VAR_3->reason;
 return (int) VAR_2->preference - (int) VAR_3->preference;
}
