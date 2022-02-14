
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
typedef int path ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (int,char*,char*) ;
 int FUNC_4 (int) ;
 int VAR_1 ;
 int FUNC_5 (int,char**,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_6 (char*,struct stat*) ;
 int FUNC_7 (char*,char*,size_t) ;
 void* VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_8 (char*,struct stat*) ;
 int FUNC_9 (char*,char*) ;
 size_t FUNC_10 (char*) ;
 int FUNC_11 () ;
 int VAR_6 ;
 int FUNC_12 (char*,char*) ;

int
FUNC_13(int VAR_7, char *VAR_8[])
{
 size_t VAR_9, VAR_10;
 int VAR_11;
 char *VAR_12, *VAR_13;
 struct stat VAR_14;
 int VAR_15;
 char VAR_16[VAR_0];

 while ((VAR_15 = FUNC_5(VAR_7, VAR_8, "fhinv")) != -1)
  switch (VAR_15) {
  case 'h':
   VAR_2 = 1;
   break;
  case 'i':
   VAR_3 = 1;
   VAR_1 = VAR_4 = 0;
   break;
  case 'f':
   VAR_1 = 1;
   VAR_3 = VAR_4 = 0;
   break;
  case 'n':
   VAR_4 = 1;
   VAR_1 = VAR_3 = 0;
   break;
  case 'v':
   VAR_6 = 1;
   break;
  default:
   FUNC_11();
  }
 VAR_7 -= VAR_5;
 VAR_8 += VAR_5;

 if (VAR_7 < 2)
  FUNC_11();





 if (FUNC_8(VAR_8[VAR_7 - 1], &VAR_14) || !FUNC_0(VAR_14.st_mode)) {
  if (VAR_7 > 2)
   FUNC_3(1, "%s is not a directory", VAR_8[VAR_7 - 1]);
  FUNC_4(FUNC_2(VAR_8[0], VAR_8[1]));
 }





 if (VAR_2) {
  if (VAR_7 > 2)
   FUNC_11();
  if (FUNC_6(VAR_8[1], &VAR_14) == 0 && FUNC_1(VAR_14.st_mode))
   FUNC_4(FUNC_2(VAR_8[0], VAR_8[1]));
 }


 if (FUNC_10(VAR_8[VAR_7 - 1]) > sizeof(VAR_16) - 1)
  FUNC_3(1, "%s: destination pathname too long", *VAR_8);
 (void)FUNC_9(VAR_16, VAR_8[VAR_7 - 1]);
 VAR_9 = FUNC_10(VAR_16);
 VAR_13 = &VAR_16[VAR_9];
 if (!VAR_9 || *(VAR_13 - 1) != '/') {
  *VAR_13++ = '/';
  ++VAR_9;
 }
 for (VAR_11 = 0; --VAR_7; ++VAR_8) {




  VAR_12 = *VAR_8 + FUNC_10(*VAR_8);
  while (VAR_12 != *VAR_8 && VAR_12[-1] == '/')
   --VAR_12;
  while (VAR_12 != *VAR_8 && VAR_12[-1] != '/')
   --VAR_12;

  if ((VAR_9 + (VAR_10 = FUNC_10(VAR_12))) >= VAR_0) {
   FUNC_12("%s: destination pathname too long", *VAR_8);
   VAR_11 = 1;
  } else {
   FUNC_7(VAR_13, VAR_12, (size_t)VAR_10 + 1);
   if (FUNC_2(*VAR_8, VAR_16))
    VAR_11 = 1;
  }
 }
 FUNC_4(VAR_11);
}
