
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct genl_info {scalar_t__* attrs; } ;
struct cfg80211_beacon_data {void* probe_resp_len; void* probe_resp; void* assocresp_ies_len; void* assocresp_ies; void* proberesp_ies_len; void* proberesp_ies; void* beacon_ies_len; void* beacon_ies; void* tail_len; void* tail; void* head_len; void* head; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct cfg80211_beacon_data*,int ,int) ;
 void* FUNC_2 (scalar_t__) ;
 void* FUNC_3 (scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct genl_info *VAR_7,
    struct cfg80211_beacon_data *VAR_8)
{
 bool VAR_9 = 0;

 if (!FUNC_0(VAR_7->attrs[VAR_2]) ||
     !FUNC_0(VAR_7->attrs[VAR_3]) ||
     !FUNC_0(VAR_7->attrs[VAR_5]) ||
     !FUNC_0(VAR_7->attrs[VAR_4]))
  return -VAR_0;

 FUNC_1(VAR_8, 0, sizeof(*VAR_8));

 if (VAR_7->attrs[VAR_1]) {
  VAR_8->head = FUNC_2(VAR_7->attrs[VAR_1]);
  VAR_8->head_len = FUNC_3(VAR_7->attrs[VAR_1]);
  if (!VAR_8->head_len)
   return -VAR_0;
  VAR_9 = 1;
 }

 if (VAR_7->attrs[VAR_2]) {
  VAR_8->tail = FUNC_2(VAR_7->attrs[VAR_2]);
  VAR_8->tail_len =
      FUNC_3(VAR_7->attrs[VAR_2]);
  VAR_9 = 1;
 }

 if (!VAR_9)
  return -VAR_0;

 if (VAR_7->attrs[VAR_3]) {
  VAR_8->beacon_ies = FUNC_2(VAR_7->attrs[VAR_3]);
  VAR_8->beacon_ies_len = FUNC_3(VAR_7->attrs[VAR_3]);
 }

 if (VAR_7->attrs[VAR_5]) {
  VAR_8->proberesp_ies =
   FUNC_2(VAR_7->attrs[VAR_5]);
  VAR_8->proberesp_ies_len =
   FUNC_3(VAR_7->attrs[VAR_5]);
 }

 if (VAR_7->attrs[VAR_4]) {
  VAR_8->assocresp_ies =
   FUNC_2(VAR_7->attrs[VAR_4]);
  VAR_8->assocresp_ies_len =
   FUNC_3(VAR_7->attrs[VAR_4]);
 }

 if (VAR_7->attrs[VAR_6]) {
  VAR_8->probe_resp =
   FUNC_2(VAR_7->attrs[VAR_6]);
  VAR_8->probe_resp_len =
   FUNC_3(VAR_7->attrs[VAR_6]);
 }

 return 0;
}
