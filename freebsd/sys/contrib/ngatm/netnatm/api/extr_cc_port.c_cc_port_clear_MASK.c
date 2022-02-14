
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct ccport {int addr_list; } ;
struct ccdata {int dummy; } ;
struct ccaddr {int dummy; } ;


 int FUNC_0 (struct ccaddr*) ;
 int VAR_0 ;
 struct ccaddr* FUNC_1 (int *) ;
 int FUNC_2 (int *,struct ccaddr*,int ) ;
 struct ccport* FUNC_3 (struct ccdata*,int ) ;
 int VAR_1 ;

int
FUNC_4(struct ccdata *VAR_2, u_int VAR_3)
{
 struct ccaddr *VAR_4;
 struct ccport *VAR_5;

 if ((VAR_5 = FUNC_3(VAR_2, VAR_3)) == ((void*)0))
  return (VAR_0);

 while ((VAR_4 = FUNC_1(&VAR_5->addr_list)) != ((void*)0)) {
  FUNC_2(&VAR_5->addr_list, VAR_4, VAR_1);
  FUNC_0(VAR_4);
 }
 return (0);
}
