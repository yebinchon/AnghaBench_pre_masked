
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char**) ;
 int FUNC_3 (char*,...) ;
 char** VAR_2 ;
 char* FUNC_4 (char*) ;
 int FUNC_5 (char*,int ) ;

FUNC_6()
{
 int VAR_3;
 char *VAR_4;

 for (VAR_3 = 0; VAR_3 < FUNC_2(VAR_2); VAR_3++) {
  FUNC_3("* requests:[%s]\n", VAR_2[VAR_3]);
  if ((VAR_4 = FUNC_4(VAR_2[VAR_3])) == ((void*)0))
   continue;
  FUNC_3("\tsetlen:%d\n", FUNC_0(VAR_4));

  FUNC_3("\tPF_INET:\n");
  FUNC_5(VAR_4, VAR_0);

  FUNC_3("\tPF_INET6:\n");
  FUNC_5(VAR_4, VAR_1);
  FUNC_1(VAR_4);
 }
}
