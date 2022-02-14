
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct pt_mapped_section {int dummy; } ;


 scalar_t__ FUNC_0 (struct pt_mapped_section const*) ;
 scalar_t__ FUNC_1 (struct pt_mapped_section const*) ;

__attribute__((used)) static inline int FUNC_2(const struct pt_mapped_section *VAR_0,
           uint64_t VAR_1)
{
 uint64_t VAR_2, VAR_3;

 VAR_2 = FUNC_0(VAR_0);
 VAR_3 = FUNC_1(VAR_0);

 return (VAR_2 <= VAR_1 && VAR_1 < VAR_3);
}
