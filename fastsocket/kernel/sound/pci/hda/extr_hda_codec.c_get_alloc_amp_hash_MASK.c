
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hda_codec {int amp_cache; } ;
struct hda_amp_info {int dummy; } ;


 scalar_t__ FUNC_0 (int *,int ) ;

__attribute__((used)) static inline struct hda_amp_info *
FUNC_1(struct hda_codec *VAR_0, u32 VAR_1)
{
 return (struct hda_amp_info *)FUNC_0(&VAR_0->amp_cache, VAR_1);
}
