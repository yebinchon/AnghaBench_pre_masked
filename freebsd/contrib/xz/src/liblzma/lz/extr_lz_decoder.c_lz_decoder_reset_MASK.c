
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* buf; int size; int need_reset; scalar_t__ full; scalar_t__ pos; } ;
struct TYPE_5__ {TYPE_1__ dict; } ;
typedef TYPE_2__ lzma_coder ;



__attribute__((used)) static void
FUNC_0(lzma_coder *VAR_0)
{
 VAR_0->dict.pos = 0;
 VAR_0->dict.full = 0;
 VAR_0->dict.buf[VAR_0->dict.size - 1] = '\0';
 VAR_0->dict.need_reset = 0;
 return;
}
