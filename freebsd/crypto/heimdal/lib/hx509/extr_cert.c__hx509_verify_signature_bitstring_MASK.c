
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int hx509_context ;
typedef int hx509_cert ;
struct TYPE_7__ {int length; int data; } ;
typedef TYPE_1__ heim_octet_string ;
struct TYPE_8__ {int length; int data; } ;
typedef TYPE_2__ heim_bit_string ;
typedef int AlgorithmIdentifier ;


 int VAR_0 ;
 int FUNC_0 (int ,int const,int const*,TYPE_1__ const*,TYPE_1__*) ;
 int FUNC_1 (int ,int ,int,char*) ;

int
FUNC_2(hx509_context VAR_1,
      const hx509_cert VAR_2,
      const AlgorithmIdentifier *VAR_3,
      const heim_octet_string *VAR_4,
      const heim_bit_string *VAR_5)
{
    heim_octet_string VAR_6;

    if (VAR_5->length & 7) {
 FUNC_1(VAR_1, 0, VAR_0,
          "signature not multiple of 8 bits");
 return VAR_0;
    }

    VAR_6.data = VAR_5->data;
    VAR_6.length = VAR_5->length / 8;

    return FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, &VAR_6);
}
