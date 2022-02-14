
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iter_ctx {char const* name; int min_version; int ret; int * n; int * result; void* userctx; int (* func ) (int ,void const*,void*,void*) ;int context; } ;
typedef int krb5_error_code ;
typedef int krb5_context ;
typedef int * heim_string_t ;
typedef int * heim_dict_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_2 () ;
 int FUNC_3 (int *,int ,struct iter_ctx*) ;
 int * FUNC_4 (int ,int *) ;
 int FUNC_5 (int *,int ,struct iter_ctx*) ;
 int FUNC_6 (int *) ;
 void* FUNC_7 (char const*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

krb5_error_code
FUNC_8(krb5_context VAR_5,
     const char *VAR_6,
     const char *VAR_7,
     int VAR_8,
     int VAR_9,
     void *VAR_10,
     krb5_error_code (*VAR_11)(krb5_context, const void *, void *, void *))
{
    heim_string_t VAR_12 = FUNC_7(VAR_6);
    heim_dict_t VAR_13;
    struct iter_ctx VAR_14;

    FUNC_0(&VAR_3);

    VAR_13 = FUNC_4(VAR_2, VAR_12);
    FUNC_6(VAR_12);
    if (VAR_13 == ((void*)0)) {
 FUNC_1(&VAR_3);
 return VAR_0;
    }

    VAR_14.context = VAR_5;
    VAR_14.name = VAR_7;
    VAR_14.n = FUNC_7(VAR_7);
    VAR_14.min_version = VAR_8;
    VAR_14.result = FUNC_2();
    VAR_14.func = VAR_11;
    VAR_14.userctx = VAR_10;

    FUNC_5(VAR_13, VAR_4, &VAR_14);

    FUNC_6(VAR_13);

    FUNC_1(&VAR_3);

    VAR_14.ret = VAR_0;

    FUNC_3(VAR_14.result, VAR_1, &VAR_14);

    FUNC_6(VAR_14.result);
    FUNC_6(VAR_14.n);

    return VAR_14.ret;
}
