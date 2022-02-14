
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wait_queue_head_t ;
typedef void atomic_t ;


 int VAR_0 ;
 int * FUNC_0 (void*,unsigned long) ;

__attribute__((used)) static inline wait_queue_head_t *FUNC_1(atomic_t *VAR_1)
{
 if (VAR_0 == 64) {
  unsigned long VAR_2 = (unsigned long)VAR_1;
  return FUNC_0((void *)(VAR_2 & ~1), VAR_2 & 1);
 }
 return FUNC_0(VAR_1, 0);
}
