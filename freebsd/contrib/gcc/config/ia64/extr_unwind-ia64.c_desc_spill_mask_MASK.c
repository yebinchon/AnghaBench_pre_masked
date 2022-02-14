
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unw_state_record {unsigned char* imask; int region_len; } ;



__attribute__((used)) static inline unsigned char *
FUNC_0 (unsigned char *VAR_0, struct unw_state_record *VAR_1)
{
  VAR_1->imask = VAR_0;
  return VAR_0 + (2*VAR_1->region_len + 7)/8;
}
