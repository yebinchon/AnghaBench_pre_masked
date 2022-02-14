
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct calendar {int dummy; } ;
struct TYPE_3__ {scalar_t__ hi; int lo; } ;
typedef TYPE_1__ ntpcal_split ;
typedef scalar_t__ int32_t ;


 scalar_t__ FUNC_0 (struct calendar*,int ) ;
 int FUNC_1 (struct calendar*,scalar_t__) ;

int
FUNC_2(
 struct calendar *VAR_0,
 const ntpcal_split *VAR_1,
 int32_t VAR_2
 )
{
 VAR_2 += FUNC_0(VAR_0, VAR_1->lo);
 return FUNC_1(VAR_0, VAR_1->hi + VAR_2);
}
