
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int nbFiles; int compressedSize; } ;
typedef TYPE_1__ fileInfo_t ;
typedef int InfoError ;
typedef int FILE ;


 int FUNC_0 (int ,int ,char*,char const*) ;
 int FUNC_1 (TYPE_1__*,int * const) ;
 int * FUNC_2 (char const*) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (int * const) ;
 int VAR_0 ;

__attribute__((used)) static InfoError
FUNC_5(fileInfo_t* VAR_1, const char* VAR_2)
{
    InfoError VAR_3;
    FILE* const VAR_4 = FUNC_2(VAR_2);
    FUNC_0(VAR_4 == ((void*)0), VAR_0, "Error: could not open source file %s", VAR_2);

    VAR_1->compressedSize = FUNC_3(VAR_2);
    VAR_3 = FUNC_1(VAR_1, VAR_4);

    FUNC_4(VAR_4);
    VAR_1->nbFiles = 1;
    return VAR_3;
}
