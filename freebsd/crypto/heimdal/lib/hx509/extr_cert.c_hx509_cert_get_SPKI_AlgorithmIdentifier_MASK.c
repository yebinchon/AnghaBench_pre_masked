
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int hx509_context ;
typedef TYPE_4__* hx509_cert ;
struct TYPE_9__ {TYPE_3__* data; } ;
struct TYPE_6__ {int algorithm; } ;
struct TYPE_7__ {TYPE_1__ subjectPublicKeyInfo; } ;
struct TYPE_8__ {TYPE_2__ tbsCertificate; } ;
typedef int AlgorithmIdentifier ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int ,int ,int,char*) ;

int
FUNC_2(hx509_context VAR_0,
     hx509_cert VAR_1,
     AlgorithmIdentifier *VAR_2)
{
    int VAR_3;

    VAR_3 = FUNC_0(&VAR_1->data->tbsCertificate.subjectPublicKeyInfo.algorithm, VAR_2);
    if (VAR_3)
 FUNC_1(VAR_0, 0, VAR_3,
          "Failed to copy SPKI AlgorithmIdentifier");
    return VAR_3;
}
