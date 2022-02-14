
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int snapshot ;



 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,char*,int) ;
 int FUNC_2 (int ,char*,char*,int,char*) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (int,char**,char*) ;
 char* VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char* FUNC_5 (char*,char) ;
 int FUNC_6 (char*,char*,int) ;
 int FUNC_7 (int) ;

__attribute__((used)) static int
FUNC_8(int VAR_6, char *VAR_7[])
{
 char VAR_8[VAR_0];
 char *VAR_9, *VAR_10, *VAR_11;
 int VAR_12, VAR_13;
 bool VAR_14;

 VAR_11 = ((void*)0);
 VAR_14 = 0;
 while ((VAR_13 = FUNC_4(VAR_6, VAR_7, "e:r")) != -1) {
  switch (VAR_13) {
  case 'e':
   VAR_11 = VAR_2;
   break;
  case 'r':
   VAR_14 = 1;
   break;
  default:
   FUNC_3(VAR_5, "bectl create: unknown option '-%c'\n",
       VAR_4);
   return (FUNC_7(0));
  }
 }

 VAR_6 -= VAR_3;
 VAR_7 += VAR_3;

 if (VAR_6 != 1) {
  FUNC_3(VAR_5, "bectl create: wrong number of arguments\n");
  return (FUNC_7(0));
 }

 VAR_10 = *VAR_7;

 VAR_12 = 128;
 if ((VAR_9 = FUNC_5(VAR_10, '@')) != ((void*)0)) {




  *VAR_9++ = '\0';
  VAR_12 = FUNC_2(VAR_1, VAR_10, VAR_9, VAR_14, ((void*)0));
 } else {
  if (VAR_11 == ((void*)0))

   VAR_12 = FUNC_2(VAR_1, FUNC_0(VAR_1), ((void*)0),
       VAR_14, VAR_8);
  else if (FUNC_5(VAR_11, '@') != ((void*)0))

   FUNC_6(VAR_8, VAR_11, sizeof(VAR_8));
  else

   VAR_12 = FUNC_2(VAR_1, VAR_11, ((void*)0), VAR_14,
       VAR_8);

  if (VAR_12 == 128)
   VAR_12 = FUNC_1(VAR_1, VAR_10, VAR_8,
           VAR_14 == 1 ? -1 : 0);
 }

 switch (VAR_12) {
 case 128:
  break;
 default:
  if (VAR_9 != ((void*)0))
   FUNC_3(VAR_5,
       "failed to create a snapshot '%s' of '%s'\n",
       VAR_9, VAR_10);
  else if (VAR_11 == ((void*)0))
   FUNC_3(VAR_5,
       "failed to create bootenv %s\n", VAR_10);
  else
   FUNC_3(VAR_5,
       "failed to create bootenv %s from snapshot %s\n",
       VAR_10, VAR_11);
 }

 return (VAR_12);
}
