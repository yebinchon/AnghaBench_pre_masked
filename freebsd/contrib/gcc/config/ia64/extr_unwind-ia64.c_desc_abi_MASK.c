
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unw_state_record {unsigned char unwabi; } ;



__attribute__((used)) static inline void
FUNC_0 (unsigned char VAR_0,
   unsigned char VAR_1,
   struct unw_state_record *VAR_2)
{
  VAR_2->unwabi = (VAR_0 << 8) | VAR_1;
}
