
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct translation {int key; } ;



__attribute__((used)) static int
FUNC_0(const void *VAR_0, const void *VAR_1)
{
    const struct translation *VAR_2 = (const struct translation *)VAR_0;
    const struct translation *VAR_3 = (const struct translation *)VAR_1;

    return VAR_2->key - VAR_3->key;
}
