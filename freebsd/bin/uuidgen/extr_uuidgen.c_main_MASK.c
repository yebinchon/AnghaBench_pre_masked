
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uuid_t ;
typedef int FILE ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (int,char*) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int ,char*) ;
 int FUNC_7 (int *,char*,char*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int,char**,char*) ;
 scalar_t__ FUNC_10 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int * VAR_2 ;
 int FUNC_11 (int ,char**,int) ;
 int FUNC_12 () ;
 int VAR_3 ;
 int FUNC_13 (int ,char**,int*) ;
 scalar_t__ FUNC_14 (char*,int) ;

int
FUNC_15(int VAR_4, char *VAR_5[])
{
 FILE *VAR_6;
 uuid_t *VAR_7, *VAR_8;
 char *VAR_9;
 int VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;

 VAR_11 = -1;
 VAR_6 = VAR_2;
 VAR_13 = 0;
 while ((VAR_10 = FUNC_9(VAR_4, VAR_5, "1n:o:")) != -1)
  switch (VAR_10) {
  case '1':
   VAR_13 = 1;
   break;
  case 'n':
   if (VAR_11 > 0)
    FUNC_12();
   VAR_11 = FUNC_11(VAR_0, &VAR_9, 10);
   if (*VAR_9 != 0 || VAR_11 < 1)
    FUNC_12();
   break;
  case 'o':
   if (VAR_6 != VAR_2)
    FUNC_4(1, "multiple output files not allowed");
   VAR_6 = FUNC_6(VAR_0, "w");
   if (VAR_6 == ((void*)0))
    FUNC_3(1, "fopen");
   break;
  default:
   FUNC_12();
  }
 VAR_5 += VAR_1;
 VAR_4 -= VAR_1;

 if (VAR_4)
  FUNC_12();

 FUNC_0();
 if (FUNC_2() < 0)
  FUNC_3(1, "Unable to limit stdio");
 if (FUNC_1() < 0)
  FUNC_3(1, "Unable to enter capability mode");

 if (VAR_11 == -1)
  VAR_11 = 1;

 VAR_7 = (uuid_t*)FUNC_10(sizeof(uuid_t) * VAR_11);
 if (VAR_7 == ((void*)0))
  FUNC_3(1, "malloc()");

 if (!VAR_13) {

  if (FUNC_14(VAR_7, VAR_11) != 0)
   FUNC_3(1, "uuidgen()");
 } else {
  VAR_8 = VAR_7;
  for (VAR_12 = 0; VAR_12 < VAR_11; VAR_12++) {
   if (FUNC_14(VAR_8++, 1) != 0)
    FUNC_3(1, "uuidgen()");
  }
 }

 VAR_8 = VAR_7;
 while (VAR_11--) {
  FUNC_13(VAR_8++, &VAR_9, &VAR_14);
  if (VAR_14 != VAR_3)
       FUNC_3(1, "cannot stringify a UUID");
  FUNC_7(VAR_6, "%s\n", VAR_9);
  FUNC_8(VAR_9);
 }

 FUNC_8(VAR_7);
 if (VAR_6 != VAR_2)
  FUNC_5(VAR_6);
 return (0);
}
