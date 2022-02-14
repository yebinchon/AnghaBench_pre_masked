
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Boolean ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 char* FUNC_1 (int *,char*,int ,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (unsigned char) ;
 scalar_t__ FUNC_5 (unsigned char) ;

__attribute__((used)) static Boolean
FUNC_6(char *VAR_7)
{
    int VAR_8;

    switch(*VAR_7) {
    case 'i':
 VAR_8 = VAR_2;
 break;
    case 'w':
 VAR_8 = VAR_3;
 break;
    case 'e':
 VAR_8 = VAR_1;
 break;
    default:
 FUNC_0(VAR_3, "invalid syntax: \".%s\"", VAR_7);
 return VAR_0;
    }

    while (FUNC_4((unsigned char)*VAR_7))
 VAR_7++;
    if (!FUNC_5((unsigned char)*VAR_7))
 return VAR_0;
    while (FUNC_5((unsigned char)*VAR_7))
 VAR_7++;

    VAR_7 = FUNC_1(((void*)0), VAR_7, VAR_6, VAR_5);
    FUNC_0(VAR_8, "%s", VAR_7);
    FUNC_3(VAR_7);

    if (VAR_8 == VAR_1) {

 FUNC_2(1);
    }
    return VAR_4;
}
