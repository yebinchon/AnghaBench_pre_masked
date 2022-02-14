
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ lc; scalar_t__ lp; scalar_t__ pb; } ;
typedef TYPE_1__ lzma_options_lzma ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static inline bool
FUNC_0(const lzma_options_lzma *VAR_2)
{
 return VAR_2->lc <= VAR_0 && VAR_2->lp <= VAR_0
   && VAR_2->lc + VAR_2->lp <= VAR_0
   && VAR_2->pb <= VAR_1;
}
