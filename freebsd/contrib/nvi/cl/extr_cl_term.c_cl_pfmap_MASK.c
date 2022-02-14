
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int seq_t ;
typedef int name ;
typedef int SCR ;
typedef int CHAR_T ;


 int FUNC_0 (int *,char*,scalar_t__,int *,size_t) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,int *,size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 size_t FUNC_4 (int *,int ,int ,int) ;
 scalar_t__ FUNC_5 (int *,int *,int) ;
 int FUNC_6 (int *,int ,int *,char*) ;
 int FUNC_7 (int *,int *,size_t,int *,scalar_t__,int *,size_t,int ,int) ;
 int FUNC_8 (char*,int,char*,int) ;
 scalar_t__ FUNC_9 (char*) ;
 char* FUNC_10 (char*) ;

__attribute__((used)) static int
FUNC_11(SCR *VAR_3, seq_t VAR_4, CHAR_T *VAR_5, size_t VAR_6, CHAR_T *VAR_7, size_t VAR_8)
{
 size_t VAR_9;
 char *VAR_10;
 char VAR_11[64];
 CHAR_T VAR_12[64];
 CHAR_T VAR_13[20];
 CHAR_T *VAR_14;
 size_t VAR_15;

 (void)FUNC_8(VAR_11, sizeof(VAR_11), "kf%d",
   (int)FUNC_5(VAR_5+1,((void*)0),10));
 if ((VAR_10 = FUNC_10(VAR_11)) == ((void*)0) ||
     VAR_10 == (char *)-1 || FUNC_9(VAR_10) == 0)
  VAR_10 = ((void*)0);
 if (VAR_10 == ((void*)0)) {
  FUNC_6(VAR_3, VAR_0, VAR_5, "233|This terminal has no %s key");
  return (1);
 }

 VAR_9 = FUNC_4(VAR_12,
     FUNC_3(VAR_12), FUNC_1("function key %d"),
   (int)FUNC_5(VAR_5+1,((void*)0),10));
 FUNC_0(VAR_3, VAR_10, FUNC_9(VAR_10), VAR_14, VAR_15);
 FUNC_2(VAR_13, VAR_14, VAR_15);
 return (FUNC_7(VAR_3, VAR_12, VAR_9,
     VAR_13, FUNC_9(VAR_10), VAR_7, VAR_8, VAR_4, VAR_1 | VAR_2));
}
