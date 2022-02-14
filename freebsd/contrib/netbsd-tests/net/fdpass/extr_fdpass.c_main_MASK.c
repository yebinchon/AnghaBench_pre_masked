
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int o ;
typedef int i ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int VAR_5 ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (char*,char*,char*,char*,char*,char*,int *) ;
 int FUNC_4 () ;
 int FUNC_5 (int,char**,char*) ;
 int FUNC_6 () ;
 int FUNC_7 (char*,int,int) ;
 char* VAR_6 ;
 int FUNC_8 (int) ;
 int FUNC_9 (int,int) ;
 int FUNC_10 (char*,int,char*,int) ;
 int FUNC_11 (int ,int ,int ,int*) ;
 int FUNC_12 (char*) ;
 int FUNC_13 () ;
 int FUNC_14 (int*) ;
 int FUNC_15 (int,char*,int) ;

int
FUNC_16(int VAR_7, char *VAR_8[])
{
 int VAR_9[2], VAR_10, VAR_11, VAR_12, VAR_13;
 char VAR_14[1024], *VAR_15;

 VAR_15 = ((void*)0);
 VAR_9[0] = VAR_9[1] = -1;
 VAR_13 = 0;

 while ((VAR_12 = FUNC_5(VAR_7, VAR_8, "di:o:p:")) != -1)
  switch (VAR_12) {
  case 'd':
   VAR_5++;
   break;
  case 'i':
   VAR_9[0] = FUNC_0(VAR_6);
   break;
  case 'o':
   VAR_9[1] = FUNC_0(VAR_6);
   break;
  case 'p':
   VAR_15 = VAR_6;
   break;
  default:
   FUNC_13();
  }

 if ((VAR_9[0] == -1 && VAR_9[1] != -1) || (VAR_9[0] != -1 && VAR_9[1] == -1))
  FUNC_13();

 if (VAR_9[0] == -1) {
  if (FUNC_11(VAR_0, VAR_4, 0, VAR_9) == -1)
   FUNC_2(1, "socketpair");
 } else
  goto recv;

 switch (FUNC_4()) {
 case -1:
  FUNC_2(1, "fork");
 default:
  VAR_10 = FUNC_7("foo", VAR_2|VAR_1|VAR_3, 0666);
  if (VAR_10 == -1)
   FUNC_2(1, "open");
  FUNC_9(VAR_9[0], VAR_10);
  FUNC_14(&VAR_11);
  return 0;
 case 0:
  if (VAR_15 != ((void*)0)) {
   char VAR_16[64], VAR_17[64];
   FUNC_10(VAR_16, sizeof(VAR_16), "%d", VAR_9[0]);
   FUNC_10(VAR_17, sizeof(VAR_17), "%d", VAR_9[1]);
   FUNC_3(VAR_15, VAR_15, "-i", VAR_16, "-o", VAR_17, ((void*)0));
   FUNC_2(1, "execlp");
  }
 recv:
  VAR_10 = FUNC_8(VAR_9[1]);
  if (VAR_13) {
   FUNC_10(VAR_14, sizeof(VAR_14), "ls -l /proc/%d/fd",
       FUNC_6());
   FUNC_12(VAR_14);
  }
  if (FUNC_15(VAR_10, "foo\n", 4) == -1)
   FUNC_2(1, "write");
  FUNC_1(VAR_10);
  return 0;
 }
}
