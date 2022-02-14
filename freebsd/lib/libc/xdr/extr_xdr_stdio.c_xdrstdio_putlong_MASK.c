
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int32_t ;
typedef int int32_t ;
typedef int bool_t ;
struct TYPE_3__ {scalar_t__ x_private; } ;
typedef TYPE_1__ XDR ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int,int,int *) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static bool_t
FUNC_2(XDR *VAR_2, const long *VAR_3)
{
 int32_t VAR_4 = FUNC_1((u_int32_t)*VAR_3);

 if (FUNC_0(&VAR_4, sizeof(int32_t), 1, (FILE *)VAR_2->x_private) != 1)
  return (VAR_0);
 return (VAR_1);
}
