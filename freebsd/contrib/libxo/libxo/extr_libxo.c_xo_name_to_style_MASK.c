
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (char const*,char*) ;

__attribute__((used)) static int
FUNC_1 (const char *VAR_6)
{
    if (FUNC_0(VAR_6, "xml"))
 return VAR_5;
    else if (FUNC_0(VAR_6, "json"))
 return VAR_2;
    else if (FUNC_0(VAR_6, "encoder"))
 return VAR_0;
    else if (FUNC_0(VAR_6, "text"))
 return VAR_4;
    else if (FUNC_0(VAR_6, "html"))
 return VAR_1;
    else if (FUNC_0(VAR_6, "sdparams"))
 return VAR_3;

    return -1;
}
