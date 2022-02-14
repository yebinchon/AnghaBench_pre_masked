
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int apr_size_t ;





 char const* FUNC_0 (int) ;
 char* FUNC_1 (char*,int ,char const*) ;

__attribute__((used)) static char *FUNC_2(char* VAR_0, apr_size_t VAR_1, int VAR_2)
{



    const char *VAR_3;

    switch(VAR_2) {
    case 130:
        VAR_3 = "Unknown host";
        break;

    case 128:

    case 129:

        VAR_3 = "No address for host";
        break;





    default:
        VAR_3 = "Unrecognized resolver error";
    }
    return FUNC_1(VAR_0, VAR_1, VAR_3);

}
