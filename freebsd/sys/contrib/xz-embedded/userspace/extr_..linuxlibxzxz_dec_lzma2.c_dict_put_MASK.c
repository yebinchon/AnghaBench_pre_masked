
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct dictionary {scalar_t__ pos; scalar_t__ full; int * buf; } ;



__attribute__((used)) static inline void FUNC_0(struct dictionary *VAR_0, uint8_t VAR_1)
{
 VAR_0->buf[VAR_0->pos++] = VAR_1;

 if (VAR_0->full < VAR_0->pos)
  VAR_0->full = VAR_0->pos;
}
