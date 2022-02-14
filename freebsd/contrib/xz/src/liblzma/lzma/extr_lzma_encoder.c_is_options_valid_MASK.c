
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ nice_len; scalar_t__ mode; } ;
typedef TYPE_1__ lzma_options_lzma ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_1__ const*) ;

__attribute__((used)) static bool
FUNC_1(const lzma_options_lzma *VAR_4)
{


 return FUNC_0(VAR_4)
   && VAR_4->nice_len >= VAR_3
   && VAR_4->nice_len <= VAR_2
   && (VAR_4->mode == VAR_0
    || VAR_4->mode == VAR_1);
}
