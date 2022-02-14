
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mode_t ;
typedef int apr_filetype_e ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;





 int VAR_8 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static apr_filetype_e FUNC_2(mode_t VAR_9)
{
    apr_filetype_e VAR_10;

    switch (VAR_9 & VAR_8) {
    case 129:
        VAR_10 = VAR_5; break;
    case 132:
        VAR_10 = VAR_2; break;
    case 130:
        VAR_10 = VAR_3; break;
    case 133:
        VAR_10 = VAR_1; break;
    case 134:
        VAR_10 = VAR_0; break;

    case 131:
        VAR_10 = VAR_4; break;


    case 128:
        VAR_10 = VAR_6; break;


    default:
        VAR_10 = VAR_7;
    }
    return VAR_10;
}
