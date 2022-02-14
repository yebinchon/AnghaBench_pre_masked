
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct range_entry {scalar_t__ start; scalar_t__ len; } ;



__attribute__((used)) static int
FUNC_0(const void *VAR_0, const void *VAR_1)
{
    const struct range_entry *VAR_2 = (const struct range_entry*)VAR_0;
    const struct range_entry *VAR_3 = (const struct range_entry*)VAR_1;

    if (VAR_2->start >= VAR_3->start && VAR_2->start < VAR_3->start + VAR_3->len)
 return 0;
    return VAR_2->start - VAR_3->start;
}
