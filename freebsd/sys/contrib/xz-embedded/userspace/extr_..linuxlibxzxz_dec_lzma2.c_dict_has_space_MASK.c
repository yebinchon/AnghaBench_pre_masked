
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dictionary {scalar_t__ pos; scalar_t__ limit; } ;



__attribute__((used)) static inline bool FUNC_0(const struct dictionary *VAR_0)
{
 return VAR_0->pos < VAR_0->limit;
}
