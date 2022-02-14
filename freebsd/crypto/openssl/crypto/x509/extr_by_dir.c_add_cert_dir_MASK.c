
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int * dirs; } ;
struct TYPE_8__ {int dir_type; int * hashes; int * dir; } ;
typedef TYPE_1__ BY_DIR_ENTRY ;
typedef TYPE_2__ BY_DIR ;


 int VAR_0 ;
 char const VAR_1 ;
 TYPE_1__* FUNC_0 (int) ;
 int * FUNC_1 (char const*,size_t) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_4 ;
 int * FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,TYPE_1__*) ;
 TYPE_1__* FUNC_7 (int *,int) ;
 int * FUNC_8 (int ) ;
 size_t FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *,char const*,size_t) ;

__attribute__((used)) static int FUNC_11(BY_DIR *VAR_5, const char *VAR_6, int VAR_7)
{
    int VAR_8;
    size_t VAR_9;
    const char *VAR_10, *VAR_11, *VAR_12;

    if (VAR_6 == ((void*)0) || !*VAR_6) {
        FUNC_2(VAR_2, VAR_3);
        return 0;
    }

    VAR_10 = VAR_6;
    VAR_12 = VAR_10;
    do {
        if ((*VAR_12 == VAR_1) || (*VAR_12 == '\0')) {
            BY_DIR_ENTRY *VAR_13;

            VAR_11 = VAR_10;
            VAR_10 = VAR_12 + 1;
            VAR_9 = VAR_12 - VAR_11;
            if (VAR_9 == 0)
                continue;
            for (VAR_8 = 0; VAR_8 < FUNC_5(VAR_5->dirs); VAR_8++) {
                VAR_13 = FUNC_7(VAR_5->dirs, VAR_8);
                if (FUNC_9(VAR_13->dir) == VAR_9 && FUNC_10(VAR_13->dir, VAR_11, VAR_9) == 0)
                    break;
            }
            if (VAR_8 < FUNC_5(VAR_5->dirs))
                continue;
            if (VAR_5->dirs == ((void*)0)) {
                VAR_5->dirs = FUNC_4();
                if (!VAR_5->dirs) {
                    FUNC_2(VAR_2, VAR_0);
                    return 0;
                }
            }
            VAR_13 = FUNC_0(sizeof(*VAR_13));
            if (VAR_13 == ((void*)0)) {
                FUNC_2(VAR_2, VAR_0);
                return 0;
            }
            VAR_13->dir_type = VAR_7;
            VAR_13->hashes = FUNC_8(VAR_4);
            VAR_13->dir = FUNC_1(VAR_11, VAR_9);
            if (VAR_13->dir == ((void*)0) || VAR_13->hashes == ((void*)0)) {
                FUNC_3(VAR_13);
                return 0;
            }
            if (!FUNC_6(VAR_5->dirs, VAR_13)) {
                FUNC_3(VAR_13);
                FUNC_2(VAR_2, VAR_0);
                return 0;
            }
        }
    } while (*VAR_12++ != '\0');
    return 1;
}
