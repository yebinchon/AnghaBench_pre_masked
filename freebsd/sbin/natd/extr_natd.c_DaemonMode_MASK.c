
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ,char*) ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 () ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_5(void)
{
 FILE* VAR_2;

 FUNC_0 (0, 0);
 VAR_0 = 1;

 VAR_2 = FUNC_2 (VAR_1, "w");
 if (VAR_2) {

  FUNC_3 (VAR_2, "%d\n", FUNC_4 ());
  FUNC_1 (VAR_2);
 }
}
