
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct wpa_supplicant {int dummy; } ;
struct wmm_parameter_element {TYPE_1__* ac; } ;
struct wmm_ac_assoc_data {TYPE_2__* ac_params; } ;
struct ieee802_11_elems {int wmm_len; scalar_t__ wmm; } ;
struct TYPE_4__ {int acm; } ;
struct TYPE_3__ {int aci_aifsn; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 scalar_t__ FUNC_0 (int const*,size_t,struct ieee802_11_elems*,int) ;
 struct wmm_ac_assoc_data* FUNC_1 (int) ;
 int FUNC_2 (int ,char*,...) ;

__attribute__((used)) static struct wmm_ac_assoc_data *
FUNC_3(struct wpa_supplicant *VAR_8, const u8 *VAR_9,
     size_t VAR_10)
{
 struct ieee802_11_elems VAR_11;
 struct wmm_parameter_element *VAR_12;
 struct wmm_ac_assoc_data *VAR_13;
 int VAR_14;


 if (FUNC_0(VAR_9, VAR_10, &VAR_11, 1) == VAR_1) {
  FUNC_2(VAR_0, "WMM AC: could not parse assoc ies");
  return ((void*)0);
 }

 if (!VAR_11.wmm) {
  FUNC_2(VAR_0, "WMM AC: No WMM IE");
  return ((void*)0);
 }

 if (VAR_11.wmm_len != sizeof(*VAR_12)) {
  FUNC_2(VAR_0, "WMM AC: Invalid WMM ie length");
  return ((void*)0);
 }

 VAR_12 = (struct wmm_parameter_element *)(VAR_11.wmm);

 VAR_13 = FUNC_1(sizeof(*VAR_13));
 if (!VAR_13)
  return ((void*)0);

 for (VAR_14 = 0; VAR_14 < VAR_5; VAR_14++)
  VAR_13->ac_params[VAR_14].acm =
   !!(VAR_12->ac[VAR_14].aci_aifsn & VAR_2);

 FUNC_2(VAR_0,
     "WMM AC: AC mandatory: AC_BE=%u AC_BK=%u AC_VI=%u AC_VO=%u",
     VAR_13->ac_params[VAR_3].acm,
     VAR_13->ac_params[VAR_4].acm,
     VAR_13->ac_params[VAR_6].acm,
     VAR_13->ac_params[VAR_7].acm);

 return VAR_13;
}
