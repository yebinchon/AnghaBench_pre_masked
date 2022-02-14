
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uuid ;
typedef int apr_uuid_t ;
typedef int abts_case ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int *,int) ;

__attribute__((used)) static void FUNC_3(abts_case *VAR_0, void *VAR_1)
{
    apr_uuid_t VAR_2;
    apr_uuid_t VAR_3;


    FUNC_1(&VAR_2);
    FUNC_1(&VAR_3);

    FUNC_0(VAR_0, "generated the same UUID twice",
             FUNC_2(&VAR_2, &VAR_3, sizeof(VAR_2)) != 0);
}
