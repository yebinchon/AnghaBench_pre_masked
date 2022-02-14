
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
struct pt_section {struct pt_sec_posix_mapping* mapping; } ;
struct pt_sec_posix_mapping {int * end; int * base; } ;


 int VAR_0 ;

int FUNC_0(const struct pt_section *VAR_1, uint64_t *VAR_2)
{
 struct pt_sec_posix_mapping *VAR_3;
 const uint8_t *VAR_4, *VAR_5;

 if (!VAR_1 || !VAR_2)
  return -VAR_0;

 VAR_3 = VAR_1->mapping;
 if (!VAR_3)
  return -VAR_0;

 VAR_4 = VAR_3->base;
 VAR_5 = VAR_3->end;

 if (!VAR_4 || !VAR_5 || VAR_5 < VAR_4)
  return -VAR_0;

 *VAR_2 = (uint64_t) (VAR_5 - VAR_4);

 return 0;
}
