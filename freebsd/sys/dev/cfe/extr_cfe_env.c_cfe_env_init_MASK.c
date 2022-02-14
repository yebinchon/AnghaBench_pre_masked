
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int val ;
typedef int name ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int,char*,int,char*,int) ;
 int VAR_3 ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,char*,char*) ;

void
FUNC_4(void)
{
 int VAR_4;
 char VAR_5[VAR_1], VAR_6[VAR_2];

 FUNC_1(VAR_3, VAR_0);

 VAR_4 = 0;
 while (1) {
  if (FUNC_0(VAR_4, VAR_5, sizeof(VAR_5), VAR_6, sizeof(VAR_6)) != 0)
   break;

  if (FUNC_2(VAR_5, VAR_6) != 0) {
   FUNC_3("No space to store CFE env: \"%s=%s\"\n",
    VAR_5, VAR_6);
  }
  ++VAR_4;
 }
}
