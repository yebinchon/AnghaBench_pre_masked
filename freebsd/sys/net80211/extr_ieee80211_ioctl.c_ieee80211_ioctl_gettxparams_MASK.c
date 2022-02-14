
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211vap {int iv_txparms; } ;
struct ieee80211req {size_t i_len; int i_data; } ;


 int FUNC_0 (int ,int ,size_t) ;

__attribute__((used)) static int
FUNC_1(struct ieee80211vap *VAR_0,
 const struct ieee80211req *VAR_1)
{
 size_t VAR_2 = VAR_1->i_len;

 if (VAR_2 > sizeof(VAR_0->iv_txparms))
  VAR_2 = sizeof(VAR_0->iv_txparms);
 return FUNC_0(VAR_0->iv_txparms, VAR_1->i_data, VAR_2);
}
