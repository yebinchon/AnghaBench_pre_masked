
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*,int,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int
FUNC_3(int VAR_3)
{
    u_int8_t VAR_4;

    FUNC_2(VAR_3 | VAR_1 | VAR_2);
    FUNC_2(VAR_3 | VAR_1);
    FUNC_1(VAR_4);
    FUNC_2(VAR_3 | VAR_1 | VAR_2);

    FUNC_0(3, "0x%02x -> %s", VAR_4, (VAR_3 == VAR_0) ? "cmd " : "data");
    return(VAR_4);
}
