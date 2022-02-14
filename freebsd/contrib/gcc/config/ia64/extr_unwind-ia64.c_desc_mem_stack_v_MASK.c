
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ unw_word ;
struct TYPE_4__ {TYPE_1__* reg; } ;
struct unw_state_record {scalar_t__ region_len; scalar_t__ region_start; TYPE_2__ curr; } ;
struct TYPE_3__ {scalar_t__ when; } ;


 scalar_t__ FUNC_0 (int,scalar_t__) ;
 size_t VAR_0 ;

__attribute__((used)) static inline void
FUNC_1 (unw_word VAR_1, struct unw_state_record *VAR_2)
{
  VAR_2->curr.reg[VAR_0].when
    = VAR_2->region_start + FUNC_0 ((int)VAR_1, VAR_2->region_len - 1);
}
