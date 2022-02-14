
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ unw_word ;
struct TYPE_2__ {struct unw_reg_info* reg; } ;
struct unw_state_record {scalar_t__ region_len; scalar_t__ region_start; TYPE_1__ curr; } ;
struct unw_reg_info {int where; unsigned char val; scalar_t__ when; } ;
typedef enum unw_where { ____Placeholder_unw_where } unw_where ;


 scalar_t__ FUNC_0 (int,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (unsigned char,int ) ;
 int FUNC_2 (unsigned char,scalar_t__,struct unw_state_record*) ;

__attribute__((used)) static inline void
FUNC_3 (unsigned char VAR_3, unw_word VAR_4, unsigned char VAR_5,
    unsigned char VAR_6, unsigned char VAR_7,
    struct unw_state_record *VAR_8)
{
  enum unw_where VAR_9 = VAR_2;
  struct unw_reg_info *VAR_10;

  if (! FUNC_2 (VAR_3, VAR_4, VAR_8))
    return;

  if (VAR_6)
    VAR_9 = VAR_0;
  else if (VAR_7 & 0x80)
    VAR_9 = VAR_1;

  VAR_10 = VAR_8->curr.reg + FUNC_1 (VAR_5, 0);
  VAR_10->where = VAR_9;
  VAR_10->when = VAR_8->region_start + FUNC_0 ((int)VAR_4, VAR_8->region_len - 1);
  VAR_10->val = VAR_7 & 0x7f;
}
