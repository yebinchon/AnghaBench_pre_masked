
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct ieee80211_txq_params {scalar_t__ ac; void* aifs; void* cwmax; void* cwmin; void* txop; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 void* FUNC_0 (struct nlattr*) ;
 void* FUNC_1 (struct nlattr*) ;

__attribute__((used)) static int FUNC_2(struct nlattr *VAR_7[],
       struct ieee80211_txq_params *VAR_8)
{
 if (!VAR_7[VAR_2] || !VAR_7[VAR_6] ||
     !VAR_7[VAR_5] || !VAR_7[VAR_4] ||
     !VAR_7[VAR_3])
  return -VAR_0;

 VAR_8->ac = FUNC_1(VAR_7[VAR_2]);
 VAR_8->txop = FUNC_0(VAR_7[VAR_6]);
 VAR_8->cwmin = FUNC_0(VAR_7[VAR_5]);
 VAR_8->cwmax = FUNC_0(VAR_7[VAR_4]);
 VAR_8->aifs = FUNC_1(VAR_7[VAR_3]);

 if (VAR_8->ac >= VAR_1)
  return -VAR_0;

 return 0;
}
