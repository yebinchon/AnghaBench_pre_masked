
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long uint64_t ;
struct pt_section {int (* memsize ) (struct pt_section const*,unsigned long long*) ;scalar_t__ mcount; } ;


 int FUNC_0 (struct pt_section const*,unsigned long long*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(const struct pt_section *VAR_1,
         uint64_t *VAR_2)
{
 uint64_t VAR_3, VAR_4;
 int (*VAR_5)(const struct pt_section *VAR_6, uint64_t *VAR_7);
 int VAR_8;

 if (!VAR_1 || !VAR_2)
  return -VAR_0;

 VAR_5 = VAR_1->memsize;
 if (!VAR_5) {
  if (VAR_1->mcount)
   return -VAR_0;

  *VAR_2 = 0ull;
  return 0;
 }

 VAR_8 = VAR_5(VAR_1, &VAR_3);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_8 = FUNC_0(VAR_1, &VAR_4);
 if (VAR_8 < 0)
  return VAR_8;

 *VAR_2 = VAR_3 + VAR_4;

 return 0;
}
