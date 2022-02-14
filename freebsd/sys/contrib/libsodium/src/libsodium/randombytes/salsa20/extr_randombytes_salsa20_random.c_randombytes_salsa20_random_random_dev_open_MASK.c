
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (int,int ,...) ;
 scalar_t__ FUNC_4 (int,struct stat*) ;
 int FUNC_5 (char const*,int ) ;
 scalar_t__ FUNC_6 () ;

__attribute__((used)) static int
FUNC_7(void)
{

    struct stat VAR_7;
    static const char *VAR_8[] = {

        "/dev/urandom",

        "/dev/random", ((void*)0)
    };
    const char **VAR_9 = VAR_8;
    int VAR_10;


    if (FUNC_6() != 0) {
        return -1;
    }

    do {
        VAR_10 = FUNC_5(*VAR_9, VAR_5);
        if (VAR_10 != -1) {
            if (FUNC_4(VAR_10, &VAR_7) == 0 && (FUNC_1(VAR_7.st_mode) || FUNC_0(VAR_7.st_mode))) {



                return VAR_10;
            }
            (void) FUNC_2(VAR_10);
        } else if (VAR_6 == VAR_0) {
            continue;
        }
        VAR_9++;
    } while (*VAR_9 != ((void*)0));

    VAR_6 = VAR_1;
    return -1;

}
