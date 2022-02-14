
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct servent {int s_port; } ;
typedef int krb5_context ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*,...) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int ,int ,int,char**,int*) ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int *,char*,char*,int *) ;
 int FUNC_5 (int ,int ,char*,int ) ;
 int FUNC_6 (int *) ;
 int VAR_5 ;
 char* VAR_6 ;
 int FUNC_7 (int *) ;
 struct servent* FUNC_8 (char*,char*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*,char**,int) ;
 int FUNC_11 (int,int ,int ) ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static int
FUNC_12(krb5_context *VAR_8, int *VAR_9, char **VAR_10)
{
    int VAR_11 = 0;
    int VAR_12 = 0;
    int VAR_13;

    FUNC_9 (VAR_10[0]);

    VAR_13 = FUNC_6 (VAR_8);
    if (VAR_13)
 FUNC_0(1, "krb5_init_context failed: %d", VAR_13);

    VAR_3 = FUNC_4 (*VAR_8, ((void*)0),
     "libdefaults",
     "forwardable",
     ((void*)0));

    if (FUNC_2 (VAR_2, VAR_5, *VAR_9, VAR_10, &VAR_11))
 FUNC_11(1, VAR_2, VAR_5);

    if(VAR_4)
 FUNC_11 (0, VAR_2, VAR_5);
    if(VAR_7) {
 FUNC_7(((void*)0));
 FUNC_1(0);
    }

    if(VAR_6) {
 struct servent *VAR_14 = FUNC_8(VAR_6, "tcp");
 if(VAR_14)
     VAR_12 = VAR_14->s_port;
 else {
     char *VAR_15;

     VAR_12 = FUNC_10 (VAR_6, &VAR_15, 10);
     if (VAR_12 == 0 && VAR_15 == VAR_6)
  FUNC_0 (1, "Bad port `%s'", VAR_6);
     VAR_12 = FUNC_3(VAR_12);
 }
    }

    if (VAR_12 == 0)
 VAR_12 = FUNC_5 (*VAR_8, VAR_0, "tcp", VAR_1);

    if(*VAR_9 - VAR_11 < 1)
        FUNC_11(1, VAR_2, VAR_5);
    *VAR_9 = VAR_11;

    return VAR_12;
}
