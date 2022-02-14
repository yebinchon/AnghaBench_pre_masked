
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct map {scalar_t__ pgoff; } ;
typedef scalar_t__ s64 ;



__attribute__((used)) static u64 FUNC_0(struct map *VAR_0, u64 VAR_1)
{
 return VAR_1 - (s64)VAR_0->pgoff;
}
