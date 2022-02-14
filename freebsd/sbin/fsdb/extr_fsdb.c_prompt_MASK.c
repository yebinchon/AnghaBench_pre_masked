
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
typedef int pstring ;
typedef int EditLine ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int,char*,int ) ;

char *
FUNC_1(EditLine *VAR_1)
{
    static char VAR_2[64];
    FUNC_0(VAR_2, sizeof(VAR_2), "fsdb (inum: %ju)> ",
 (uintmax_t)VAR_0);
    return VAR_2;
}
