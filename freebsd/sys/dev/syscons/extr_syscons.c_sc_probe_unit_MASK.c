
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (int,int,int ) ;
 int FUNC_2 (int,int,int ) ;
 int FUNC_3 (int ) ;

int
FUNC_4(int VAR_5, int VAR_6)
{
    if (!FUNC_3(VAR_3))
        return VAR_0;
    if (!FUNC_2(VAR_5, VAR_6, VAR_1)) {
 if (VAR_4)
     FUNC_0("%s%d: no video adapter found.\n", VAR_2, VAR_5);
 return VAR_0;
    }


    FUNC_1(VAR_5, VAR_6, VAR_1);

    return 0;
}
