
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 int FUNC_0 (int) ;
 int VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 void* VAR_9 ;
 int * FUNC_3 (char*,char*) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (int *,int ,int ) ;
 int * FUNC_6 (int *,int ) ;
 void* FUNC_7 (char*) ;
 void* VAR_10 ;
 void* VAR_11 ;
 int * VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*,...) ;
 void* VAR_15 ;
 void* VAR_16 ;
 void* VAR_17 ;
 int * VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ FUNC_11 (char*,char*) ;
 void* VAR_21 ;
 int FUNC_12 () ;

int FUNC_13(int VAR_22, char *VAR_23[])
{
 FILE * VAR_24;

 VAR_18 = FUNC_7("SRCTREE");
 if (!VAR_18)
  VAR_18 = FUNC_6(((void*)0), 0);
 VAR_12 = FUNC_7("KBUILD_SRC");
 if (!VAR_12 || !*VAR_12)
  VAR_12 = VAR_18;
 if (VAR_22 != 3) {
  FUNC_12();
  FUNC_0(1);
 }

 VAR_24 = FUNC_3(VAR_23[2], "r");
        if (VAR_24 == ((void*)0)) {
                FUNC_4(VAR_19, "docproc: ");
                FUNC_9(VAR_23[2]);
                FUNC_0(2);
        }

 if (FUNC_11("doc", VAR_23[1]) == 0)
 {
  VAR_3 = VAR_13;
  VAR_10 = VAR_9;
  VAR_7 = VAR_9;
  VAR_21 = VAR_9;
  VAR_17 = VAR_14;
  VAR_5 = VAR_14;
  FUNC_8(VAR_24);


  FUNC_5(VAR_24, 0, VAR_0);
  VAR_3 = VAR_15;
  VAR_10 = VAR_11;
  VAR_7 = VAR_8;
  VAR_21 = VAR_15;
  VAR_17 = VAR_16;
  VAR_5 = VAR_4;

  FUNC_8(VAR_24);
 }
 else if (FUNC_11("depend", VAR_23[1]) == 0)
 {


  FUNC_10("%s\t", VAR_23[2]);
  VAR_3 = VAR_13;
  VAR_10 = VAR_1;
  VAR_7 = VAR_1;
  VAR_21 = VAR_1;
  VAR_17 = VAR_2;
  VAR_5 = VAR_2;
  FUNC_8(VAR_24);
  FUNC_10("\n");
 }
 else
 {
  FUNC_4(VAR_19, "Unknown option: %s\n", VAR_23[1]);
  FUNC_0(1);
 }
 FUNC_1(VAR_24);
 FUNC_2(VAR_20);
 return VAR_6;
}
