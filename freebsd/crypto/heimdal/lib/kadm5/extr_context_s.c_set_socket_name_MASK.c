
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_un {int sun_path; int sun_family; } ;
typedef int krb5_context ;


 int VAR_0 ;
 char* FUNC_0 (int ) ;
 int FUNC_1 (struct sockaddr_un*,int ,int) ;
 int FUNC_2 (int ,char const*,int) ;

__attribute__((used)) static void
FUNC_3(krb5_context VAR_1, struct sockaddr_un *VAR_2)
{
    const char *VAR_3 = FUNC_0(VAR_1);

    FUNC_1(VAR_2, 0, sizeof(*VAR_2));
    VAR_2->sun_family = VAR_0;
    FUNC_2 (VAR_2->sun_path, VAR_3, sizeof(VAR_2->sun_path));

}
