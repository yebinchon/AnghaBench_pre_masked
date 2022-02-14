
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct map {scalar_t__ pgoff; scalar_t__ start; } ;



__attribute__((used)) static inline u64 FUNC_0(struct map *VAR_0, u64 VAR_1)
{
 return VAR_1 - VAR_0->start + VAR_0->pgoff;
}
