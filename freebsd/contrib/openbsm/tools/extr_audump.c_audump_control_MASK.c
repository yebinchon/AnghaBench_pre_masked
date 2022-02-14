
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (long,int,char*) ;
 scalar_t__ FUNC_1 (char*,long*) ;
 int FUNC_2 (int,char*,...) ;
 int FUNC_3 (int,char*,int) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (int*,int *,size_t*) ;
 int FUNC_6 (size_t*) ;
 int FUNC_7 (char*,int) ;
 int FUNC_8 (char*,int) ;
 int FUNC_9 (int*) ;
 int FUNC_10 (char*,int) ;
 int FUNC_11 (char*,int) ;
 int FUNC_12 (int*) ;
 int FUNC_13 (char*,...) ;
 int FUNC_14 () ;

__attribute__((used)) static void
FUNC_15(void)
{
 char VAR_1[VAR_0], VAR_2[VAR_0];
 int VAR_3, VAR_4, VAR_5;
 long VAR_6;
 time_t VAR_7;
 size_t VAR_8;

 VAR_3 = FUNC_7(VAR_1, VAR_0);
 if (VAR_3 == -2)
  FUNC_2(-1, "getacflg");
 if (VAR_3 != 0)
  FUNC_3(-1, "getacflg: %d", VAR_3);

 FUNC_13("flags:%s\n", VAR_1);

 VAR_3 = FUNC_9(&VAR_4);
 if (VAR_3 == -2)
  FUNC_2(-1, "getacmin");
 if (VAR_3 != 0)
  FUNC_3(-1, "getacmin: %d", VAR_3);

 FUNC_13("min:%d\n", VAR_4);

 VAR_3 = FUNC_10(VAR_1, VAR_0);
 if (VAR_3 == -2)
  FUNC_2(-1, "getacna");
 if (VAR_3 != 0)
  FUNC_3(-1, "getacna: %d", VAR_3);

 FUNC_13("naflags:%s\n", VAR_1);

 FUNC_14();
 do {
  VAR_3 = FUNC_4(VAR_1, VAR_0);
  if (VAR_3 == -1)
   break;
  if (VAR_3 == -2)
   FUNC_2(-1, "getacdir");
  if (VAR_3 != 0)
   FUNC_3(-1, "getacdir: %d", VAR_3);
  FUNC_13("dir:%s\n", VAR_1);

 } while (VAR_3 == 0);

 VAR_3 = FUNC_11(VAR_1, VAR_0);
 if (VAR_3 != 0)
  FUNC_2(-1, "getacpol");
 if (FUNC_1(VAR_1, &VAR_6) < 0)
  FUNC_2(-1, "au_strtopol");
 if (FUNC_0(VAR_6, VAR_0, VAR_2) < 0)
  FUNC_2(-1, "au_poltostr");
 FUNC_13("policy:%s\n", VAR_2);

 VAR_3 = FUNC_6(&VAR_8);
 if (VAR_3 == -2)
  FUNC_2(-1, "getacfilesz");
 if (VAR_3 != 0)
  FUNC_2(-1, "getacfilesz: %d", VAR_3);

 FUNC_13("filesz:%ldB\n", VAR_8);

 VAR_3 = FUNC_12(&VAR_5);
 if (VAR_3 == -2)
  FUNC_2(-1, "getacqsize");
 if (VAR_3 != 0)
  FUNC_2(-1, "getacqzize: %d", VAR_3);

 FUNC_13("qsize:%d\n", VAR_5);

 VAR_3 = FUNC_8(VAR_1, VAR_0);
 if (VAR_3 == -2)
  FUNC_2(-1, "getachost");
 if (VAR_3 == -3)
  FUNC_2(-1, "getachost: %d", VAR_3);
 if (VAR_3 == 0 && VAR_3 != 1)
  FUNC_13("host:%s\n", VAR_1);

 VAR_3 = FUNC_5(&VAR_4, &VAR_7, &VAR_8);
 if (VAR_3 == -2)
  FUNC_2(-1, "getacexpire");
 if (VAR_3 == -1)
  FUNC_2(-1, "getacexpire: %d", VAR_3);
 if (VAR_3 == 0 && VAR_3 != 1)
  FUNC_13("expire-after:%ldB  %s %lds\n", VAR_8,
      VAR_4 ? "AND" : "OR", VAR_7);
}
