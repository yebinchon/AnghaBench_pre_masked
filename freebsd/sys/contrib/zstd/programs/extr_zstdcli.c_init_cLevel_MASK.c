
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char*,int ,char const* const) ;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (char const**,unsigned int*) ;

__attribute__((used)) static int FUNC_3(void) {
    const char* const VAR_2 = FUNC_1(VAR_0);
    if (VAR_2) {
        const char *VAR_3 = VAR_2;
        int VAR_4 = 1;
        if (*VAR_3 == '-') {
            VAR_4 = -1;
            VAR_3++;
        } else if (*VAR_3 == '+') {
            VAR_3++;
        }

        if ((*VAR_3>='0') && (*VAR_3<='9')) {
            unsigned VAR_5;
            if (FUNC_2(&VAR_3, &VAR_5)) {
                FUNC_0(2, "Ignore environment variable setting %s=%s: numeric value too large\n", VAR_0, VAR_2);
                return VAR_1;
            } else if (*VAR_3 == 0) {
                return VAR_4 * (int)VAR_5;
            }
        }

        FUNC_0(2, "Ignore environment variable setting %s=%s: not a valid integer value\n", VAR_0, VAR_2);
    }

    return VAR_1;
}
