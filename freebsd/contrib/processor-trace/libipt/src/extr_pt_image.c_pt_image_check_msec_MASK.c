
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct pt_mapped_section {int dummy; } ;
struct pt_asid {int dummy; } ;


 int FUNC_0 (struct pt_asid const*,struct pt_asid const*) ;
 struct pt_asid* FUNC_1 (struct pt_mapped_section const*) ;
 scalar_t__ FUNC_2 (struct pt_mapped_section const*) ;
 scalar_t__ FUNC_3 (struct pt_mapped_section const*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline int FUNC_4(const struct pt_mapped_section *VAR_2,
          const struct pt_asid *VAR_3,
          uint64_t VAR_4)
{
 const struct pt_asid *VAR_5;
 uint64_t VAR_6, VAR_7;
 int VAR_8;

 if (!VAR_2)
  return -VAR_0;

 VAR_6 = FUNC_2(VAR_2);
 VAR_7 = FUNC_3(VAR_2);
 if (VAR_4 < VAR_6 || VAR_7 <= VAR_4)
  return -VAR_1;

 VAR_5 = FUNC_1(VAR_2);
 VAR_8 = FUNC_0(VAR_5, VAR_3);
 if (VAR_8 <= 0) {
  if (!VAR_8)
   VAR_8 = -VAR_1;

  return VAR_8;
 }

 return 0;
}
