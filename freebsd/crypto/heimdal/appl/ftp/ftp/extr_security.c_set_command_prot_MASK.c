
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum protection_level { ____Placeholder_protection_level } protection_level ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int VAR_2 ;
 int VAR_3 ;

enum protection_level
FUNC_2(enum protection_level VAR_4)
{
    int VAR_5;
    enum protection_level VAR_6 = VAR_1;
    if(VAR_4 != VAR_1 && VAR_4 == VAR_2) {
 VAR_5 = FUNC_0("CCC");
 if(VAR_5 != VAR_0) {
     FUNC_1("Failed to clear command channel.\n");
     return VAR_3;
 }
    }
    VAR_1 = VAR_4;
    return VAR_6;
}
