
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct ccport {scalar_t__ admin; int conn_list; } ;
struct ccdata {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 struct ccport* FUNC_3 (struct ccdata*,int ) ;

int
FUNC_4(struct ccdata *VAR_4, u_int VAR_5)
{
 struct ccport *VAR_6;

 if ((VAR_6 = FUNC_3(VAR_4, VAR_5)) == ((void*)0))
  return (VAR_2);
 if (VAR_6->admin != VAR_0)
  return (VAR_3);

 VAR_6->admin = VAR_1;




 while (!FUNC_0(&VAR_6->conn_list))
  FUNC_2(FUNC_1(&VAR_6->conn_list));

 return (0);
}
