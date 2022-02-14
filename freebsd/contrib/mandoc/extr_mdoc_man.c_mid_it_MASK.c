
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 scalar_t__* VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int,char*,scalar_t__) ;

__attribute__((used)) static void
FUNC_3(void)
{
 char VAR_4[24];


 if (0 == VAR_1 || 0 == VAR_0[VAR_1 - 1])
  return;


 if (VAR_2[VAR_1 - 1])
  return;


 FUNC_0(".RS", VAR_3);
 (void)FUNC_2(VAR_4, sizeof(VAR_4), "%dn",
     VAR_0[VAR_1 - 1]);
 FUNC_1(VAR_4);


 VAR_2[VAR_1 - 1] = 1;
}
