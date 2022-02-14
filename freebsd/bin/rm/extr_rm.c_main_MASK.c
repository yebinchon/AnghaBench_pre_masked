
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (char**) ;
 int FUNC_1 (char**) ;
 int FUNC_2 (char**) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int) ;
 int VAR_7 ;
 int FUNC_4 () ;
 int FUNC_5 (int,char**,char*) ;
 int VAR_8 ;
 int FUNC_6 (int ) ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_7 (char**) ;
 int FUNC_8 (char**) ;
 int FUNC_9 (int ,char*) ;
 int VAR_11 ;
 int FUNC_10 (int ,int ) ;
 int VAR_12 ;
 scalar_t__ FUNC_11 (char*,char*) ;
 char* FUNC_12 (char*,char) ;
 int VAR_13 ;
 int FUNC_13 () ;
 int VAR_14 ;
 int VAR_15 ;

int
FUNC_14(int VAR_16, char *VAR_17[])
{
 int VAR_18;
 char *VAR_19;

 (void)FUNC_9(VAR_1, "");






 if ((VAR_19 = FUNC_12(VAR_17[0], '/')) == ((void*)0))
  VAR_19 = VAR_17[0];
 else
  ++VAR_19;
 if (FUNC_11(VAR_19, "unlink") == 0) {
  if (VAR_16 == 2)
   FUNC_7(&VAR_17[1]);
  else if (VAR_16 == 3 && FUNC_11(VAR_17[1], "--") == 0)
   FUNC_7(&VAR_17[2]);
  else
   FUNC_13();
  FUNC_3(VAR_6);
 }

 VAR_10 = VAR_15 = 0;
 while ((VAR_18 = FUNC_5(VAR_16, VAR_17, "dfiIPRrvWx")) != -1)
  switch(VAR_18) {
  case 'd':
   VAR_5 = 1;
   break;
  case 'f':
   VAR_7 = 1;
   VAR_8 = 0;
   break;
  case 'i':
   VAR_7 = 0;
   VAR_8 = 1;
   break;
  case 'I':
   VAR_0 = 1;
   break;
  case 'P':

   break;
  case 'R':
  case 'r':
   VAR_10 = 1;
   break;
  case 'v':
   VAR_14 = 1;
   break;
  case 'W':
   VAR_4 = 1;
   break;
  case 'x':
   VAR_15 = 1;
   break;
  default:
   FUNC_13();
  }
 VAR_16 -= VAR_9;
 VAR_17 += VAR_9;

 if (VAR_16 < 1) {
  if (VAR_7)
   return (0);
  FUNC_13();
 }

 FUNC_1(VAR_17);
 FUNC_2(VAR_17);
 VAR_13 = FUNC_4();

 (void)FUNC_10(VAR_2, VAR_11);
 if (*VAR_17) {
  VAR_12 = FUNC_6(VAR_3);

  if (VAR_0) {
   if (FUNC_0(VAR_17) == 0)
    FUNC_3 (1);
  }
  if (VAR_10)
   FUNC_8(VAR_17);
  else
   FUNC_7(VAR_17);
 }

 FUNC_3 (VAR_6);
}
