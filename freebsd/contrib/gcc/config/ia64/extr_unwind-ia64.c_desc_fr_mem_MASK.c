
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ reg; } ;
struct unw_state_record {int any_spills; scalar_t__ region_len; scalar_t__ region_start; TYPE_1__ curr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,int ,scalar_t__,int ) ;

__attribute__((used)) static inline void
FUNC_1 (unsigned char VAR_2, struct unw_state_record *VAR_3)
{
  int VAR_4;

  for (VAR_4 = 0; VAR_4 < 4; ++VAR_4)
    {
      if ((VAR_2 & 1) != 0)
 {
   FUNC_0 (VAR_3->curr.reg + VAR_0 + VAR_4, VAR_1,
     VAR_3->region_start + VAR_3->region_len - 1, 0);
   VAR_3->any_spills = 1;
 }
      VAR_2 >>= 1;
    }
}
