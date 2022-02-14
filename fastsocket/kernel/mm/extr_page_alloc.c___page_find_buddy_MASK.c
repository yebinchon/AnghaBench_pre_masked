
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;



__attribute__((used)) static inline struct page *
FUNC_0(struct page *VAR_0, unsigned long VAR_1, unsigned int VAR_2)
{
 unsigned long VAR_3 = VAR_1 ^ (1 << VAR_2);

 return VAR_0 + (VAR_3 - VAR_1);
}
