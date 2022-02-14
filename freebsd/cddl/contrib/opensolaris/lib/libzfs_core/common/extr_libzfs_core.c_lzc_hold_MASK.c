
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pool ;
typedef int nvpair_t ;
typedef int nvlist_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,char*,int *) ;
 int * FUNC_2 () ;
 int FUNC_3 (int ,char*,int *,int **) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 size_t FUNC_7 (char*,char*) ;
 int FUNC_8 (char*,int ,int) ;

int
FUNC_9(nvlist_t *VAR_2, int VAR_3, nvlist_t **VAR_4)
{
 char VAR_5[VAR_1];
 nvlist_t *VAR_6;
 nvpair_t *VAR_7;
 int VAR_8;


 VAR_7 = FUNC_5(VAR_2, ((void*)0));
 if (VAR_7 == ((void*)0))
  return (0);
 (void) FUNC_8(VAR_5, FUNC_6(VAR_7), sizeof (VAR_5));
 VAR_5[FUNC_7(VAR_5, "/@")] = '\0';

 VAR_6 = FUNC_2();
 FUNC_1(VAR_6, "holds", VAR_2);
 if (VAR_3 != -1)
  FUNC_0(VAR_6, "cleanup_fd", VAR_3);

 VAR_8 = FUNC_3(VAR_0, VAR_5, VAR_6, VAR_4);
 FUNC_4(VAR_6);
 return (VAR_8);
}
