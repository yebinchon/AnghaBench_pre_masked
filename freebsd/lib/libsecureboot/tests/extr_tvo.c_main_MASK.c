
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_size; } ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,char*,int) ;
 int FUNC_2 (char*,char*,char*,char*,int *) ;
 int FUNC_3 (int ,char*,char*,char*) ;
 int FUNC_4 (int,struct stat*) ;
 char* FUNC_5 (char*) ;
 int FUNC_6 (int,char**,char*) ;
 int FUNC_7 (int,int ,int ) ;
 int FUNC_8 (char*,int ) ;
 char* VAR_7 ;
 int VAR_8 ;
 int FUNC_9 (char*,...) ;
 scalar_t__ FUNC_10 (char*,int *) ;
 int VAR_9 ;
 scalar_t__ FUNC_11 (char*,char*) ;
 char* FUNC_12 () ;
 int FUNC_13 (int) ;
 int FUNC_14 () ;
 int FUNC_15 (char*) ;
 int FUNC_16 () ;
 int FUNC_17 (void*) ;
 size_t FUNC_18 (void*,int,int ) ;
 void* FUNC_19 (int,char*,size_t,struct stat*,int*) ;
 size_t FUNC_20 (void*,char*,int) ;
 scalar_t__ FUNC_21 (char*,int) ;
 int FUNC_22 (int,char*,int ,int ) ;
 int FUNC_23 (char*,int ) ;
 int FUNC_24 () ;
 scalar_t__ FUNC_25 (char*,int) ;

int
FUNC_26(int VAR_10, char *VAR_11[])
{
 int VAR_12;
 int VAR_13;
 int VAR_14;
 int VAR_15;
 char *VAR_16;
 char *VAR_17;

 VAR_17 = ((void*)0);
 VAR_5 = ((void*)0);

 VAR_12 = FUNC_16();
 FUNC_9("Trust %d\n", VAR_12);
 VAR_15 = 0;

 while ((VAR_14 = FUNC_6(VAR_10, VAR_11, "dp:s:T:V")) != -1) {
  switch (VAR_14) {
  case 'd':
   VAR_1++;
   break;
  case 'p':
   VAR_17 = VAR_7;
   break;
  case 's':
   VAR_5 = VAR_7;
   break;
  case 'T':
   VAR_12 = FUNC_15(VAR_7);
   FUNC_9("Local trust %s: %d\n", VAR_7, VAR_12);
   break;
  case 'V':
   VAR_15 = 1;
   break;
  default:
   FUNC_1(1, "unknown option: -%c", VAR_14);
   break;
  }
 }




 FUNC_14();

 for ( ; VAR_8 < VAR_10; VAR_8++) {
  if (VAR_15) {




   VAR_13 = FUNC_8(VAR_11[VAR_8], VAR_2);
   if (VAR_13 > 0) {



    int VAR_18;

    VAR_18 = FUNC_22(VAR_13, VAR_11[VAR_8], 0, VAR_6);
    FUNC_9("verify_file(%s) = %d\n", VAR_11[VAR_8], VAR_18);
    FUNC_0(VAR_13);
   }
   continue;
  }
  if (FUNC_11(VAR_11[VAR_8], "sig")) {
   VAR_16 = (char *)FUNC_25(VAR_11[VAR_8], 1);
   if (VAR_16) {
    FUNC_9("Verified: %s: %.28s...\n",
        VAR_11[VAR_8], VAR_16);
    FUNC_2(VAR_11[VAR_8],
        VAR_17, VAR_5, VAR_16, ((void*)0));
   } else {
    FUNC_3(VAR_9, "%s: %s\n",
        VAR_11[VAR_8], FUNC_12());
   }
  } else if (FUNC_11(VAR_11[VAR_8], "manifest")) {
   VAR_16 = (char *)FUNC_10(VAR_11[VAR_8], ((void*)0));
   if (VAR_16) {
    FUNC_2(VAR_11[VAR_8],
        VAR_17, VAR_5, VAR_16, ((void*)0));
   }
  } else {
   VAR_13 = FUNC_23(VAR_11[VAR_8], VAR_2);
   FUNC_9("verify_open(%s) = %d %s\n", VAR_11[VAR_8], VAR_13,
       (VAR_13 < 0) ? FUNC_12() : "");
   if (VAR_13 > 0) {



    void *VAR_19;
    char VAR_20[VAR_0];
    struct stat VAR_21;
    int VAR_22;
    size_t VAR_23, VAR_24;

    FUNC_4(VAR_13, &VAR_21);
    FUNC_7(VAR_13, 0, VAR_4);
    VAR_23 = VAR_21.st_size % 512;
    VAR_19 = FUNC_19(VAR_13, VAR_11[VAR_8], VAR_23,
        &VAR_21, &VAR_22);
    if (!VAR_19) {
     FUNC_9("vectx_open(%s) failed: %d %s\n",
         VAR_11[VAR_8], VAR_22,
         FUNC_12());
    } else {
     VAR_23 = FUNC_18(VAR_19,
         (VAR_21.st_size % 1024), VAR_4);

     if (VAR_23 < VAR_21.st_size) {
      VAR_24 = FUNC_20(VAR_19, VAR_20,
          sizeof(VAR_20));
      if (VAR_24 > 0)
       VAR_23 += VAR_24;
     }
     VAR_23 = FUNC_18(VAR_19, 0, VAR_3);

     VAR_23 = FUNC_18(VAR_19, 0, VAR_3);
     VAR_22 = FUNC_17(VAR_19);
     if (VAR_22) {
      FUNC_9("vectx_close(%s) == %d %s\n",
          VAR_11[VAR_8], VAR_22,
          FUNC_12());
     } else {
      FUNC_9("vectx_close: Verified: %s\n",
          VAR_11[VAR_8]);
     }
    }
    FUNC_0(VAR_13);
   }
  }
 }




 return (0);
}
