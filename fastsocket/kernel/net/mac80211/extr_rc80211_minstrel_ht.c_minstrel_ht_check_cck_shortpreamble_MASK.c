
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct minstrel_priv {int dummy; } ;
struct minstrel_ht_sta {int cck_supported_short; TYPE_1__* groups; } ;
struct TYPE_2__ {int supported; } ;


 size_t VAR_0 ;

__attribute__((used)) static void
FUNC_0(struct minstrel_priv *VAR_1,
        struct minstrel_ht_sta *VAR_2, bool VAR_3)
{
 u8 VAR_4 = VAR_2->groups[VAR_0].supported;

 if (!VAR_4 || !VAR_2->cck_supported_short)
  return;

 if (VAR_4 & (VAR_2->cck_supported_short << (VAR_3 * 4)))
  return;

 VAR_4 ^= VAR_2->cck_supported_short | (VAR_2->cck_supported_short << 4);
 VAR_2->groups[VAR_0].supported = VAR_4;
}
