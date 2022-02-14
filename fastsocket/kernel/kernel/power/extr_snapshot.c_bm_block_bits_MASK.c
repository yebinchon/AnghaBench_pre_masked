
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bm_block {unsigned long end_pfn; unsigned long start_pfn; } ;



__attribute__((used)) static inline unsigned long FUNC_0(struct bm_block *VAR_0)
{
 return VAR_0->end_pfn - VAR_0->start_pfn;
}
