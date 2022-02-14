
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ssize_t ;
typedef scalar_t__ off_t ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int,int ,int ) ;
 int FUNC_3 (char*,int ,int) ;
 int FUNC_4 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_5 (int,char*,int ) ;

__attribute__((used)) static int
FUNC_6 (int VAR_3)
{
    off_t VAR_4;
    char VAR_5[128];

    VAR_4 = FUNC_2(VAR_3, 0, VAR_0);
    if (VAR_4 < 0)
        return VAR_2;
    if (FUNC_2(VAR_3, 0, VAR_1) < 0)
        return VAR_2;
    FUNC_3(VAR_5, 0, sizeof(VAR_5));
    while(VAR_4 > 0) {
        ssize_t VAR_6 = FUNC_5(VAR_3, VAR_5, FUNC_4((off_t)sizeof(VAR_5), VAR_4));

 if (VAR_6 < 0)
     return VAR_2;
 VAR_4 -= VAR_6;
    }



    FUNC_1 (VAR_3);

    return 0;
}
