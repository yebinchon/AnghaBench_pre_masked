
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u_int ;
typedef int int32_t ;
struct TYPE_3__ {scalar_t__ x_handy; char* x_private; } ;
typedef TYPE_1__ XDR ;



__attribute__((used)) static int32_t *
FUNC_0(XDR *VAR_0, u_int VAR_1)
{
 int32_t *VAR_2 = ((void*)0);

 if (VAR_0->x_handy >= VAR_1) {
  VAR_0->x_handy -= VAR_1;
  VAR_2 = (int32_t *)VAR_0->x_private;
  VAR_0->x_private = (char *)VAR_0->x_private + VAR_1;
 }
 return (VAR_2);
}
