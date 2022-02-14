
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int X509V3_CTX ;
struct TYPE_7__ {int type_id; int * value; } ;
struct TYPE_5__ {TYPE_4__* otherName; } ;
struct TYPE_6__ {TYPE_1__ d; } ;
typedef TYPE_2__ GENERAL_NAME ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,int *) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char const*,int) ;
 TYPE_4__* FUNC_5 () ;
 char* FUNC_6 (char const*,char) ;

__attribute__((used)) static int FUNC_7(GENERAL_NAME *VAR_0, const char *VAR_1, X509V3_CTX *VAR_2)
{
    char *VAR_3 = ((void*)0), *VAR_4;
    int VAR_5;

    if ((VAR_4 = FUNC_6(VAR_1, ';')) == ((void*)0))
        return 0;
    if ((VAR_0->d.otherName = FUNC_5()) == ((void*)0))
        return 0;




    FUNC_0(VAR_0->d.otherName->value);
    if ((VAR_0->d.otherName->value = FUNC_1(VAR_4 + 1, VAR_2)) == ((void*)0))
        return 0;
    VAR_5 = VAR_4 - VAR_1;
    VAR_3 = FUNC_4(VAR_1, VAR_5);
    if (VAR_3 == ((void*)0))
        return 0;
    VAR_0->d.otherName->type_id = FUNC_2(VAR_3, 0);
    FUNC_3(VAR_3);
    if (!VAR_0->d.otherName->type_id)
        return 0;
    return 1;
}
