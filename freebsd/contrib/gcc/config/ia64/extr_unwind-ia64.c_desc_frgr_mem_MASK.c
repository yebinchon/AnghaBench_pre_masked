
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int unw_word ;
struct TYPE_2__ {int reg; } ;
struct unw_state_record {int any_spills; scalar_t__ region_len; scalar_t__ region_start; TYPE_1__ curr; } ;
typedef enum unw_register_index { ____Placeholder_unw_register_index } unw_register_index ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int ,scalar_t__,int ) ;

__attribute__((used)) static inline void
FUNC_1 (unsigned char VAR_4, unw_word VAR_5,
        struct unw_state_record *VAR_6)
{
  int VAR_7;

  for (VAR_7 = 0; VAR_7 < 4; ++VAR_7)
    {
      if ((VAR_4 & 1) != 0)
 {
   FUNC_0 (VAR_6->curr.reg + VAR_2 + VAR_7, VAR_3,
     VAR_6->region_start + VAR_6->region_len - 1, 0);
   VAR_6->any_spills = 1;
 }
      VAR_4 >>= 1;
    }
  for (VAR_7 = 0; VAR_7 < 20; ++VAR_7)
    {
      if ((VAR_5 & 1) != 0)
 {
   enum unw_register_index VAR_8 = VAR_7 < 4 ? VAR_1 : VAR_0 - 4;
   FUNC_0 (VAR_6->curr.reg + VAR_8 + VAR_7, VAR_3,
     VAR_6->region_start + VAR_6->region_len - 1, 0);
   VAR_6->any_spills = 1;
 }
      VAR_5 >>= 1;
    }
}
