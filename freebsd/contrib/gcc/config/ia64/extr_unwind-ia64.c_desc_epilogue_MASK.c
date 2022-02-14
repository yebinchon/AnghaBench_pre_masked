
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int unw_word ;
struct unw_state_record {int epilogue_start; int region_start; int region_len; int epilogue_count; } ;



__attribute__((used)) static inline void
FUNC_0 (unw_word VAR_0, unw_word VAR_1, struct unw_state_record *VAR_2)
{
  VAR_2->epilogue_start = VAR_2->region_start + VAR_2->region_len - 1 - VAR_0;
  VAR_2->epilogue_count = VAR_1 + 1;
}
