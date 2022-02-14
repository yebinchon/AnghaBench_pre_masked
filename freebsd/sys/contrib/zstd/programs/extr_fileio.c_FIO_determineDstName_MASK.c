
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char*,char const*,int ) ;
 int FUNC_1 (int,char*,int ) ;
 char* FUNC_2 (char const*,char const*,int ) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (size_t) ;
 int FUNC_6 (char*,char const*,size_t) ;
 int FUNC_7 (char const*,char const* const) ;
 int FUNC_8 (char*,char const*) ;
 int FUNC_9 (int ) ;
 size_t FUNC_10 (char const*) ;
 char* FUNC_11 (char const*,char) ;
 char** VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static const char*
FUNC_12(const char* VAR_3, const char* VAR_4)
{
    static size_t VAR_5 = 0;
    static char* VAR_6 = ((void*)0);
    size_t VAR_7;
    char* VAR_8 = ((void*)0);
    const char* VAR_9 = "";
    size_t VAR_10 = 0;

    size_t VAR_11 = FUNC_10(VAR_3);

    size_t VAR_12;
    const char* const VAR_13 = FUNC_11(VAR_3, '.');
    if (VAR_13 == ((void*)0)) {
        FUNC_0(1,
            "zstd: %s: unknown suffix (%s expected). "
            "Can't derive the output file name. "
            "Specify it with -o dstFileName. Ignoring.\n",
            VAR_3, VAR_2);
        return ((void*)0);
    }
    VAR_12 = FUNC_10(VAR_13);

    {
        const char** VAR_14;
        for (VAR_14 = VAR_1; *VAR_14 != ((void*)0); VAR_14++) {
            if (!FUNC_7(*VAR_14, VAR_13)) {
                break;
            }
        }


        if (VAR_11 <= VAR_12 || *VAR_14 == ((void*)0)) {
            FUNC_0(1,
                "zstd: %s: unknown suffix (%s expected). "
                "Can't derive the output file name. "
                "Specify it with -o dstFileName. Ignoring.\n",
                VAR_3, VAR_2);
            return ((void*)0);
        }

        if ((*VAR_14)[1] == 't') {
            VAR_9 = ".tar";
            VAR_10 = FUNC_10(VAR_9);
        }
    }

    if (VAR_4) {
        VAR_8 = FUNC_2(VAR_3, VAR_4, 0);
        VAR_11 = FUNC_10(VAR_8);
        FUNC_3(VAR_8 != ((void*)0));
    }

    if (VAR_5+VAR_12 <= VAR_11+1+VAR_10) {

        FUNC_4(VAR_6);
        VAR_5 = VAR_11 + 20;
        VAR_6 = (char*)FUNC_5(VAR_5);
        if (VAR_6==((void*)0))
            FUNC_1(74, "%s : not enough memory for dstFileName",
                      FUNC_9(VAR_0));
    }


    FUNC_3(VAR_6 != ((void*)0));
    VAR_7 = VAR_11 - VAR_12;
    if (VAR_8) {
        FUNC_6(VAR_6, VAR_8, VAR_7);
        FUNC_4(VAR_8);
    } else {
        FUNC_6(VAR_6, VAR_3, VAR_7);
    }



    FUNC_8(VAR_6 + VAR_7, VAR_9);
    return VAR_6;


}
