
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct ccport {scalar_t__ admin; } ;
struct ccdata {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct ccport* FUNC_0 (struct ccdata*,int ) ;

int
FUNC_1(struct ccdata *VAR_2, u_int VAR_3, int *VAR_4)
{
 struct ccport *VAR_5;

 if ((VAR_5 = FUNC_0(VAR_2, VAR_3)) == ((void*)0))
  return (VAR_1);
 if (VAR_5->admin == VAR_0)
  *VAR_4 = 1;
 else
  *VAR_4 = 0;
 return (0);
}
