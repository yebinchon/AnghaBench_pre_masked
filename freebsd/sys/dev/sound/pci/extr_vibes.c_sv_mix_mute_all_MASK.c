
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sc_info {int dummy; } ;
typedef size_t int32_t ;
struct TYPE_2__ {scalar_t__ reg; } ;


 size_t VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (struct sc_info*,size_t,int ,int ) ;

__attribute__((used)) static void
FUNC_1(struct sc_info *VAR_2)
{
 int32_t VAR_3;
 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (VAR_1[VAR_3].reg) FUNC_0(VAR_2, VAR_3, 0, 0);
 }
}
