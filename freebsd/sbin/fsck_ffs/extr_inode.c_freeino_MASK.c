
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union dinode {int dummy; } dinode ;
struct inodesc {int id_number; int id_func; int id_type; } ;
typedef int ino_t ;
struct TYPE_2__ {int ino_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (union dinode*,struct inodesc*) ;
 int FUNC_1 (union dinode*) ;
 union dinode* FUNC_2 (int ) ;
 int FUNC_3 (union dinode*) ;
 TYPE_1__* FUNC_4 (int ) ;
 int FUNC_5 (struct inodesc*,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;

void
FUNC_6(ino_t VAR_4)
{
 struct inodesc VAR_5;
 union dinode *VAR_6;

 FUNC_5(&VAR_5, 0, sizeof(struct inodesc));
 VAR_5.id_type = VAR_0;
 VAR_5.id_func = VAR_3;
 VAR_5.id_number = VAR_4;
 VAR_6 = FUNC_2(VAR_4);
 (void)FUNC_0(VAR_6, &VAR_5);
 FUNC_1(VAR_6);
 FUNC_3(VAR_6);
 FUNC_4(VAR_4)->ino_state = VAR_1;
 VAR_2--;
}
