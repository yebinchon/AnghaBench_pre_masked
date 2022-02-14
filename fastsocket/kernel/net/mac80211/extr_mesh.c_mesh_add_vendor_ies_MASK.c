
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int dummy; } ;
struct ieee80211_if_mesh {int* ie; int ie_len; } ;
struct TYPE_2__ {struct ieee80211_if_mesh mesh; } ;
struct ieee80211_sub_if_data {TYPE_1__ u; } ;


 int VAR_0 ;
 int FUNC_0 (int*,int,int ) ;
 int FUNC_1 (int ,int const*,int) ;
 int FUNC_2 (struct sk_buff*,int) ;
 int FUNC_3 (struct sk_buff*) ;

int FUNC_4(struct ieee80211_sub_if_data *VAR_1,
   struct sk_buff *VAR_2)
{
 struct ieee80211_if_mesh *VAR_3 = &VAR_1->u.mesh;
 u8 VAR_4, VAR_5;
 const u8 *VAR_6;

 if (!VAR_3->ie || !VAR_3->ie_len)
  return 0;


 VAR_4 = FUNC_0(VAR_3->ie, VAR_3->ie_len, 0);

 if (VAR_4) {
  VAR_5 = VAR_3->ie_len - VAR_4;
  VAR_6 = VAR_3->ie + VAR_4;
  if (FUNC_3(VAR_2) < VAR_5)
   return -VAR_0;
  FUNC_1(FUNC_2(VAR_2, VAR_5), VAR_6, VAR_5);
 }

 return 0;
}
