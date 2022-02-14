
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct _hx509_password {int len; char** val; } ;
typedef int key ;
typedef int iv ;
typedef int hx509_lock ;
typedef int hx509_crypto ;
typedef int hx509_context ;
typedef int heim_oid ;
struct TYPE_16__ {int * data; int length; } ;
typedef TYPE_1__ heim_octet_string ;
struct TYPE_17__ {int parameters; int algorithm; } ;
typedef int (* PBE_string2key_func ) (int ,char const*,int ,int *,TYPE_1__*,TYPE_1__*,int const*,int const*) ;
typedef int EVP_MD ;
typedef int EVP_CIPHER ;
typedef TYPE_4__ AlgorithmIdentifier ;


 int VAR_0 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;
 int VAR_1 ;
 int VAR_2 ;
 struct _hx509_password* FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int * FUNC_4 (int *,int const**,int const**,int (*) (int ,char const*,int ,int *,TYPE_1__*,TYPE_1__*,int const*,int const*)) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int *,int ,TYPE_1__*,TYPE_1__*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ,int,char*) ;
 void* FUNC_9 (int ) ;
 int FUNC_10 (TYPE_1__*,int ,int) ;
 int FUNC_11 (int ,char const*,int ,int *,TYPE_1__*,TYPE_1__*,int const*,int const*) ;

int
FUNC_12(hx509_context VAR_3,
     hx509_lock VAR_4,
     const AlgorithmIdentifier *VAR_5,
     const heim_octet_string *VAR_6,
     heim_octet_string *VAR_7)
{
    const struct _hx509_password *VAR_8;
    heim_octet_string VAR_9, VAR_10;
    const heim_oid *VAR_11;
    const EVP_CIPHER *VAR_12;
    const EVP_MD *VAR_13;
    PBE_string2key_func VAR_14;
    int VAR_15 = 0;
    size_t VAR_16;

    FUNC_10(&VAR_9, 0, sizeof(VAR_9));
    FUNC_10(&VAR_10, 0, sizeof(VAR_10));

    FUNC_10(VAR_7, 0, sizeof(*VAR_7));

    VAR_11 = FUNC_4(&VAR_5->algorithm, &VAR_12, &VAR_13, VAR_14);
    if (VAR_11 == ((void*)0)) {
 FUNC_8(VAR_3, 0, VAR_1,
          "String to key algorithm not supported");
 VAR_15 = VAR_1;
 goto out;
    }

    VAR_9.length = FUNC_1(VAR_12);
    VAR_9.data = FUNC_9(VAR_9.length);
    if (VAR_9.data == ((void*)0)) {
 VAR_15 = VAR_0;
 FUNC_5(VAR_3);
 goto out;
    }

    VAR_10.length = FUNC_0(VAR_12);
    VAR_10.data = FUNC_9(VAR_10.length);
    if (VAR_10.data == ((void*)0)) {
 VAR_15 = VAR_0;
 FUNC_5(VAR_3);
 goto out;
    }

    VAR_8 = FUNC_2(VAR_4);

    VAR_15 = VAR_2;
    for (VAR_16 = 0; VAR_16 < VAR_8->len + 1; VAR_16++) {
 hx509_crypto VAR_17;
 const char *VAR_18;

 if (VAR_16 < VAR_8->len)
     VAR_18 = VAR_8->val[VAR_16];
 else if (VAR_16 < VAR_8->len + 1)
     VAR_18 = "";
 else
     VAR_18 = ((void*)0);

 VAR_15 = (*VAR_14)(VAR_3, VAR_18, VAR_5->parameters, &VAR_17,
       &VAR_9, &VAR_10, VAR_11, VAR_13);
 if (VAR_15)
     goto out;

 VAR_15 = FUNC_6(VAR_17,
       VAR_6->data,
       VAR_6->length,
       &VAR_10,
       VAR_7);
 FUNC_7(VAR_17);
 if (VAR_15 == 0)
     goto out;

    }
out:
    if (VAR_9.data)
 FUNC_3(&VAR_9);
    if (VAR_10.data)
 FUNC_3(&VAR_10);
    return VAR_15;
}
