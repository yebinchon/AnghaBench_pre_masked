
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {scalar_t__ pos; scalar_t__ limit; scalar_t__ full; int * buf; } ;
typedef TYPE_1__ lzma_dict ;


 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static inline bool
FUNC_1(lzma_dict *VAR_0, uint8_t VAR_1)
{
 if (FUNC_0(VAR_0->pos == VAR_0->limit))
  return 1;

 VAR_0->buf[VAR_0->pos++] = VAR_1;

 if (VAR_0->pos > VAR_0->full)
  VAR_0->full = VAR_0->pos;

 return 0;
}
