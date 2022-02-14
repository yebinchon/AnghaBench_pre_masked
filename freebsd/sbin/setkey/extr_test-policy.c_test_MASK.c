
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int getbuf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;


 int VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int,int,int,char*,int*) ;
 char* FUNC_4 (char*,int *) ;
 int FUNC_5 () ;
 int FUNC_6 (char*,int ,int) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,...) ;
 scalar_t__ FUNC_9 (int,int,int,char*,int ) ;
 int FUNC_10 (int,int ,int ) ;

int FUNC_11(char *VAR_5, int VAR_6)
{
 int VAR_7, VAR_8, VAR_9;
 int VAR_10;
 char VAR_11[1024];

 switch (VAR_6) {
 case 129:
  VAR_8 = VAR_0;
  VAR_9 = VAR_3;
  break;
 case 128:
  VAR_8 = VAR_1;
  VAR_9 = VAR_2;
  break;
 }

 if ((VAR_7 = FUNC_10(VAR_6, VAR_4, 0)) < 0)
  FUNC_7("socket");

 if (FUNC_9(VAR_7, VAR_8, VAR_9, VAR_5, FUNC_0(VAR_5)) < 0)
  FUNC_7("setsockopt");

 VAR_10 = sizeof(VAR_11);
 FUNC_6(VAR_11, 0, sizeof(VAR_11));
 if (FUNC_3(VAR_7, VAR_8, VAR_9, VAR_11, &VAR_10) < 0)
  FUNC_7("getsockopt");

    {
 char *VAR_12 = ((void*)0);

 FUNC_8("\tgetlen:%d\n", VAR_10);

 if ((VAR_12 = FUNC_4(VAR_11, ((void*)0))) == ((void*)0))
  FUNC_5();
 else
  FUNC_8("\t[%s]\n", VAR_12);

 FUNC_2(VAR_12);
    }

 FUNC_1 (VAR_7);
}
