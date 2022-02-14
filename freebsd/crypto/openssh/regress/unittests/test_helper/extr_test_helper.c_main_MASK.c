
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int,char**,char*) ;
 int VAR_3 ;
 int FUNC_3 (char*,...) ;
 int VAR_4 ;
 int FUNC_4 (int ,int *,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 char* FUNC_5 (char*) ;
 char* FUNC_6 (char*,char) ;
 int VAR_7 ;
 int FUNC_7 () ;
 int VAR_8 ;

int
FUNC_8(int VAR_9, char **VAR_10)
{
 int VAR_11;


 if (VAR_1 == ((void*)0)) {
  VAR_1 = FUNC_6(VAR_10[0], '/');
  if (VAR_1 == ((void*)0) || VAR_1[1] == '\0')
   VAR_1 = VAR_10[0];
  else
   VAR_1++;
  if ((VAR_1 = FUNC_5(VAR_1)) == ((void*)0)) {
   FUNC_1(VAR_5, "strdup failed\n");
   FUNC_0(1);
  }
 }

 while ((VAR_11 = FUNC_2(VAR_9, VAR_10, "vqd:")) != -1) {
  switch (VAR_11) {
  case 'd':
   VAR_2 = VAR_3;
   break;
  case 'q':
   VAR_8 = 0;
   VAR_4 = 1;
   break;
  case 'v':
   VAR_8 = 1;
   VAR_4 = 0;
   break;
  default:
   FUNC_1(VAR_5, "Unrecognised command line option\n");
   FUNC_1(VAR_5, "Usage: %s [-v]\n", VAR_1);
   FUNC_0(1);
  }
 }
 FUNC_4(VAR_6, ((void*)0), VAR_0, 0);
 if (!VAR_4)
  FUNC_3("%s: ", VAR_1);
 if (VAR_8)
  FUNC_3("\n");

 FUNC_7();

 if (!VAR_4)
  FUNC_3(" %u tests ok\n", VAR_7);
 return 0;
}
