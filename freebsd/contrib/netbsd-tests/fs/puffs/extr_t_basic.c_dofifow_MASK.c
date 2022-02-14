
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int,char*,scalar_t__) ;
 int FUNC_3 (char*,int ) ;
 scalar_t__ FUNC_4 (char*) ;

__attribute__((used)) static void *
FUNC_5(void *VAR_1)
{
 int VAR_2 = (int)(uintptr_t)VAR_1;
 char VAR_3[512];

 FUNC_1("writing\n");
 FUNC_3(VAR_3, VAR_0);
 if (FUNC_2(VAR_2, VAR_3, FUNC_4(VAR_3)+1) != FUNC_4(VAR_3)+1)
  FUNC_0("write to fifo");

 return ((void*)0);
}
