
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int conv_form; int pub_key; int group; } ;
typedef TYPE_1__ EC_KEY ;


 int VAR_0 ;
 size_t FUNC_0 (int ,int ,int ,unsigned char*,size_t,int *) ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (unsigned char*) ;
 unsigned char* FUNC_3 (size_t) ;

int FUNC_4(const EC_KEY *VAR_4, unsigned char **VAR_5)
{
    size_t VAR_6 = 0;
    int VAR_7 = 0;

    if (VAR_4 == ((void*)0)) {
        FUNC_1(VAR_0, VAR_3);
        return 0;
    }

    VAR_6 = FUNC_0(VAR_4->group, VAR_4->pub_key,
                                 VAR_4->conv_form, ((void*)0), 0, ((void*)0));

    if (VAR_5 == ((void*)0) || VAR_6 == 0)

        return VAR_6;

    if (*VAR_5 == ((void*)0)) {
        if ((*VAR_5 = FUNC_3(VAR_6)) == ((void*)0)) {
            FUNC_1(VAR_0, VAR_2);
            return 0;
        }
        VAR_7 = 1;
    }
    if (!FUNC_0(VAR_4->group, VAR_4->pub_key, VAR_4->conv_form,
                            *VAR_5, VAR_6, ((void*)0))) {
        FUNC_1(VAR_0, VAR_1);
        if (VAR_7) {
            FUNC_2(*VAR_5);
            *VAR_5 = ((void*)0);
        }
        return 0;
    }
    if (!VAR_7)
        *VAR_5 += VAR_6;
    return VAR_6;
}
