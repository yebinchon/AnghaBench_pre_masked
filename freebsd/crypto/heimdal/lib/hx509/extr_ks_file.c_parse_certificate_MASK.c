
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hx509_collector {int dummy; } ;
typedef int hx509_pem_header ;
typedef int hx509_context ;
typedef int hx509_cert ;
typedef int AlgorithmIdentifier ;


 int FUNC_0 (int ,struct hx509_collector*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,void const*,size_t,int *) ;

__attribute__((used)) static int
FUNC_3(hx509_context VAR_0, const char *VAR_1,
    struct hx509_collector *VAR_2,
    const hx509_pem_header *VAR_3,
    const void *VAR_4, size_t VAR_5,
    const AlgorithmIdentifier *VAR_6)
{
    hx509_cert VAR_7;
    int VAR_8;

    VAR_8 = FUNC_2(VAR_0, VAR_4, VAR_5, &VAR_7);
    if (VAR_8)
 return VAR_8;

    VAR_8 = FUNC_0(VAR_0, VAR_2, VAR_7);
    FUNC_1(VAR_7);
    return VAR_8;
}
