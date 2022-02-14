
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct dump_pa {scalar_t__ pa_size; } ;



__attribute__((used)) static int
FUNC_0(struct dump_pa *VAR_0, int VAR_1, void *VAR_2)
{
 uint64_t *VAR_3;

 VAR_3 = (uint64_t *)VAR_2;
 *VAR_3 += (uint64_t)VAR_0->pa_size;
 return (0);
}
