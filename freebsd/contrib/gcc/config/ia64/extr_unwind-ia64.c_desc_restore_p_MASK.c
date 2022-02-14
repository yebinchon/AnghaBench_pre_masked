
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ unw_word ;
struct TYPE_2__ {struct unw_reg_info* reg; } ;
struct unw_state_record {scalar_t__ region_len; scalar_t__ region_start; TYPE_1__ curr; } ;
struct unw_reg_info {scalar_t__ val; scalar_t__ when; int where; } ;


 scalar_t__ FUNC_0 (int,scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (unsigned char,int ) ;
 int FUNC_2 (unsigned char,scalar_t__,struct unw_state_record*) ;

__attribute__((used)) static inline void
FUNC_3 (unsigned char VAR_1, unw_word VAR_2, unsigned char VAR_3,
  struct unw_state_record *VAR_4)
{
  struct unw_reg_info *VAR_5;

  if (! FUNC_2 (VAR_1, VAR_2, VAR_4))
    return;

  VAR_5 = VAR_4->curr.reg + FUNC_1 (VAR_3, 0);
  VAR_5->where = VAR_0;
  VAR_5->when = VAR_4->region_start + FUNC_0 ((int)VAR_2, VAR_4->region_len - 1);
  VAR_5->val = 0;
}
