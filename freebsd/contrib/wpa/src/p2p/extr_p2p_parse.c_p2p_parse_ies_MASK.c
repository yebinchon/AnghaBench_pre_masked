
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct p2p_message {int pref_freq_list_len; int pref_freq_list; void* wfd_subelems; void* p2p_attributes; void* wps_attributes; scalar_t__ ssid; scalar_t__ ds_params; } ;
struct ieee802_11_elems {int pref_freq_list_len; int pref_freq_list; scalar_t__ wfd; scalar_t__ ssid; scalar_t__ ds_params; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int const*,size_t,struct ieee802_11_elems*,int ) ;
 void* FUNC_1 (int const*,size_t,int ) ;
 int FUNC_2 (struct p2p_message*) ;
 scalar_t__ FUNC_3 (void*,struct p2p_message*) ;
 scalar_t__ FUNC_4 (void*,struct p2p_message*) ;
 int FUNC_5 (int ,char*,void*) ;
 int FUNC_6 (int ,char*) ;

int FUNC_7(const u8 *VAR_5, size_t VAR_6, struct p2p_message *VAR_7)
{
 struct ieee802_11_elems VAR_8;

 FUNC_0(VAR_5, VAR_6, &VAR_8, 0);
 if (VAR_8.ds_params)
  VAR_7->ds_params = VAR_8.ds_params;
 if (VAR_8.ssid)
  VAR_7->ssid = VAR_8.ssid - 2;

 VAR_7->wps_attributes = FUNC_1(VAR_5, VAR_6,
         VAR_4);
 if (VAR_7->wps_attributes &&
     FUNC_4(VAR_7->wps_attributes, VAR_7)) {
  FUNC_2(VAR_7);
  return -1;
 }

 VAR_7->p2p_attributes = FUNC_1(VAR_5, VAR_6,
         VAR_2);
 if (VAR_7->p2p_attributes &&
     FUNC_3(VAR_7->p2p_attributes, VAR_7)) {
  FUNC_6(VAR_0, "P2P: Failed to parse P2P IE data");
  if (VAR_7->p2p_attributes)
   FUNC_5(VAR_1, "P2P: P2P IE data",
     VAR_7->p2p_attributes);
  FUNC_2(VAR_7);
  return -1;
 }
 VAR_7->pref_freq_list = VAR_8.pref_freq_list;
 VAR_7->pref_freq_list_len = VAR_8.pref_freq_list_len;

 return 0;
}
