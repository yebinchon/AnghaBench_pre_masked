
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,char*) ;
 char* FUNC_2 (char*) ;
 int VAR_2 ;

__attribute__((used)) static char *
FUNC_3(void)
{
    char *VAR_3;

    if ((VAR_3 = FUNC_2("TERM")) == 0) {
 (void) FUNC_1(VAR_2,
         "%s: environment variable TERM not set\n",
         VAR_1);
 FUNC_0(VAR_0);
    }
    return VAR_3;
}
