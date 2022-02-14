
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_short ;
typedef int u_int32_t ;
typedef int u_char ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 void* VAR_17 ;
 void* VAR_18 ;
 int VAR_19 ;
 char* VAR_20 ;
 int VAR_21 ;
 char** VAR_22 ;
 char FUNC_3 () ;
 int* VAR_23 ;
 void* VAR_24 ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (int,int) ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_7 (int *,char*,int *,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int) ;
 void* FUNC_11 (int ,int ) ;
 int FUNC_12 (char*,...) ;
 int FUNC_13 (int) ;

__attribute__((used)) static int
FUNC_14(void)
{
 u_char VAR_28;
 u_int32_t VAR_29;
 int VAR_30, VAR_31;

 FUNC_7(&VAR_16, "ap boot", ((void*)0), VAR_5);

 FUNC_10(1);


 FUNC_5();


 VAR_29 = *((u_int32_t *) VAR_12);
 FUNC_8(VAR_3, VAR_0);
 VAR_28 = FUNC_4(VAR_2);




 for (VAR_31 = 1; VAR_31 < VAR_27; VAR_31++) {
  VAR_30 = VAR_23[VAR_31];


  VAR_22[VAR_31] = (char *)FUNC_6(VAR_25 * VAR_9,
      VAR_7 | VAR_8);
  VAR_24 = (void *)FUNC_6(VAR_4, VAR_7 | VAR_8);

  *((volatile u_short *) VAR_12) = VAR_14;
  *((volatile u_short *) VAR_13) = (VAR_21 >> 4);
  FUNC_8(VAR_3, VAR_0);
  FUNC_8(VAR_2, VAR_1);

  VAR_20 = (char *)VAR_22[VAR_31] + VAR_25 *
      VAR_9 - 4;
  VAR_19 = VAR_31;

  VAR_18 = FUNC_11(VAR_11, VAR_6);
  VAR_17 = FUNC_11(VAR_10, VAR_6);


  FUNC_0(99);
  if (!FUNC_13(VAR_30)) {
   FUNC_12("AP #%d (PHY# %d) failed!\n", VAR_31, VAR_30);
   FUNC_1("trace");

   FUNC_12("panic y/n? [y] ");
   if (FUNC_3() != 'n')
    FUNC_9("bye-bye");
  }
  FUNC_1("trace");

  FUNC_2(VAR_31, &VAR_15);
 }

 FUNC_10(0);


 *(u_int32_t *) VAR_12 = VAR_29;

 FUNC_8(VAR_3, VAR_0);
 FUNC_8(VAR_2, VAR_28);


 return VAR_26;
}
