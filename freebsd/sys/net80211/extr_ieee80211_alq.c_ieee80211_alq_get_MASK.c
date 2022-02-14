
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_alq_rec {int dummy; } ;
struct ale {int dummy; } ;


 int VAR_0 ;
 struct ale* FUNC_0 (int ,size_t,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static struct ale *
FUNC_1(size_t VAR_4)
{
 struct ale *VAR_5;

 VAR_5 = FUNC_0(VAR_1, VAR_4 + sizeof(struct ieee80211_alq_rec),
     VAR_0);
 if (!VAR_5)
  VAR_3++;
 else
  VAR_2++;
 return VAR_5;
}
