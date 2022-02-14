
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ieee80211vap {int iv_com_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,int ) ;

void
FUNC_3(struct ieee80211vap *VAR_2)
{
 uint32_t VAR_3;

 VAR_3 = FUNC_2(&VAR_2->iv_com_state, -VAR_1);

 FUNC_0(FUNC_1(VAR_3, VAR_0) != 0,
     ("com reference counter underflow"));

 (void) VAR_3;
}
