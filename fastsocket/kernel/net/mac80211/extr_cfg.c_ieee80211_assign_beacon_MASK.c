
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_3__ {int beacon; } ;
struct TYPE_4__ {TYPE_1__ ap; } ;
struct ieee80211_sub_if_data {TYPE_2__ u; } ;
struct cfg80211_beacon_data {int head_len; int tail_len; int probe_resp_len; int probe_resp; int * tail; int * head; } ;
struct beacon_data {int head_len; int tail_len; int * tail; int * head; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ieee80211_sub_if_data*,int ,int ) ;
 int FUNC_1 (struct beacon_data*,int ) ;
 struct beacon_data* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int ,struct beacon_data*) ;
 int VAR_5 ;
 struct beacon_data* FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct ieee80211_sub_if_data *VAR_6,
       struct cfg80211_beacon_data *VAR_7)
{
 struct beacon_data *VAR_8, *VAR_9;
 int VAR_10, VAR_11;
 int VAR_12, VAR_13;
 u32 VAR_14 = VAR_1;

 VAR_9 = FUNC_5(VAR_6->u.ap.beacon);


 if (!VAR_7->head && !VAR_9)
  return -VAR_2;


 if (VAR_7->head)
  VAR_10 = VAR_7->head_len;
 else
  VAR_10 = VAR_9->head_len;


 if (VAR_7->tail || !VAR_9)

  VAR_11 = VAR_7->tail_len;
 else
  VAR_11 = VAR_9->tail_len;

 VAR_12 = sizeof(*VAR_8) + VAR_10 + VAR_11;

 VAR_8 = FUNC_2(VAR_12, VAR_4);
 if (!VAR_8)
  return -VAR_3;







 VAR_8->head = ((u8 *) VAR_8) + sizeof(*VAR_8);
 VAR_8->tail = VAR_8->head + VAR_10;
 VAR_8->head_len = VAR_10;
 VAR_8->tail_len = VAR_11;


 if (VAR_7->head)
  FUNC_3(VAR_8->head, VAR_7->head, VAR_10);
 else
  FUNC_3(VAR_8->head, VAR_9->head, VAR_10);


 if (VAR_7->tail)
  FUNC_3(VAR_8->tail, VAR_7->tail, VAR_11);
 else
  if (VAR_9)
   FUNC_3(VAR_8->tail, VAR_9->tail, VAR_11);

 VAR_13 = FUNC_0(VAR_6, VAR_7->probe_resp,
           VAR_7->probe_resp_len);
 if (VAR_13 < 0)
  return VAR_13;
 if (VAR_13 == 0)
  VAR_14 |= VAR_0;

 FUNC_4(VAR_6->u.ap.beacon, VAR_8);

 if (VAR_9)
  FUNC_1(VAR_9, VAR_5);

 return VAR_14;
}
