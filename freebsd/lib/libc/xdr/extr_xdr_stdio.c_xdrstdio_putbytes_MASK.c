
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u_int ;
typedef int bool_t ;
struct TYPE_3__ {scalar_t__ x_private; } ;
typedef TYPE_1__ XDR ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*,size_t,int,int *) ;

__attribute__((used)) static bool_t
FUNC_1(XDR *VAR_2, const char *VAR_3, u_int VAR_4)
{

 if ((VAR_4 != 0) && (FUNC_0(VAR_3, (size_t)VAR_4, 1,
     (FILE *)VAR_2->x_private) != 1))
  return (VAR_0);
 return (VAR_1);
}
