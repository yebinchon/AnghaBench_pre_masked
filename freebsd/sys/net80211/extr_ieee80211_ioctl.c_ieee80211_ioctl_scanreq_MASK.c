
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211vap {int dummy; } ;
struct ieee80211req {int i_len; int i_data; } ;
struct ieee80211_scan_req {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ieee80211_scan_req*,int ) ;
 struct ieee80211_scan_req* FUNC_1 (int,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,struct ieee80211_scan_req*,int) ;
 int FUNC_3 (struct ieee80211vap*,struct ieee80211_scan_req*) ;

__attribute__((used)) static int
FUNC_4(struct ieee80211vap *VAR_5, struct ieee80211req *VAR_6)
{
 struct ieee80211_scan_req *VAR_7;
 int VAR_8;

 if (VAR_6->i_len != sizeof(*VAR_7))
  return VAR_0;
 VAR_7 = FUNC_1(sizeof(*VAR_7), VAR_4,
      VAR_2 | VAR_3);
 if (VAR_7 == ((void*)0))
  return VAR_1;
 VAR_8 = FUNC_2(VAR_6->i_data, VAR_7, sizeof(*VAR_7));
 if (VAR_8 != 0)
  goto bad;
 VAR_8 = FUNC_3(VAR_5, VAR_7);
bad:
 FUNC_0(VAR_7, VAR_4);
 return VAR_8;
}
