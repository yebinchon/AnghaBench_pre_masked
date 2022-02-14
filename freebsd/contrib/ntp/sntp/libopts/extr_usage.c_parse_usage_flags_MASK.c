
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t fnm_len; int fnm_name; } ;
typedef TYPE_1__ ao_flag_names_t ;


 int VAR_0 ;
 int FUNC_0 (char const) ;

 char* FUNC_1 (char const*) ;
 char* FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char const*,int ,int) ;

__attribute__((used)) static unsigned int
FUNC_4(ao_flag_names_t const * VAR_1, char const * VAR_2)
{
    unsigned int VAR_3 = 0;




    if (VAR_2 == ((void*)0)) {
        VAR_2 = FUNC_2("AUTOOPTS_USAGE");
        if (VAR_2 == ((void*)0))
            return 0;
    }

    VAR_2 = FUNC_1(VAR_2);
    if (*VAR_2 == 128)
        return 0;





    for (;;) {
        int VAR_4 = 0;

        for (;;) {
            if (FUNC_3(VAR_2, VAR_1[VAR_4].fnm_name, (int)VAR_1[VAR_4].fnm_len) == 0)
                break;
            if (++VAR_4 >= VAR_0)
                return 0;
        }





        if (! FUNC_0(VAR_2[VAR_1[VAR_4].fnm_len]))
            return 0;

        VAR_3 |= 1U << VAR_4;
        VAR_2 = FUNC_1(VAR_2 + VAR_1[VAR_4].fnm_len);

        switch (*VAR_2) {
        case 128:
            return VAR_3;

        case ',':
            VAR_2 = FUNC_1(VAR_2 + 1);


        default:
            continue;
        }
    }
}
