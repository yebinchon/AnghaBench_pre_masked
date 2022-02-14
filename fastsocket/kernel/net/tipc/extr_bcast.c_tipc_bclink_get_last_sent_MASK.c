
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ next_out; scalar_t__ next_out_no; } ;


 TYPE_1__* VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;

u32 FUNC_2(void)
{
 u32 VAR_1 = FUNC_1(VAR_0->next_out_no - 1);

 if (VAR_0->next_out)
  VAR_1 = FUNC_1(FUNC_0(VAR_0->next_out) - 1);
 return VAR_1;
}
