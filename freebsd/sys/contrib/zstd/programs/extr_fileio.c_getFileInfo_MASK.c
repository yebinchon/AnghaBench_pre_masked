
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fileInfo_t ;
typedef int InfoError ;


 int FUNC_0 (int,int ,char*,char const*) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (int *,char const*) ;
 int VAR_0 ;

__attribute__((used)) static InfoError
FUNC_3(fileInfo_t* VAR_1, const char* VAR_2)
{
    FUNC_0(!FUNC_1(VAR_2),
            VAR_0, "Error : %s is not a file", VAR_2);
    return FUNC_2(VAR_1, VAR_2);
}
