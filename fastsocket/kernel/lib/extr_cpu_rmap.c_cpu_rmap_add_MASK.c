
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct cpu_rmap {scalar_t__ used; scalar_t__ size; void** obj; } ;


 int FUNC_0 (int) ;

int FUNC_1(struct cpu_rmap *VAR_0, void *VAR_1)
{
 u16 VAR_2;

 FUNC_0(VAR_0->used >= VAR_0->size);
 VAR_2 = VAR_0->used++;
 VAR_0->obj[VAR_2] = VAR_1;
 return VAR_2;
}
