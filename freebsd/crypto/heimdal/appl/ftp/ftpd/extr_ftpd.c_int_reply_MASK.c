
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;
typedef int buf ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (char*,int,char*,...) ;
 int VAR_2 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,char*,char*) ;
 int FUNC_5 (char*,int,char const*,int ) ;

__attribute__((used)) static void
FUNC_6(int VAR_3, char *VAR_4, const char *VAR_5, va_list VAR_6)
{
    char VAR_7[10240];
    char *VAR_8;
    VAR_8=VAR_7;
    if(VAR_3){
 FUNC_2(VAR_8, sizeof(VAR_7), "%d%s", VAR_3, VAR_4);
 VAR_8+=FUNC_3(VAR_8);
    }
    FUNC_5(VAR_8, sizeof(VAR_7) - FUNC_3(VAR_8), VAR_5, VAR_6);
    VAR_8+=FUNC_3(VAR_8);
    FUNC_2(VAR_8, sizeof(VAR_7) - FUNC_3(VAR_8), "\r\n");
    VAR_8+=FUNC_3(VAR_8);
    FUNC_1(VAR_2, "%s", VAR_7);
    FUNC_0(VAR_2);
    if (VAR_1)
 FUNC_4(VAR_0, "<--- %s- ", VAR_7);
}
