
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct sk_buff {int* data; } ;
struct TYPE_2__ {int keylen; } ;
struct ieee80211_key {TYPE_1__ conf; } ;
struct ieee80211_hdr {int frame_control; } ;


 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static bool FUNC_2(struct sk_buff *VAR_0,
         struct ieee80211_key *VAR_1)
{
 struct ieee80211_hdr *VAR_2 = (struct ieee80211_hdr *)VAR_0->data;
 unsigned int VAR_3;
 u8 *VAR_4;
 u32 VAR_5;

 VAR_3 = FUNC_0(VAR_2->frame_control);
 VAR_4 = VAR_0->data + VAR_3;
 VAR_5 = (VAR_4[0] << 16) | (VAR_4[1] << 8) | VAR_4[2];

 return FUNC_1(VAR_5, VAR_1->conf.keylen);
}
