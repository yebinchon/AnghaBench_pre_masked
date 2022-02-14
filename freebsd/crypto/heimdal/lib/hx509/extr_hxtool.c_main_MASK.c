
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ,int,char**,int*) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,scalar_t__) ;
 int VAR_4 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int ,int,char**) ;
 scalar_t__ VAR_5 ;
 int FUNC_9 (int) ;
 scalar_t__ VAR_6 ;
 int FUNC_10 (char*,char*) ;

int
FUNC_11(int VAR_7, char **VAR_8)
{
    int VAR_9, VAR_10 = 0;

    FUNC_7 (VAR_8[0]);

    if(FUNC_2(VAR_0, VAR_4, VAR_7, VAR_8, &VAR_10))
 FUNC_9(1);
    if(VAR_3)
 FUNC_9(0);
    if(VAR_6) {
 FUNC_6(((void*)0));
 FUNC_1(0);
    }
    VAR_8 += VAR_10;
    VAR_7 -= VAR_10;

    if (VAR_7 == 0)
 FUNC_9(1);

    VAR_9 = FUNC_4(&VAR_2);
    if (VAR_9)
 FUNC_0(1, "hx509_context_init failed with %d", VAR_9);

    if (VAR_5)
 FUNC_5(VAR_2, VAR_5);

    VAR_9 = FUNC_8(VAR_1, VAR_7, VAR_8);
    if(VAR_9 == -1)
 FUNC_10 ("unrecognized command: %s", VAR_8[0]);

    FUNC_3(&VAR_2);

    return VAR_9;
}
