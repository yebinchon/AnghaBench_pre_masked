
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct ieee80211req_sta_info {int dummy; } ;
struct TYPE_2__ {size_t len; } ;
struct ieee80211_node {TYPE_1__ ni_ies; } ;


 size_t FUNC_0 (int,int) ;

__attribute__((used)) static size_t
FUNC_1(const struct ieee80211_node *VAR_0, size_t *VAR_1)
{
 *VAR_1 = VAR_0->ni_ies.len;
 return FUNC_0(sizeof(struct ieee80211req_sta_info) + *VAR_1,
        sizeof(uint32_t));
}
