
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tOptionLoadMode ;


 int VAR_0 ;
 int FUNC_0 (char) ;
 void* VAR_1 ;
 scalar_t__ VAR_2 ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char*,int ) ;

__attribute__((used)) static char *
FUNC_4(char * VAR_3, tOptionLoadMode VAR_4)
{
    char * VAR_5 = FUNC_3(VAR_3, VAR_0);
    int VAR_6;




    if (VAR_5 == ((void*)0))
        return VAR_3 + FUNC_2(VAR_3);






    if (VAR_4 == VAR_2) {
        *(VAR_5++) = VAR_1;
        return VAR_5;
    }






    VAR_6 = FUNC_0(*VAR_5);
    *(VAR_5++) = VAR_1;

    VAR_5 = FUNC_1(VAR_5);
    if (VAR_6 && ((*VAR_5 == ':') || (*VAR_5 == '=')))
        VAR_5 = FUNC_1(VAR_5+1);

    return VAR_5;
}
