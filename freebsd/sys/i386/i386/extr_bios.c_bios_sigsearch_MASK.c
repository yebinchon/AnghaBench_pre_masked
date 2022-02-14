
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int32_t ;
typedef char u_char ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 (char*,char*,int) ;

u_int32_t
FUNC_3(u_int32_t VAR_2, u_char *VAR_3, int VAR_4, int VAR_5, int VAR_6)
{
    u_char *VAR_7, *VAR_8;


    if ((VAR_2 >= VAR_1) && (VAR_2 <= (VAR_1 + VAR_0))) {
 VAR_7 = (char *)FUNC_0(VAR_2);
    } else if (VAR_2 == 0) {
 VAR_7 = (char *)FUNC_0(VAR_1);
    } else {
 return 0;
    }


    VAR_8 = (u_char *)FUNC_0(VAR_1 + VAR_0);


    while ((VAR_7 + VAR_6 + VAR_4) < VAR_8) {


 if (!FUNC_2(VAR_7 + VAR_6, VAR_3, VAR_4)) {

     return((u_int32_t)FUNC_1(VAR_7));
 }
 VAR_7 += VAR_5;
    }
    return(0);
}
