
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int hx509_peer_info ;
typedef int hx509_context ;
typedef int hx509_certs ;
typedef int hx509_cert ;
typedef int heim_oid ;
struct TYPE_4__ {scalar_t__ length; int * data; } ;
typedef TYPE_1__ heim_octet_string ;
typedef int AlgorithmIdentifier ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*,int ,int *,int *) ;
 int FUNC_3 (int ,int,int const*,void const*,size_t,int const*,int ,int ,int ,int ,TYPE_1__*) ;

int
FUNC_4(hx509_context VAR_0,
     int VAR_1,
     const heim_oid *VAR_2,
     const void *VAR_3, size_t VAR_4,
     const AlgorithmIdentifier *VAR_5,
     hx509_cert VAR_6,
     hx509_peer_info VAR_7,
     hx509_certs VAR_8,
     hx509_certs VAR_9,
     heim_octet_string *VAR_10)
{
    hx509_certs VAR_11;
    int VAR_12 = 0;

    VAR_10->data = ((void*)0);
    VAR_10->length = 0;

    VAR_12 = FUNC_2(VAR_0, "MEMORY:certs", 0, ((void*)0), &VAR_11);
    if (VAR_12)
 return VAR_12;
    VAR_12 = FUNC_0(VAR_0, VAR_11, VAR_6);
    if (VAR_12)
 goto out;

    VAR_12 = FUNC_3(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4,
      VAR_5, VAR_11, VAR_7, VAR_8, VAR_9,
      VAR_10);

 out:
    FUNC_1(&VAR_11);
    return VAR_12;
}
