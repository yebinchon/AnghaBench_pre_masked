
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,int,int) ;
 int FUNC_4 (char*,char*) ;
 int VAR_3 ;

__attribute__((used)) static void *
FUNC_5(void *VAR_4)
{
 int VAR_5;

 FUNC_1(VAR_3);

 VAR_5 = FUNC_3("/file", VAR_0 | VAR_1, 0777);
 if (VAR_5 == -1)
  FUNC_0("creat");
 FUNC_2(VAR_5);

 while (!VAR_2) {
  if (FUNC_4("/file", "/dir/file") == -1)
   FUNC_0("rename 1");
  if (FUNC_4("/dir/file", "/file") == -1)
   FUNC_0("rename 2");
 }

 return ((void*)0);
}
