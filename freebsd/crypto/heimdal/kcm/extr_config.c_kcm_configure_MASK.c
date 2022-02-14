
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ krb5_error_code ;


 int VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 () ;
 int * VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ,int,char**,int*) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_3 () ;
 int * FUNC_4 (char*) ;
 int FUNC_5 (int ,int *,int ,char*,char*,int *) ;
 char* FUNC_6 (int ,int *,char*,char*,int *) ;
 int FUNC_7 (int ,int,scalar_t__,char*) ;
 int FUNC_8 (char**) ;
 scalar_t__ FUNC_9 (int *,char***) ;
 scalar_t__ FUNC_10 (int ,char**) ;
 int VAR_7 ;
 char const* VAR_8 ;
 int VAR_9 ;
 int FUNC_11 (char const*,int *) ;
 int FUNC_12 (int *) ;
 int * VAR_10 ;
 int FUNC_13 (int) ;
 scalar_t__ VAR_11 ;
 int FUNC_14 (char*,char*) ;

void
FUNC_15(int VAR_12, char **VAR_13)
{
    krb5_error_code VAR_14;
    int VAR_15 = 0;
    const char *VAR_16;

    while(FUNC_2(VAR_2, VAR_9, VAR_12, VAR_13, &VAR_15))
 FUNC_14("error at argument `%s'", VAR_13[VAR_15]);

    if(VAR_5)
 FUNC_13 (0);

    if (VAR_11) {
 FUNC_12(((void*)0));
 FUNC_1(0);
    }

    VAR_12 -= VAR_15;
    VAR_13 += VAR_15;

    if (VAR_12 != 0)
 FUNC_13(1);

    {
 char **VAR_17;

 if(VAR_3 == ((void*)0))
     VAR_3 = VAR_1;

 VAR_14 = FUNC_9(VAR_3, &VAR_17);
 if (VAR_14)
     FUNC_7(VAR_6, 1, VAR_14, "getting configuration files");

 VAR_14 = FUNC_10(VAR_6, VAR_17);
 FUNC_8(VAR_17);
 if(VAR_14)
     FUNC_7(VAR_6, 1, VAR_14, "reading configuration files");
    }

    if(VAR_8)
 VAR_7 = FUNC_11(VAR_8, ((void*)0));

    if(VAR_7 == 0){
 VAR_16 = FUNC_6 (VAR_6,
        ((void*)0),
        "kcm",
        "max-request",
        ((void*)0));
 if(VAR_16)
     VAR_7 = FUNC_11(VAR_16, ((void*)0));
    }

    if (VAR_10 == ((void*)0)) {
 VAR_10 = FUNC_4("principal");
    }

    if (VAR_10 != ((void*)0)) {
 VAR_14 = FUNC_0();
 if (VAR_14)
     FUNC_7(VAR_6, 1, VAR_14, "initializing system ccache");
    }
    FUNC_3();
    if(VAR_7 == 0)
 VAR_7 = 64 * 1024;
}
