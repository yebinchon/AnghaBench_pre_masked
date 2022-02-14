
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct hx509_private_key_ops {int (* import ) (int ,TYPE_1__ const*,void const*,size_t,int ,int *) ;} ;
typedef int * hx509_private_key ;
typedef int hx509_key_format_t ;
typedef int hx509_context ;
struct TYPE_4__ {int algorithm; } ;
typedef TYPE_1__ AlgorithmIdentifier ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct hx509_private_key_ops* FUNC_1 (int *) ;
 int FUNC_2 (int **) ;
 int FUNC_3 (int **,struct hx509_private_key_ops*,int *) ;
 int FUNC_4 (int ,int ,int,char*) ;
 int FUNC_5 (int ,TYPE_1__ const*,void const*,size_t,int ,int *) ;

int
FUNC_6(hx509_context VAR_1,
    const AlgorithmIdentifier *VAR_2,
    const void *VAR_3,
    size_t VAR_4,
    hx509_key_format_t VAR_5,
    hx509_private_key *VAR_6)
{
    struct hx509_private_key_ops *VAR_7;
    int VAR_8;

    *VAR_6 = ((void*)0);

    VAR_7 = FUNC_1(&VAR_2->algorithm);
    if (VAR_7 == ((void*)0)) {
 FUNC_0(VAR_1);
 return VAR_0;
    }

    VAR_8 = FUNC_3(VAR_6, VAR_7, ((void*)0));
    if (VAR_8) {
 FUNC_4(VAR_1, 0, VAR_8, "out of memory");
 return VAR_8;
    }

    VAR_8 = (*VAR_7->import)(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, *VAR_6);
    if (VAR_8)
 FUNC_2(VAR_6);

    return VAR_8;
}
