
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uuid ;
typedef int apr_uuid_t ;
typedef int abts_case ;


 int FUNC_0 (int *,char*,int) ;
 int VAR_0 ;
 int FUNC_1 (char*,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*) ;
 scalar_t__ FUNC_4 (int *,int *,int) ;

__attribute__((used)) static void FUNC_5(abts_case *VAR_1, void *VAR_2)
{
    apr_uuid_t VAR_3;
    apr_uuid_t VAR_4;
    char VAR_5[VAR_0 + 1];

    FUNC_2(&VAR_3);
    FUNC_1(VAR_5, &VAR_3);

    FUNC_3(&VAR_4, VAR_5);
    FUNC_0(VAR_1, "parse produced a different UUID",
             FUNC_4(&VAR_3, &VAR_4, sizeof(VAR_3)) == 0);
}
