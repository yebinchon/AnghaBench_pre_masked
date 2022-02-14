
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef int SM_FILE_T ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ,char*,char*,char*,int,int) ;
 scalar_t__ FUNC_2 (char*,char*,int) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ,char*,size_t) ;
 int * FUNC_5 (int ,int ,char*,int ,int *) ;
 int FUNC_6 (int *,int ,char) ;
 int VAR_5 ;

void
FUNC_7(char *VAR_6, int VAR_7)
{
 SM_FILE_T *VAR_8, *VAR_9;
 char VAR_10[256];
 size_t VAR_11;
 int VAR_12, VAR_13;
 static char VAR_14[] = "tfget";

 VAR_8 = FUNC_5(VAR_3, VAR_2, VAR_14,
      VAR_1, ((void*)0));
 FUNC_0(VAR_8 != ((void*)0));
 for (VAR_13 = 0; VAR_13 < VAR_7; VAR_13++)
 {
  VAR_12 = FUNC_6(VAR_8, VAR_2, VAR_6[VAR_13]);
  FUNC_0(VAR_12 >= 0);
 }
 VAR_12 = FUNC_3(VAR_8, VAR_2);
 FUNC_0(VAR_12 == 0);

 VAR_9 = FUNC_5(VAR_3, VAR_2, VAR_14,
      VAR_0, ((void*)0));
 FUNC_0(VAR_9 != ((void*)0));
 VAR_11 = sizeof(VAR_10);
 VAR_12 = FUNC_4(VAR_9, VAR_2, VAR_10, VAR_11);
 if (VAR_7 == 0)
 {
  FUNC_0(VAR_12 == -1);
  FUNC_0(VAR_4 == 0);
 }
 else
 {
  FUNC_0(VAR_12 == VAR_7);
  if (VAR_12 != VAR_7)
   FUNC_1(VAR_5, "buf='%s', in='%s', r=%d, l=%d\n",
    VAR_10, VAR_6, VAR_12, VAR_7);
 }
 FUNC_0(FUNC_2(VAR_10, VAR_6, VAR_7) == 0);
 VAR_12 = FUNC_3(VAR_9, VAR_2);
 FUNC_0(VAR_12 == 0);
}
