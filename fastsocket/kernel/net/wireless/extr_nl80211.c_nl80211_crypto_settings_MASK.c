
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct genl_info {scalar_t__* attrs; } ;
struct TYPE_2__ {int flags; } ;
struct cfg80211_registered_device {TYPE_1__ wiphy; } ;
struct cfg80211_crypto_settings {int control_port_no_encrypt; int n_ciphers_pairwise; int n_akm_suites; void** akm_suites; void* wpa_versions; void* cipher_group; void** ciphers_pairwise; void* control_port_ethertype; scalar_t__ control_port; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (TYPE_1__*,void*) ;
 void* FUNC_1 (scalar_t__) ;
 int FUNC_2 (void**,void*,int) ;
 int FUNC_3 (struct cfg80211_crypto_settings*,int ,int) ;
 int FUNC_4 (void*) ;
 void* FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 void* FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__) ;

__attribute__((used)) static int FUNC_9(struct cfg80211_registered_device *VAR_11,
       struct genl_info *VAR_12,
       struct cfg80211_crypto_settings *VAR_13,
       int VAR_14)
{
 FUNC_3(VAR_13, 0, sizeof(*VAR_13));

 VAR_13->control_port = VAR_12->attrs[VAR_5];

 if (VAR_12->attrs[VAR_6]) {
  u16 VAR_15;
  VAR_15 = FUNC_6(
   VAR_12->attrs[VAR_6]);
  VAR_13->control_port_ethertype = FUNC_1(VAR_15);
  if (!(VAR_11->wiphy.flags & VAR_10) &&
      VAR_15 != VAR_1)
   return -VAR_0;
  if (VAR_12->attrs[VAR_7])
   VAR_13->control_port_no_encrypt = 1;
 } else
  VAR_13->control_port_ethertype = FUNC_1(VAR_1);

 if (VAR_12->attrs[VAR_3]) {
  void *VAR_16;
  int VAR_17, VAR_18;

  VAR_16 = FUNC_5(VAR_12->attrs[VAR_3]);
  VAR_17 = FUNC_8(VAR_12->attrs[VAR_3]);
  VAR_13->n_ciphers_pairwise = VAR_17 / sizeof(u32);

  if (VAR_17 % sizeof(u32))
   return -VAR_0;

  if (VAR_13->n_ciphers_pairwise > VAR_14)
   return -VAR_0;

  FUNC_2(VAR_13->ciphers_pairwise, VAR_16, VAR_17);

  for (VAR_18 = 0; VAR_18 < VAR_13->n_ciphers_pairwise; VAR_18++)
   if (!FUNC_0(
     &VAR_11->wiphy,
     VAR_13->ciphers_pairwise[VAR_18]))
    return -VAR_0;
 }

 if (VAR_12->attrs[VAR_4]) {
  VAR_13->cipher_group =
   FUNC_7(VAR_12->attrs[VAR_4]);
  if (!FUNC_0(&VAR_11->wiphy,
           VAR_13->cipher_group))
   return -VAR_0;
 }

 if (VAR_12->attrs[VAR_8]) {
  VAR_13->wpa_versions =
   FUNC_7(VAR_12->attrs[VAR_8]);
  if (!FUNC_4(VAR_13->wpa_versions))
   return -VAR_0;
 }

 if (VAR_12->attrs[VAR_2]) {
  void *VAR_19;
  int VAR_20;

  VAR_19 = FUNC_5(VAR_12->attrs[VAR_2]);
  VAR_20 = FUNC_8(VAR_12->attrs[VAR_2]);
  VAR_13->n_akm_suites = VAR_20 / sizeof(u32);

  if (VAR_20 % sizeof(u32))
   return -VAR_0;

  if (VAR_13->n_akm_suites > VAR_9)
   return -VAR_0;

  FUNC_2(VAR_13->akm_suites, VAR_19, VAR_20);
 }

 return 0;
}
