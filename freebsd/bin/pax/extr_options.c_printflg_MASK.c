
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int* VAR_1 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (char,int ) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_3(unsigned int VAR_3)
{
 int VAR_4;
 int VAR_5 = 0;

 (void)FUNC_1(VAR_2,"%s: Invalid combination of options:", VAR_0);
 while ((VAR_4 = FUNC_0(VAR_3)) != 0) {
  VAR_3 = VAR_3 >> VAR_4;
  VAR_5 += VAR_4;
  (void)FUNC_1(VAR_2, " -%c", VAR_1[VAR_5-1]);
 }
 (void)FUNC_2('\n', VAR_2);
}
