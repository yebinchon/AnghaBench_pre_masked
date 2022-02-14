
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ lzma_vli ;
struct TYPE_3__ {size_t prealloc; } ;
typedef TYPE_1__ lzma_index ;


 scalar_t__ VAR_0 ;

extern void
FUNC_0(lzma_index *VAR_1, lzma_vli VAR_2)
{
 if (VAR_2 > VAR_0)
  VAR_2 = VAR_0;

 VAR_1->prealloc = (size_t)(VAR_2);
 return;
}
