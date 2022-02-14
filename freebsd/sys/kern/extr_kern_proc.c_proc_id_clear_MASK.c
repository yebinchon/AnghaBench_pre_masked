
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pid_t ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int * VAR_0 ;
 int VAR_1 ;

void
FUNC_6(int VAR_2, pid_t VAR_3)
{

 FUNC_0(VAR_2 >= 0 && VAR_2 < FUNC_5(VAR_0),
     ("invalid type %d\n", VAR_2));
 FUNC_3(&VAR_1);
 FUNC_0(FUNC_2(VAR_0[VAR_2], VAR_3) != 0,
     ("bit %d not set in %d\n", VAR_3, VAR_2));
 FUNC_1(VAR_0[VAR_2], VAR_3);
 FUNC_4(&VAR_1);
}
