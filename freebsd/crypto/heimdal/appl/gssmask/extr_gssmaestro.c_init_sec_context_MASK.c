
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct client {int dummy; } ;
typedef int krb5_data ;
typedef int int32_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct client*,int) ;
 int FUNC_2 (struct client*,int const) ;
 int FUNC_3 (struct client*,char const*) ;
 int FUNC_4 (struct client*,int) ;
 int FUNC_5 (struct client*,int ) ;

__attribute__((used)) static int
FUNC_6(struct client *VAR_1,
   int32_t *VAR_2, int32_t *VAR_3,
   int32_t VAR_4,
   const char *VAR_5,
   const krb5_data *VAR_6, krb5_data *VAR_7)
{
    int32_t VAR_8;
    FUNC_0(VAR_7);
    FUNC_1(VAR_1, VAR_0);
    FUNC_1(VAR_1, *VAR_2);
    FUNC_1(VAR_1, *VAR_3);
    FUNC_1(VAR_1, VAR_4);
    FUNC_3(VAR_1, VAR_5);
    FUNC_2(VAR_1, *VAR_6);
    FUNC_4(VAR_1, *VAR_2);
    FUNC_4(VAR_1, VAR_8);
    FUNC_5(VAR_1, *VAR_7);
    return VAR_8;
}
