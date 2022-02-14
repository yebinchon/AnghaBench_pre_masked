
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int unw_word ;
struct TYPE_2__ {scalar_t__ reg; } ;
struct unw_state_record {scalar_t__ region_len; scalar_t__ region_start; TYPE_1__ curr; } ;


 scalar_t__ FUNC_0 (int,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__,int ,scalar_t__,int) ;

__attribute__((used)) static inline void
FUNC_2 (unw_word VAR_2, unw_word VAR_3, struct unw_state_record *VAR_4)
{
  FUNC_1 (VAR_4->curr.reg + VAR_0, VAR_1,
    VAR_4->region_start + FUNC_0 ((int)VAR_2, VAR_4->region_len - 1), 16*VAR_3);
}
