
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct ieee80211req_mlme {int im_macaddr; int im_reason; int im_op; } ;
typedef int mlme ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int const*,int ) ;
 int FUNC_1 (struct ieee80211req_mlme*,int ,int) ;
 int FUNC_2 (void*,int ,struct ieee80211req_mlme*,int) ;

__attribute__((used)) static int
FUNC_3(void *VAR_2, const u8 VAR_3, const u16 VAR_4, const u8 *VAR_5)
{
 struct ieee80211req_mlme VAR_6;

 FUNC_1(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.im_op = VAR_3;
 VAR_6.im_reason = VAR_4;
 FUNC_0(VAR_6.im_macaddr, VAR_5, VAR_0);
 return FUNC_2(VAR_2, VAR_1, &VAR_6, sizeof(VAR_6));
}
