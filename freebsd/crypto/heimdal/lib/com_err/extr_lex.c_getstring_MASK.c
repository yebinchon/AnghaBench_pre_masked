
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int x ;
struct TYPE_2__ {int * string; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 () ;
 int VAR_2 ;
 int * FUNC_3 (char*) ;
 TYPE_1__ VAR_3 ;

__attribute__((used)) static int
FUNC_4(void)
{
    char VAR_4[128];
    int VAR_5 = 0;
    int VAR_6;
    int VAR_7 = 0;
    while(VAR_5 < sizeof(VAR_4) - 1 && (VAR_6 = FUNC_2()) != VAR_0){
 if(VAR_7) {
     VAR_4[VAR_5++] = VAR_6;
     VAR_7 = 0;
     continue;
 }
 if(VAR_6 == '\n'){
     FUNC_0("unterminated string");
     VAR_2++;
     break;
 }
 if(VAR_6 == '\\'){
     VAR_7++;
     continue;
 }
 if(VAR_6 == '\"')
     break;
 VAR_4[VAR_5++] = VAR_6;
    }
    VAR_4[VAR_5] = '\0';
    VAR_3.string = FUNC_3(VAR_4);
    if (VAR_3.string == ((void*)0))
        FUNC_1(1, "malloc");
    return VAR_1;
}
