
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int contexts_t ;
typedef int buffers_t ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int ,int ,int) ;
 scalar_t__ FUNC_3 (int *,char const**,int) ;
 scalar_t__ FUNC_4 (int *,char const*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_7(const char** VAR_1, int VAR_2,
                      const char* VAR_3, int VAR_4)
{
    buffers_t VAR_5;
    contexts_t VAR_6;
    int VAR_7 = 0;

    if (FUNC_3(&VAR_5, VAR_1, VAR_2)) {
        FUNC_1("unable to load files\n");
        return 1;
    }

    if (FUNC_4(&VAR_6, VAR_3)) {
        FUNC_1("unable to load dictionary\n");
        FUNC_5(VAR_5);
        return 2;
    }

    FUNC_1("\r%79s\r", "");
    if (VAR_2 == 1) {
        FUNC_1("using %s : \n", VAR_1[0]);
    } else {
        FUNC_1("using %d Files : \n", VAR_2);
    }

    if (VAR_0) {
        VAR_7 = FUNC_2(VAR_5, VAR_6, VAR_4);
    } else {
        FUNC_0(VAR_5, VAR_6);
    }

    FUNC_5(VAR_5);
    FUNC_6(VAR_6);
    return VAR_7;
}
