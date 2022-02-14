
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sysevent_t ;
typedef int sysevent_id_t ;
typedef int nvlist_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ,int *) ;
 int * FUNC_2 (char*,char*,char*,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int
FUNC_6(char *VAR_2, char *VAR_3, char *VAR_4,
    nvlist_t *VAR_5, sysevent_id_t *VAR_6, int VAR_7)
{
 sysevent_t *VAR_8;
 int VAR_9;

 FUNC_0(VAR_2 != ((void*)0));
 FUNC_0(VAR_3 != ((void*)0));
 FUNC_0(VAR_4 != ((void*)0));
 FUNC_0(VAR_5 != ((void*)0));
 FUNC_0(VAR_6 != ((void*)0));
 FUNC_0(VAR_7 == VAR_0);

 VAR_8 = FUNC_2(VAR_3, VAR_4, VAR_2, VAR_1);
 FUNC_0(VAR_8 != ((void*)0));
 (void)FUNC_3(VAR_8, VAR_5);
        VAR_9 = FUNC_1(VAR_8, VAR_1, VAR_6);
 FUNC_4(VAR_8);
 FUNC_5(VAR_8);

 return (VAR_9);
}
