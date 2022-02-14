
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {int sin_len; TYPE_1__ sin_addr; int sin_port; int sin_family; } ;
typedef struct sockaddr sockaddr ;
typedef int s ;
typedef int krb5_error_code ;
typedef enum locate_service_type { ____Placeholder_locate_service_type } locate_service_type ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct sockaddr_in*,int ,int) ;
 scalar_t__ FUNC_3 (char const*,char*) ;
 int FUNC_4 (void*,int,struct sockaddr*) ;

__attribute__((used)) static krb5_error_code
FUNC_5(void *VAR_1,
        enum locate_service_type VAR_2,
        const char *VAR_3,
        int VAR_4,
        int VAR_5,
        int (*VAR_6)(void *,int,struct sockaddr *),
        void *VAR_7)
{
    struct sockaddr_in VAR_8;

    FUNC_2(&VAR_8, 0, sizeof(VAR_8));




    VAR_8.sin_family = VAR_0;
    VAR_8.sin_port = FUNC_1(88);
    VAR_8.sin_addr.s_addr = FUNC_0(0x7f000002);

    if (FUNC_3(VAR_3, "NOTHERE.H5L.SE") == 0)
 (*VAR_6)(VAR_7, VAR_5, (struct sockaddr *)&VAR_8);

    return 0;
}
