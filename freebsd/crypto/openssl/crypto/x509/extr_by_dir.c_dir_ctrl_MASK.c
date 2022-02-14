
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ method_data; } ;
typedef TYPE_1__ X509_LOOKUP ;
typedef int BY_DIR ;


 long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;
 char const* FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,char const*,int) ;
 char* FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(X509_LOOKUP *VAR_4, int VAR_5, const char *VAR_6, long VAR_7,
                    char **VAR_8)
{
    int VAR_9 = 0;
    BY_DIR *VAR_10 = (BY_DIR *)VAR_4->method_data;

    switch (VAR_5) {
    case 128:
        if (VAR_7 == VAR_0) {
            const char *VAR_11 = FUNC_4(FUNC_1());

            if (VAR_11)
                VAR_9 = FUNC_3(VAR_10, VAR_11, VAR_1);
            else
                VAR_9 = FUNC_3(VAR_10, FUNC_0(),
                                   VAR_1);
            if (!VAR_9) {
                FUNC_2(VAR_2, VAR_3);
            }
        } else
            VAR_9 = FUNC_3(VAR_10, VAR_6, (int)VAR_7);
        break;
    }
    return VAR_9;
}
