
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int*,int*,int *,int *,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,char*,size_t) ;
 char* FUNC_5 (int) ;

int
FUNC_6(int *VAR_1, int *VAR_2, char *VAR_3, size_t VAR_4)
{

 char *VAR_5;
 int VAR_6;

 VAR_6 = FUNC_2(VAR_1, VAR_2, ((void*)0), ((void*)0), ((void*)0));
 if (VAR_6 < 0) {
  FUNC_0("openpty: %.100s", FUNC_3(VAR_0));
  return 0;
 }
 VAR_5 = FUNC_5(*VAR_2);
 if (!VAR_5)
  FUNC_1("openpty returns device for which ttyname fails.");

 FUNC_4(VAR_3, VAR_5, VAR_4);
 return 1;
}
