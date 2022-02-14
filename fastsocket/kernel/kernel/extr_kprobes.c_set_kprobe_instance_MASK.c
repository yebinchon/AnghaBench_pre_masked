
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kprobe {int dummy; } ;
typedef struct kprobe* __get_cpu_var ;



__attribute__((used)) static inline void FUNC_0(struct kprobe *VAR_0)
{
 __get_cpu_var(VAR_1) = VAR_0;
}
