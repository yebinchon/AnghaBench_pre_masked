
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intr_irqsrc {int * isrc_count; } ;



__attribute__((used)) static inline void
FUNC_0(struct intr_irqsrc *VAR_0)
{

 VAR_0->isrc_count[1]++;
}
