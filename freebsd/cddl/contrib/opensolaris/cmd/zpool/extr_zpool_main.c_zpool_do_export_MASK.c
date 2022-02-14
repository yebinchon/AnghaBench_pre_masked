
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zpool_handle_t ;
typedef void* boolean_t ;


 void* VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_2 ;
 int FUNC_1 (int,char**,char*) ;
 char* FUNC_2 (char*) ;
 int VAR_3 ;
 void* VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (void*) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,void*) ;
 scalar_t__ FUNC_6 (int *,void*,int ) ;
 scalar_t__ FUNC_7 (int *,int ) ;
 int * FUNC_8 (int ,char*) ;

int
FUNC_9(int VAR_8, char **VAR_9)
{
 boolean_t VAR_10 = VAR_0;
 boolean_t VAR_11 = VAR_0;
 int VAR_12;
 zpool_handle_t *VAR_13;
 int VAR_14;
 int VAR_15;


 while ((VAR_12 = FUNC_1(VAR_8, VAR_9, "fF")) != -1) {
  switch (VAR_12) {
  case 'f':
   VAR_10 = VAR_1;
   break;
  case 'F':
   VAR_11 = VAR_1;
   break;
  case '?':
   (void) FUNC_0(VAR_7, FUNC_2("invalid option '%c'\n"),
       VAR_6);
   FUNC_3(VAR_0);
  }
 }

 VAR_8 -= VAR_5;
 VAR_9 += VAR_5;


 if (VAR_8 < 1) {
  (void) FUNC_0(VAR_7, "%s", FUNC_2("missing pool argument\n"));
  FUNC_3(VAR_0);
 }

 VAR_14 = 0;
 for (VAR_15 = 0; VAR_15 < VAR_8; VAR_15++) {
  if ((VAR_13 = FUNC_8(VAR_2, VAR_9[VAR_15])) == ((void*)0)) {
   VAR_14 = 1;
   continue;
  }

  if (FUNC_5(VAR_13, VAR_10) != 0) {
   VAR_14 = 1;
   FUNC_4(VAR_13);
   continue;
  }


  VAR_4 = VAR_0;

  if (VAR_11) {
   if (FUNC_7(VAR_13, VAR_3) != 0)
    VAR_14 = 1;
  } else if (FUNC_6(VAR_13, VAR_10, VAR_3) != 0) {
   VAR_14 = 1;
  }

  FUNC_4(VAR_13);
 }

 return (VAR_14);
}
