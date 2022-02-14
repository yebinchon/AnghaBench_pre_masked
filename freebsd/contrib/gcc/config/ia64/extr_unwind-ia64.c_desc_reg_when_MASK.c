
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ unw_word ;
struct TYPE_2__ {struct unw_reg_info* reg; } ;
struct unw_state_record {scalar_t__ region_len; scalar_t__ region_start; TYPE_1__ curr; } ;
struct unw_reg_info {scalar_t__ where; scalar_t__ when; } ;


 scalar_t__ FUNC_0 (int,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static inline void
FUNC_1 (unsigned char VAR_2, unw_word VAR_3, struct unw_state_record *VAR_4)
{
  struct unw_reg_info *VAR_5 = VAR_4->curr.reg + VAR_2;

  if (VAR_5->where == VAR_1)
    VAR_5->where = VAR_0;
  VAR_5->when = VAR_4->region_start + FUNC_0 ((int)VAR_3, VAR_4->region_len - 1);
}
