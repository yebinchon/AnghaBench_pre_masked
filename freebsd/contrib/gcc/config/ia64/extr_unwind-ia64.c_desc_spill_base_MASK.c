
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int unw_word ;
struct unw_state_record {int spill_offset; } ;



__attribute__((used)) static inline void
FUNC_0 (unw_word VAR_0, struct unw_state_record *VAR_1)
{
  VAR_1->spill_offset = 0x10 - 4*VAR_0;
}
