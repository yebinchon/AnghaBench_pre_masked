
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int U64 ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int,char*,char const*) ;
 int FUNC_1 (int,char*,...) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (char const*,char*) ;
 size_t FUNC_6 (void*,int,size_t,int *) ;
 void* FUNC_7 (size_t) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static size_t FUNC_9(void** VAR_2, const char* VAR_3)
{
    FILE* VAR_4;
    U64 VAR_5;

    FUNC_3(VAR_2 != ((void*)0));
    *VAR_2 = ((void*)0);
    if (VAR_3 == ((void*)0)) return 0;

    FUNC_0(4,"Loading %s as dictionary \n", VAR_3);
    VAR_4 = FUNC_5(VAR_3, "rb");
    if (VAR_4==((void*)0)) FUNC_1(31, "%s: %s", VAR_3, FUNC_8(VAR_1));

    VAR_5 = FUNC_2(VAR_3);
    if (VAR_5 > VAR_0) {
        FUNC_1(32, "Dictionary file %s is too large (> %u MB)",
                        VAR_3, VAR_0 >> 20);
    }
    *VAR_2 = FUNC_7((size_t)VAR_5);
    if (*VAR_2==((void*)0)) FUNC_1(34, "%s", FUNC_8(VAR_1));
    { size_t const VAR_6 = FUNC_6(*VAR_2, 1, (size_t)VAR_5, VAR_4);
        if (VAR_6 != VAR_5)
            FUNC_1(35, "Error reading dictionary file %s : %s",
                    VAR_3, FUNC_8(VAR_1));
    }
    FUNC_4(VAR_4);
    return (size_t)VAR_5;
}
