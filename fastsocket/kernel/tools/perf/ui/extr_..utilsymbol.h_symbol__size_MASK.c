
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symbol {size_t end; size_t start; } ;



__attribute__((used)) static inline size_t FUNC_0(const struct symbol *VAR_0)
{
 return VAR_0->end - VAR_0->start + 1;
}
