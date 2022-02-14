
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {scalar_t__ st_dev; scalar_t__ st_ino; scalar_t__ st_nlink; } ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_context ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int,int,char const*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int,struct stat*) ;
 int FUNC_4 (char const*,struct stat*) ;
 int FUNC_5 (char const*,int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 scalar_t__ FUNC_8 (char const*) ;

krb5_error_code
FUNC_9(krb5_context VAR_5, const char *VAR_6)
{
    int VAR_7;
    struct stat VAR_8, VAR_9;
    int VAR_10;

    VAR_10 = FUNC_4 (VAR_6, &VAR_8);
    if (VAR_10 < 0)
 return VAR_4;

    VAR_7 = FUNC_5(VAR_6, VAR_3 | VAR_2);
    if(VAR_7 < 0) {
 if(VAR_4 == VAR_0)
     return 0;
 else
     return VAR_4;
    }
    FUNC_6(VAR_7);
    VAR_10 = FUNC_0(VAR_5, VAR_7, 1, VAR_6);
    if (VAR_10) {
 FUNC_2(VAR_7);
 return VAR_10;
    }
    if (FUNC_8(VAR_6) < 0) {
 FUNC_1(VAR_5, VAR_7);
        FUNC_2 (VAR_7);
        return VAR_4;
    }
    VAR_10 = FUNC_3 (VAR_7, &VAR_9);
    if (VAR_10 < 0) {
 FUNC_1(VAR_5, VAR_7);
 FUNC_2 (VAR_7);
 return VAR_4;
    }



    if (VAR_8 != VAR_9 || VAR_8 != VAR_9) {
 FUNC_1(VAR_5, VAR_7);
 FUNC_2 (VAR_7);
 return VAR_1;
    }



    if (VAR_9 != 0) {
 FUNC_1(VAR_5, VAR_7);
        FUNC_2 (VAR_7);
        return 0;
    }

    VAR_10 = FUNC_7 (VAR_7);
    if (VAR_10) {
 FUNC_1(VAR_5, VAR_7);
 FUNC_2(VAR_7);
 return VAR_10;
    }
    VAR_10 = FUNC_1(VAR_5, VAR_7);
    FUNC_2 (VAR_7);
    return VAR_10;
}
