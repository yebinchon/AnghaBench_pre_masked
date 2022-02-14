
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_xprt {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int FUNC_0 (char*,char*,char*,int*) ;
 int FUNC_1 (struct svc_xprt*) ;
 struct svc_xprt* FUNC_2 (int *,char*,int ,int) ;
 int FUNC_3 (struct svc_xprt*) ;

__attribute__((used)) static ssize_t FUNC_4(char *VAR_5)
{
 struct svc_xprt *VAR_6;
 char VAR_7[16];
 int VAR_8;

 if (FUNC_0(&VAR_5[1], "%15s %4u", VAR_7, &VAR_8) != 2)
  return -VAR_1;

 if (VAR_8 < 1 || VAR_8 > VAR_3 || VAR_4 == ((void*)0))
  return -VAR_1;

 VAR_6 = FUNC_2(VAR_4, VAR_7, VAR_0, VAR_8);
 if (VAR_6 == ((void*)0))
  return -VAR_2;

 FUNC_1(VAR_6);
 FUNC_3(VAR_6);
 return 0;
}
