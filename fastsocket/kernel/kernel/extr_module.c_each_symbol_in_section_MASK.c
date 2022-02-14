
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symsearch {unsigned int stop; unsigned int start; } ;
struct module {int dummy; } ;



__attribute__((used)) static bool FUNC_0(const struct symsearch *VAR_0,
       unsigned int VAR_1,
       struct module *VAR_2,
       bool (*VAR_3)(const struct symsearch *VAR_4,
           struct module *VAR_5,
           unsigned int VAR_6, void *VAR_7),
       void *VAR_8)
{
 unsigned int VAR_9, VAR_10;

 for (VAR_10 = 0; VAR_10 < VAR_1; VAR_10++) {
  for (VAR_9 = 0; VAR_9 < VAR_0[VAR_10].stop - VAR_0[VAR_10].start; VAR_9++)
   if (VAR_3(&VAR_0[VAR_10], VAR_2, VAR_9, VAR_8))
    return 1;
 }

 return 0;
}
