
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct atm_port_info {int dummy; } ;
struct ccport {struct atm_port_info param; } ;
struct ccdata {int dummy; } ;


 int VAR_0 ;
 struct ccport* FUNC_0 (struct ccdata*,int ) ;

int
FUNC_1(struct ccdata *VAR_1, u_int VAR_2,
    struct atm_port_info *VAR_3)
{
 struct ccport *VAR_4;

 if ((VAR_4 = FUNC_0(VAR_1, VAR_2)) == ((void*)0))
  return (VAR_0);

 *VAR_3 = VAR_4->param;
 return (0);
}
