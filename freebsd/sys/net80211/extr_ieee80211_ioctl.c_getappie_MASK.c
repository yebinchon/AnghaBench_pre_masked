
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211req {scalar_t__ i_len; int i_data; } ;
struct ieee80211_appie {scalar_t__ ie_len; int ie_data; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,scalar_t__) ;

__attribute__((used)) static int
FUNC_1(const struct ieee80211_appie *VAR_1, struct ieee80211req *VAR_2)
{
 if (VAR_1 == ((void*)0))
  return VAR_0;

 if (VAR_2->i_len > VAR_1->ie_len)
  VAR_2->i_len = VAR_1->ie_len;
 return FUNC_0(VAR_1->ie_data, VAR_2->i_data, VAR_2->i_len);
}
