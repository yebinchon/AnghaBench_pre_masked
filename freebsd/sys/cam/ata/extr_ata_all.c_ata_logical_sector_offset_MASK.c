
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct ata_params {int lsalign; } ;


 scalar_t__ FUNC_0 (struct ata_params*) ;

uint64_t
FUNC_1(struct ata_params *VAR_0)
{
 if ((VAR_0->lsalign & 0xc000) == 0x4000) {
  return ((uint64_t)FUNC_0(VAR_0) *
      (VAR_0->lsalign & 0x3fff));
 }
 return (0);
}
