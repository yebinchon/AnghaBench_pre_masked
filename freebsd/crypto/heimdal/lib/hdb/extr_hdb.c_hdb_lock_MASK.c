
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int krb5_error_code ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int) ;

krb5_error_code
FUNC_2(int VAR_8, int VAR_9)
{
    int VAR_10, VAR_11 = 0;

    for(VAR_10 = 0; VAR_10 < 3; VAR_10++){
 VAR_11 = FUNC_0(VAR_8, (VAR_9 == VAR_3 ? VAR_6 : VAR_4) | VAR_5);
 if(VAR_11 == 0 || VAR_7 != VAR_0)
     break;
 FUNC_1(1);
    }
    if(VAR_11 == 0)
 return 0;
    if(VAR_7 == VAR_0)
 return VAR_2;
    return VAR_1;
}
