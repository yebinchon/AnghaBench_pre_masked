
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ieee80211_sub_if_data {int fragment_next; struct ieee80211_fragment_entry* fragments; } ;
struct ieee80211_hdr {int frame_control; int addr2; int addr1; } ;
struct TYPE_5__ {TYPE_1__* next; } ;
struct ieee80211_fragment_entry {unsigned int seq; int rx_queue; int last_frag; TYPE_2__ skb_list; scalar_t__ first_frag_time; } ;
struct TYPE_4__ {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static inline struct ieee80211_fragment_entry *
FUNC_5(struct ieee80211_sub_if_data *VAR_4,
     unsigned int VAR_5, unsigned int VAR_6,
     int VAR_7, struct ieee80211_hdr *VAR_8)
{
 struct ieee80211_fragment_entry *VAR_9;
 int VAR_10, VAR_11;

 VAR_11 = VAR_4->fragment_next;
 for (VAR_10 = 0; VAR_10 < VAR_2; VAR_10++) {
  struct ieee80211_hdr *VAR_12;

  VAR_11--;
  if (VAR_11 < 0)
   VAR_11 = VAR_2 - 1;

  VAR_9 = &VAR_4->fragments[VAR_11];
  if (FUNC_3(&VAR_9->skb_list) || VAR_9->seq != VAR_6 ||
      VAR_9->rx_queue != VAR_7 ||
      VAR_9->last_frag + 1 != VAR_5)
   continue;

  VAR_12 = (struct ieee80211_hdr *)VAR_9->skb_list.next->data;




  if (((VAR_8->frame_control ^ VAR_12->frame_control) &
       FUNC_1(VAR_1)) ||
      !FUNC_2(VAR_8->addr1, VAR_12->addr1) ||
      !FUNC_2(VAR_8->addr2, VAR_12->addr2))
   continue;

  if (FUNC_4(VAR_3, VAR_9->first_frag_time + 2 * VAR_0)) {
   FUNC_0(&VAR_9->skb_list);
   continue;
  }
  return VAR_9;
 }

 return ((void*)0);
}
