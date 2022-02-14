
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211req {int i_len; int i_data; } ;
struct ieee80211_appie {int ie_len; int ie_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ieee80211_appie*,int ) ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static int
FUNC_3(struct ieee80211_appie **VAR_5, const struct ieee80211req *VAR_6)
{
 struct ieee80211_appie *VAR_7 = *VAR_5;
 struct ieee80211_appie *VAR_8;
 int VAR_9;

 if (VAR_6->i_len == 0) {
  if (VAR_7 != ((void*)0)) {
   *VAR_5 = ((void*)0);
   FUNC_0(VAR_7, VAR_4);
  }
  return 0;
 }
 if (!(2 <= VAR_6->i_len && VAR_6->i_len <= VAR_2))
  return VAR_0;
 VAR_8 = (struct ieee80211_appie *) FUNC_1(
     sizeof(struct ieee80211_appie) + VAR_6->i_len, VAR_4,
     VAR_3);
 if (VAR_8 == ((void*)0))
  return VAR_1;

 VAR_9 = FUNC_2(VAR_6->i_data, VAR_8->ie_data, VAR_6->i_len);
 if (VAR_9) {
  FUNC_0(VAR_8, VAR_4);
  return VAR_9;
 }
 VAR_8->ie_len = VAR_6->i_len;
 *VAR_5 = VAR_8;
 if (VAR_7 != ((void*)0))
  FUNC_0(VAR_7, VAR_4);
 return 0;
}
