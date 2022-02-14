
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CONF ;


 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int const*,int *,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int ) ;
 int VAR_0 ;
 int VAR_1 ;

int FUNC_5(const CONF *VAR_2)
{
    CONF *VAR_3 = ((void*)0);

    if (VAR_2 == ((void*)0))
        VAR_2 = VAR_3 = FUNC_4(VAR_1);
    if (VAR_2 == ((void*)0))
        return 1;

    if (FUNC_1(VAR_2, ((void*)0), 0) <= 0) {
        FUNC_0(VAR_0, "Error configuring OpenSSL modules\n");
        FUNC_2(VAR_0);
        FUNC_3(VAR_3);
        return 0;
    }
    FUNC_3(VAR_3);
    return 1;
}
