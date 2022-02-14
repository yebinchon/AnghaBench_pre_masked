
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cell ;


 int FUNC_0 (char*,int ) ;
 scalar_t__ FUNC_1 (char const*,char*,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (char*,char const*,...) ;

__attribute__((used)) static int
FUNC_3(const char *VAR_1)
{
    char VAR_2[64];
    if(FUNC_1(VAR_1, VAR_2, sizeof(VAR_2))){
 FUNC_2("No cell found for file \"%s\".", VAR_1);
 return -1;
    }
    if(VAR_0)
 FUNC_2("File \"%s\" lives in cell \"%s\"", VAR_1, VAR_2);
    return FUNC_0(VAR_2, 0);
}
