
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct dictionary {int pos; scalar_t__ full; int* buf; scalar_t__ end; } ;



__attribute__((used)) static inline uint32_t FUNC_0(const struct dictionary *VAR_0, uint32_t VAR_1)
{
 size_t VAR_2 = VAR_0->pos - VAR_1 - 1;

 if (VAR_1 >= VAR_0->pos)
  VAR_2 += VAR_0->end;

 return VAR_0->full > 0 ? VAR_0->buf[VAR_2] : 0;
}
