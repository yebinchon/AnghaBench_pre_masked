
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int data; int len; } ;
struct ieee80211_mmie {scalar_t__ element_id; int length; int key_id; } ;
struct ieee80211_mgmt {int da; } ;
struct ieee80211_hdr {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ieee80211_hdr*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct sk_buff *VAR_1)
{
 struct ieee80211_mgmt *VAR_2 = (struct ieee80211_mgmt *) VAR_1->data;
 struct ieee80211_mmie *VAR_3;

 if (VAR_1->len < 24 + sizeof(*VAR_3) || !FUNC_1(VAR_2->da))
  return -1;

 if (!FUNC_0((struct ieee80211_hdr *) VAR_2))
  return -1;

 VAR_3 = (struct ieee80211_mmie *)
  (VAR_1->data + VAR_1->len - sizeof(*VAR_3));
 if (VAR_3->element_id != VAR_0 ||
     VAR_3->length != sizeof(*VAR_3) - 2)
  return -1;

 return FUNC_2(VAR_3->key_id);
}
