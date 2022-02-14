
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ssize_t ;
typedef int krb5_storage ;
typedef int buf ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *,char*,size_t) ;
 scalar_t__ FUNC_2 (int *,char*,size_t) ;

__attribute__((used)) static int
FUNC_3(krb5_storage *VAR_0, krb5_storage *VAR_1, size_t VAR_2)
{
    char VAR_3[1024];

    while (VAR_2) {
 size_t VAR_4 = VAR_2;
 ssize_t VAR_5;

 if (VAR_4 > sizeof(VAR_3))
     VAR_4 = sizeof(VAR_3);

 VAR_5 = FUNC_1(VAR_0, VAR_3, VAR_4);
 FUNC_0((size_t)VAR_5 == VAR_4);

 VAR_5 = FUNC_2(VAR_1, VAR_3, VAR_4);
 FUNC_0((size_t)VAR_5 == VAR_4);

 VAR_2 -= VAR_4;
    }
    return 0;
}
