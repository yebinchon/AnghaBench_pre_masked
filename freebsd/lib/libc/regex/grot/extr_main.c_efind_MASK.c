
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* re_endp; } ;
typedef TYPE_1__ regex_t ;
typedef int efbuf ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,TYPE_1__*,char*,int) ;
 int FUNC_3 (char*,char*,char*) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int
FUNC_5(char *VAR_1)
{
 static char VAR_2[100];
 size_t VAR_3;
 regex_t VAR_4;

 FUNC_3(VAR_2, "REG_%s", VAR_1);
 FUNC_0(FUNC_4(VAR_2) < sizeof(VAR_2));
 VAR_4.re_endp = VAR_2;
 (void) FUNC_2(VAR_0, &VAR_4, VAR_2, sizeof(VAR_2));
 return(FUNC_1(VAR_2));
}
