
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef uintptr_t uint64_t ;
struct pmap_invl_gen {uintptr_t gen; scalar_t__ next; } ;



__attribute__((used)) static bool
FUNC_0(struct pmap_invl_gen *VAR_0, struct pmap_invl_gen *VAR_1,
    struct pmap_invl_gen *VAR_2)
{
 uint64_t VAR_3, VAR_4, VAR_5, VAR_6;
 char VAR_7;

 VAR_4 = VAR_2->gen;
 VAR_3 = (uintptr_t)VAR_2->next;
 VAR_6 = VAR_1->gen;
 VAR_5 = (uintptr_t)VAR_1->next;

 __asm volatile("lock;cmpxchg16b\t%1;sete\t%0"
     : "=r" (VAR_7), "+m" (*VAR_0), "+a" (VAR_6), "+d" (VAR_5)
     : "b"(VAR_4), "c" (VAR_3)
     : "memory", "cc");
 return (VAR_7);
}
