
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int serv ;
typedef int host ;
struct TYPE_7__ {int sin_port; int sin_addr; } ;
struct TYPE_8__ {TYPE_1__ s_in; } ;
typedef TYPE_2__ BIO_ADDR ;


 int FUNC_0 (TYPE_2__ const*) ;
 int FUNC_1 (TYPE_2__ const*) ;
 int FUNC_2 (TYPE_2__ const*) ;
 int VAR_0 ;
 int FUNC_3 (char*,int,char*,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (int,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_7 (char*) ;
 char* FUNC_8 (char*) ;
 int VAR_8 ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int) ;
 int FUNC_11 () ;
 int FUNC_12 (int ,int ,char*,int,char*,int,int) ;
 char* FUNC_13 (int ) ;
 int FUNC_14 (int ) ;

__attribute__((used)) static int FUNC_15(const BIO_ADDR *VAR_9, int VAR_10,
                        char **VAR_11, char **VAR_12)
{
    if (FUNC_4() != 1)
        return 0;

    if (1) {
        if (VAR_11 != ((void*)0))
            *VAR_11 = FUNC_8(FUNC_13(VAR_9->s_in.sin_addr));
        if (VAR_12 != ((void*)0)) {
            char VAR_13[6];
            FUNC_3(VAR_13, sizeof(VAR_13), "%d", FUNC_14(VAR_9->s_in.sin_port));
            *VAR_12 = FUNC_8(VAR_13);
        }
    }

    if ((VAR_11 != ((void*)0) && *VAR_11 == ((void*)0))
            || (VAR_12 != ((void*)0) && *VAR_12 == ((void*)0))) {
        if (VAR_11 != ((void*)0)) {
            FUNC_7(*VAR_11);
            *VAR_11 = ((void*)0);
        }
        if (VAR_12 != ((void*)0)) {
            FUNC_7(*VAR_12);
            *VAR_12 = ((void*)0);
        }
        FUNC_5(VAR_0, VAR_2);
        return 0;
    }

    return 1;
}
