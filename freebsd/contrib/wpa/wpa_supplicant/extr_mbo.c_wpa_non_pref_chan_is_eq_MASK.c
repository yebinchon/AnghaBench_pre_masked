
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_mbo_non_pref_channel {scalar_t__ oper_class; scalar_t__ chan; } ;



__attribute__((used)) static int FUNC_0(struct wpa_mbo_non_pref_channel *VAR_0,
       struct wpa_mbo_non_pref_channel *VAR_1)
{
 return VAR_0->oper_class == VAR_1->oper_class && VAR_0->chan == VAR_1->chan;
}
