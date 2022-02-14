
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct sdhci_slot {int opt; scalar_t__ retune_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static uint32_t
FUNC_0(const struct sdhci_slot *VAR_5)
{
 uint32_t VAR_6;

 VAR_6 = 0;
 if (VAR_5->opt & VAR_4) {
  VAR_6 |= VAR_1;
  if (VAR_5->retune_mode == VAR_2 ||
      VAR_5->retune_mode == VAR_3)
   VAR_6 |= VAR_0;
 }
 return (VAR_6);
}
