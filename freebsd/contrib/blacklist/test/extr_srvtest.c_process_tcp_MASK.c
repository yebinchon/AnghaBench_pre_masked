
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;
typedef int buffer ;


 int VAR_0 ;
 int FUNC_0 (int,int,char*) ;
 int FUNC_1 (int ,int,int,char*) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int ) ;
 char* FUNC_4 () ;
 int FUNC_5 (char*,int ,int) ;
 int FUNC_6 (char*,char*,int,char*) ;
 int FUNC_7 (int,char*,int) ;

__attribute__((used)) static void
FUNC_8(int VAR_1)
{
 ssize_t VAR_2;
 char VAR_3[256];

 FUNC_5(VAR_3, 0, sizeof(VAR_3));

 if ((VAR_2 = FUNC_7(VAR_1, VAR_3, sizeof(VAR_3))) == -1)
  FUNC_2(1, "read");
 VAR_3[sizeof(VAR_3) - 1] = '\0';
 FUNC_6("%s: sending %d %s\n", FUNC_4(), VAR_1, VAR_3);



 FUNC_0(1, VAR_1, VAR_3);

 FUNC_3(0);
}
