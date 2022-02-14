
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u_int ;
typedef int int32_t ;
typedef void* caddr_t ;
struct TYPE_3__ {scalar_t__ x_op; int * x_private; int x_handy; void* x_base; } ;
typedef TYPE_1__ XDR ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (scalar_t__) ;

__attribute__((used)) static int32_t *
FUNC_2(XDR *VAR_1, u_int VAR_2)
{
 if (VAR_2 == 0) {
  return (((void*)0));
 }
 if (VAR_1->x_op != VAR_0) {
  return (((void*)0));
 }
 if (VAR_2 < (u_int)(uintptr_t)VAR_1->x_base) {

  VAR_1->x_handy += VAR_2;
  return ((int32_t *) VAR_1->x_private);
 } else {

  if (VAR_1->x_private)
   FUNC_0(VAR_1->x_private);
  if ((VAR_1->x_private = (caddr_t) FUNC_1(VAR_2)) == ((void*)0)) {
   VAR_1->x_base = 0;
   return (((void*)0));
  }
  VAR_1->x_base = (caddr_t)(uintptr_t)VAR_2;
  VAR_1->x_handy += VAR_2;
  return ((int32_t *) VAR_1->x_private);
 }
}
