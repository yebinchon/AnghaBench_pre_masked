
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vint64 ;
struct calendar {int dummy; } ;
struct TYPE_3__ {scalar_t__ hi; int lo; } ;
typedef TYPE_1__ ntpcal_split ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct calendar*,int ) ;
 TYPE_1__ FUNC_1 (int const*) ;
 int FUNC_2 (struct calendar*,scalar_t__) ;

int
FUNC_3(
 struct calendar *VAR_1,
 const vint64 *VAR_2
 )
{
 ntpcal_split VAR_3;

 VAR_3 = FUNC_1(VAR_2);
 VAR_3.hi += FUNC_0(VAR_1, VAR_3.lo);

 return FUNC_2(VAR_1, VAR_3.hi + VAR_0);
}
