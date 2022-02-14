
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct module {unsigned int taints; } ;


 int FUNC_0 (unsigned int) ;

__attribute__((used)) static inline void FUNC_1(struct module *VAR_0, unsigned VAR_1)
{
 FUNC_0(VAR_1);
 VAR_0->taints |= (1U << VAR_1);
}
