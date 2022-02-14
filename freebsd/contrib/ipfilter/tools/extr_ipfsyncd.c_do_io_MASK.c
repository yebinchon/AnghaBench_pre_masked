
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nbuff ;
typedef int fd_set ;


 int VAR_0 ;

 scalar_t__ FUNC_0 (int,int *) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;


 int FUNC_3 (int) ;
 int FUNC_4 (int,char*,int,...) ;
 int FUNC_5 (int,char*,int*) ;
 int FUNC_6 (int,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (int,char*,int) ;
 int FUNC_8 (int,char*,int,int ) ;
 int FUNC_9 (int,int *,int *,int *,int *) ;
 int FUNC_10 (int ,char*) ;
 int VAR_5 ;

void
FUNC_11()
{
 char VAR_6[VAR_0];
 char VAR_7[VAR_0];
 fd_set VAR_8, VAR_9;
 int VAR_10;
 int VAR_11;
 int VAR_12;
 int VAR_13;

 FUNC_2(&VAR_8);
 FUNC_1(VAR_3, &VAR_8);
 FUNC_1(VAR_4, &VAR_8);
 VAR_10 = VAR_4;
 if (VAR_3 > VAR_10)
  VAR_10 = VAR_3;
 FUNC_4(2, "nfd %d lfd %d maxfd %d\n", VAR_4, VAR_3, VAR_10);

 VAR_11 = 0;





 while (!VAR_5) {
  int VAR_14;

  VAR_9 = VAR_8;

  VAR_14 = FUNC_9(VAR_10 + 1, &VAR_9, ((void*)0), ((void*)0), ((void*)0));
  if (VAR_14 < 0) {
   switch (VAR_2)
   {
   case 130 :
    continue;
   default :
    FUNC_10(VAR_1, "select error: %m");
    FUNC_4(1, "select error: %s\n", FUNC_3(VAR_2));
    return;
   }
  }

  if (FUNC_0(VAR_3, &VAR_9)) {
   VAR_12 = FUNC_7(VAR_3, VAR_7+VAR_11, VAR_0-VAR_11);

   FUNC_4(3, "read(K):%d\n", VAR_12);

   if (VAR_12 <= 0) {
    FUNC_10(VAR_1, "read error (k-header): %m");
    FUNC_4(1, "read error (k-header): %s\n",
          FUNC_3(VAR_2));
    return;
   }

   VAR_13 = 0;

   switch (FUNC_5(VAR_12, VAR_7, &VAR_13))
   {
   case 129 :
    return;
   case 128 :
    VAR_11 += VAR_13;
    break;
   default :
    VAR_11 = 0;
    break;
   }
  }

  if (FUNC_0(VAR_4, &VAR_9)) {
   VAR_12 = FUNC_8(VAR_4, VAR_6, sizeof(VAR_6), 0);

   FUNC_4(3, "read(N):%d\n", VAR_12);

   if (VAR_12 <= 0) {
    FUNC_10(VAR_1, "read error (n-header): %m");
    FUNC_4(1, "read error (n-header): %s\n",
          FUNC_3(VAR_2));
    return;
   }

   switch (FUNC_6(VAR_12, VAR_6))
   {
   case 129 :
    return;
   default :
    break;
   }
  }
 }
}
