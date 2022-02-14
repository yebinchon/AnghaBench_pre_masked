
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int hx509_private_key ;
typedef int hx509_context ;
struct TYPE_7__ {int length; int data; } ;
typedef TYPE_1__ heim_octet_string ;
struct TYPE_8__ {int length; int data; } ;
typedef TYPE_2__ heim_bit_string ;
typedef int AlgorithmIdentifier ;


 int FUNC_0 (int ,int const,int const*,TYPE_1__ const*,int *,TYPE_1__*) ;

int
FUNC_1(hx509_context VAR_0,
      const hx509_private_key VAR_1,
      const AlgorithmIdentifier *VAR_2,
      const heim_octet_string *VAR_3,
      AlgorithmIdentifier *VAR_4,
      heim_bit_string *VAR_5)
{
    heim_octet_string VAR_6;
    int VAR_7;

    VAR_7 = FUNC_0(VAR_0, VAR_1, VAR_2,
      VAR_3, VAR_4, &VAR_6);
    if (VAR_7)
 return VAR_7;
    VAR_5->data = VAR_6.data;
    VAR_5->length = VAR_6.length * 8;
    return 0;
}
