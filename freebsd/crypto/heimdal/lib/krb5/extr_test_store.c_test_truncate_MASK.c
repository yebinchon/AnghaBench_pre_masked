
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_size; } ;
typedef int krb5_storage ;
typedef int krb5_context ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,struct stat*) ;
 int FUNC_1 (int ,int,int ,char*) ;
 int FUNC_2 (int ,int,char*) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,char*) ;

__attribute__((used)) static void
FUNC_5(krb5_context VAR_1, krb5_storage *VAR_2, int VAR_3)
{
    struct stat VAR_4;

    FUNC_4(VAR_2, "hej");
    FUNC_3(VAR_2, 2);

    if (FUNC_0(VAR_3, &VAR_4) != 0)
 FUNC_1(VAR_1, 1, VAR_0, "fstat");
    if (VAR_4.st_size != 2)
 FUNC_2(VAR_1, 1, "length not 2");

    FUNC_3(VAR_2, 1024);

    if (FUNC_0(VAR_3, &VAR_4) != 0)
 FUNC_1(VAR_1, 1, VAR_0, "fstat");
    if (VAR_4.st_size != 1024)
 FUNC_2(VAR_1, 1, "length not 2");
}
