
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_2__ {scalar_t__ dict_size; } ;
typedef TYPE_1__ lzma_options_lzma ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;

extern uint64_t
FUNC_2(const void *VAR_0)
{
 const lzma_options_lzma *const VAR_1 = VAR_0;


 return FUNC_1((uint64_t)(VAR_1->dict_size) * 3, FUNC_0(1) << 20);
}
