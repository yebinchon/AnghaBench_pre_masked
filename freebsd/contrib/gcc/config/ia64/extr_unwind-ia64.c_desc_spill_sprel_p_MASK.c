
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int unw_word ;
struct TYPE_2__ {struct unw_reg_info* reg; } ;
struct unw_state_record {scalar_t__ region_len; scalar_t__ region_start; TYPE_1__ curr; } ;
struct unw_reg_info {int val; scalar_t__ when; int where; } ;


 scalar_t__ FUNC_0 (int,scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (unsigned char,int) ;
 int FUNC_2 (unsigned char,int,struct unw_state_record*) ;

__attribute__((used)) static inline void
FUNC_3 (unsigned char VAR_1, unw_word VAR_2, unsigned char VAR_3,
      unw_word VAR_4, struct unw_state_record *VAR_5)
{
  struct unw_reg_info *VAR_6;

  if (! FUNC_2 (VAR_1, VAR_2, VAR_5))
    return;

  VAR_6 = VAR_5->curr.reg + FUNC_1 (VAR_3, 1);
  VAR_6->where = VAR_0;
  VAR_6->when = VAR_5->region_start + FUNC_0 ((int)VAR_2, VAR_5->region_len - 1);
  VAR_6->val = 4*VAR_4;
}
