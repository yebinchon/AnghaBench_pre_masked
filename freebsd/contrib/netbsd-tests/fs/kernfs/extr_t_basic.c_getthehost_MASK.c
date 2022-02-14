
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int*,int,char*,size_t*,int *,int ) ;

__attribute__((used)) static char *
FUNC_2(void)
{
 static char VAR_2[8192];
 int VAR_3[2];
 size_t VAR_4;

 VAR_3[0] = VAR_0;
 VAR_3[1] = VAR_1;
 VAR_4 = sizeof(VAR_2);
 if (FUNC_1(VAR_3, 2, VAR_2, &VAR_4, ((void*)0), 0) == -1)
  FUNC_0("sysctl gethostname");

 return VAR_2;
}
