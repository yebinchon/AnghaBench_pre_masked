
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct ieee80211_sub_if_data {scalar_t__ fragment_next; struct ieee80211_fragment_entry* fragments; } ;
struct ieee80211_fragment_entry {unsigned int seq; int rx_queue; unsigned int last_frag; scalar_t__ extra_len; scalar_t__ ccmp; int first_frag_time; int skb_list; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,struct sk_buff*) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;

__attribute__((used)) static inline struct ieee80211_fragment_entry *
FUNC_3(struct ieee80211_sub_if_data *VAR_2,
    unsigned int VAR_3, unsigned int VAR_4, int VAR_5,
    struct sk_buff **VAR_6)
{
 struct ieee80211_fragment_entry *VAR_7;

 VAR_7 = &VAR_2->fragments[VAR_2->fragment_next++];
 if (VAR_2->fragment_next >= VAR_0)
  VAR_2->fragment_next = 0;

 if (!FUNC_2(&VAR_7->skb_list))
  FUNC_0(&VAR_7->skb_list);

 FUNC_1(&VAR_7->skb_list, *VAR_6);
 *VAR_6 = ((void*)0);
 VAR_7->first_frag_time = VAR_1;
 VAR_7->seq = VAR_4;
 VAR_7->rx_queue = VAR_5;
 VAR_7->last_frag = VAR_3;
 VAR_7->ccmp = 0;
 VAR_7->extra_len = 0;

 return VAR_7;
}
