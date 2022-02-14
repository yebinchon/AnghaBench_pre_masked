
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uid_t ;
struct passwd {int pw_uid; } ;
struct _gss_mechanism_name {TYPE_5__* gmn_mech; int gmn_name; } ;
typedef int pwbuf ;
struct TYPE_6__ {int length; int value; } ;
typedef TYPE_1__ gss_buffer_desc ;
struct TYPE_7__ {int (* gm_get_name_attribute ) (int *,int ,int ,int*,int*,TYPE_1__*,TYPE_1__*,int*) ;} ;
typedef int OM_uint32 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_5__*,int ,int ) ;
 int FUNC_2 (char*) ;
 struct passwd* FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (char*,struct passwd*,char*,int,struct passwd**) ;
 int FUNC_5 (int *,TYPE_1__*) ;
 char* FUNC_6 (int) ;
 int FUNC_7 (char*,int ,int) ;
 int FUNC_8 (int *,int ,int ,int*,int*,TYPE_1__*,TYPE_1__*,int*) ;

__attribute__((used)) static OM_uint32
FUNC_9(OM_uint32 *VAR_5,
                  struct _gss_mechanism_name *VAR_6,
                  uid_t *VAR_7)
{



    OM_uint32 VAR_8 = VAR_4;
    OM_uint32 VAR_9;
    int VAR_10 = -1;

    *VAR_5 = 0;

    if (VAR_6->gmn_mech->gm_get_name_attribute == ((void*)0))
        return VAR_4;

    while (VAR_10 != 0) {
        gss_buffer_desc VAR_11;
        gss_buffer_desc VAR_12;
        int VAR_13 = 0, VAR_14 = 0;




        struct passwd *VAR_15;

        char *VAR_16;

        VAR_8 = VAR_6->gmn_mech->gm_get_name_attribute(VAR_5,
                                                           VAR_6->gmn_name,
                                                           VAR_1,
                                                           &VAR_13,
                                                           &VAR_14,
                                                           &VAR_11,
                                                           &VAR_12,
                                                           &VAR_10);
        if (FUNC_0(VAR_8)) {
            FUNC_1(VAR_6->gmn_mech, VAR_8, *VAR_5);
            break;
        }

        VAR_16 = FUNC_6(VAR_11.length + 1);
        if (VAR_16 == ((void*)0)) {
            VAR_8 = VAR_3;
            *VAR_5 = VAR_0;
            break;
        }

        FUNC_7(VAR_16, VAR_11.value, VAR_11.length);
        VAR_16[VAR_11.length] = '\0';





        VAR_15 = FUNC_3(VAR_16);


        FUNC_2(VAR_16);
        FUNC_5(&VAR_9, &VAR_11);
        FUNC_5(&VAR_9, &VAR_12);

        if (VAR_15 != ((void*)0)) {
            *VAR_7 = VAR_15->pw_uid;
            VAR_8 = VAR_2;
            *VAR_5 = 0;
            break;
        } else
            VAR_8 = VAR_4;
    }

    return VAR_8;

}
