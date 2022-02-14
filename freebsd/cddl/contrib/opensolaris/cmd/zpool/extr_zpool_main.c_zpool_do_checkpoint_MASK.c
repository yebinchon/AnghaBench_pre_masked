
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zpool_handle_t ;
struct option {char* member_0; char member_3; int * member_2; int member_1; } ;
typedef scalar_t__ boolean_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_2 ;
 int FUNC_1 (int,char**,char*,struct option*,int *) ;
 char* FUNC_2 (char*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int * FUNC_3 (char*,char) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 int * FUNC_8 (int ,char*) ;

int
FUNC_9(int VAR_7, char **VAR_8)
{
 boolean_t VAR_9;
 char *VAR_10;
 zpool_handle_t *VAR_11;
 int VAR_12, VAR_13;

 struct option VAR_14[] = {
  {"discard", VAR_3, ((void*)0), 'd'},
  {0, 0, 0, 0}
 };

 VAR_9 = VAR_0;
 while ((VAR_12 = FUNC_1(VAR_7, VAR_8, ":d", VAR_14, ((void*)0))) != -1) {
  switch (VAR_12) {
  case 'd':
   VAR_9 = VAR_1;
   break;
  case '?':
   (void) FUNC_0(VAR_6, FUNC_2("invalid option '%c'\n"),
       VAR_5);
   FUNC_4(VAR_0);
  }
 }

 VAR_7 -= VAR_4;
 VAR_8 += VAR_4;

 if (VAR_7 < 1) {
  (void) FUNC_0(VAR_6, "%s", FUNC_2("missing pool argument\n"));
  FUNC_4(VAR_0);
 }

 if (VAR_7 > 1) {
  (void) FUNC_0(VAR_6, "%s", FUNC_2("too many arguments\n"));
  FUNC_4(VAR_0);
 }

 VAR_10 = VAR_8[0];

 if ((VAR_11 = FUNC_8(VAR_2, VAR_10)) == ((void*)0)) {

  if (FUNC_3(VAR_10, '/') != ((void*)0))
   (void) FUNC_0(VAR_6, "%s", FUNC_2("'zpool checkpoint' "
       "doesn't work on datasets. To save the state "
       "of a dataset from a specific point in time "
       "please use 'zfs snapshot'\n"));
  return (1);
 }

 if (VAR_9)
  VAR_13 = (FUNC_7(VAR_11) != 0);
 else
  VAR_13 = (FUNC_5(VAR_11) != 0);

 FUNC_6(VAR_11);

 return (VAR_13);
}
