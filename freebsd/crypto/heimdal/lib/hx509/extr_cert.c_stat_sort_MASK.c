
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat_el {int stats; } ;



__attribute__((used)) static int
FUNC_0(const void *VAR_0, const void *VAR_1)
{
    const struct stat_el *VAR_2 = VAR_0;
    const struct stat_el *VAR_3 = VAR_1;
    return VAR_3->stats - VAR_2->stats;
}
