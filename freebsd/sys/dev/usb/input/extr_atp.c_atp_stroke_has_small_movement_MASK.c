
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u_int ;
typedef int boolean_t ;
struct TYPE_3__ {int instantaneous_dy; int instantaneous_dx; } ;
typedef TYPE_1__ atp_stroke_t ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static boolean_t
FUNC_1(const atp_stroke_t *VAR_1)
{
 return (((u_int)FUNC_0(VAR_1->instantaneous_dx) <=
   VAR_0) &&
  ((u_int)FUNC_0(VAR_1->instantaneous_dy) <=
   VAR_0));
}
