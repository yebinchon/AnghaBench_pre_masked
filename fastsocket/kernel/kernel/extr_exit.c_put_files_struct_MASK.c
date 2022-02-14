
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fdtable {int dummy; } ;
struct files_struct {struct fdtable fdtab; int count; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct files_struct*) ;
 int VAR_0 ;
 struct fdtable* FUNC_2 (struct files_struct*) ;
 int FUNC_3 (struct fdtable*) ;
 int FUNC_4 (int ,struct files_struct*) ;

void FUNC_5(struct files_struct *VAR_1)
{
 struct fdtable *VAR_2;

 if (FUNC_0(&VAR_1->count)) {
  FUNC_1(VAR_1);






  VAR_2 = FUNC_2(VAR_1);
  if (VAR_2 != &VAR_1->fdtab)
   FUNC_4(VAR_0, VAR_1);
  FUNC_3(VAR_2);
 }
}
