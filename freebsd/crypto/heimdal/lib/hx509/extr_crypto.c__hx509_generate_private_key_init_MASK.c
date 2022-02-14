
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hx509_generate_private_context {int const* key_oid; } ;
typedef int hx509_context ;
typedef int heim_oid ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct hx509_generate_private_context* FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (int const*,int ) ;
 int FUNC_2 (int ,int ,int,char*) ;

int
FUNC_3(hx509_context VAR_3,
     const heim_oid *VAR_4,
     struct hx509_generate_private_context **VAR_5)
{
    *VAR_5 = ((void*)0);

    if (FUNC_1(VAR_4, VAR_0) != 0) {
 FUNC_2(VAR_3, 0, VAR_1,
          "private key not an RSA key");
 return VAR_1;
    }

    *VAR_5 = FUNC_0(1, sizeof(**VAR_5));
    if (*VAR_5 == ((void*)0)) {
 FUNC_2(VAR_3, 0, VAR_2, "out of memory");
 return VAR_2;
    }
    (*VAR_5)->key_oid = VAR_4;

    return 0;
}
