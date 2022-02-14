
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (char*) ;
 int VAR_1 ;

__attribute__((used)) static void *
FUNC_4(void *VAR_2)
{

 FUNC_1(VAR_1);

 while (!VAR_0) {
  if (FUNC_2("rename.test1", 0777) == -1)
   FUNC_0("mkdir");
  FUNC_3("rename.test1");
 }

 return ((void*)0);
}
