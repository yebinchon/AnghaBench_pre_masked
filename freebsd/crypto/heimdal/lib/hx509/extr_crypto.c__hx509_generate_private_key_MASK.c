
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hx509_private_key_ops {int (* generate_private_key ) (int ,struct hx509_generate_private_context*,int *) ;} ;
struct hx509_generate_private_context {int key_oid; } ;
typedef int * hx509_private_key ;
typedef int hx509_context ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct hx509_private_key_ops* FUNC_1 (int ) ;
 int FUNC_2 (int **) ;
 int FUNC_3 (int **,struct hx509_private_key_ops*,int *) ;
 int FUNC_4 (int ,int ,int,char*) ;
 int FUNC_5 (int ,struct hx509_generate_private_context*,int *) ;

int
FUNC_6(hx509_context VAR_1,
       struct hx509_generate_private_context *VAR_2,
       hx509_private_key *VAR_3)
{
    struct hx509_private_key_ops *VAR_4;
    int VAR_5;

    *VAR_3 = ((void*)0);

    VAR_4 = FUNC_1(VAR_2->key_oid);
    if (VAR_4 == ((void*)0)) {
 FUNC_0(VAR_1);
 return VAR_0;
    }

    VAR_5 = FUNC_3(VAR_3, VAR_4, ((void*)0));
    if (VAR_5) {
 FUNC_4(VAR_1, 0, VAR_5, "out of memory");
 return VAR_5;
    }

    VAR_5 = (*VAR_4->generate_private_key)(VAR_1, VAR_2, *VAR_3);
    if (VAR_5)
 FUNC_2(VAR_3);

    return VAR_5;
}
