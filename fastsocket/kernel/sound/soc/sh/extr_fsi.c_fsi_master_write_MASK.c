
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__,scalar_t__) ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static int FUNC_1(u32 VAR_3, u32 VAR_4)
{
 if ((VAR_3 < VAR_1) ||
     (VAR_3 > VAR_0))
  return -1;

 return FUNC_0((u32)(VAR_2->base + VAR_3), VAR_4);
}
