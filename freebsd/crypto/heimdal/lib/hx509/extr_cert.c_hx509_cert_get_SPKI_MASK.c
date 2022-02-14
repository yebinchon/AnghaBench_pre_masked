
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int hx509_context ;
typedef TYPE_3__* hx509_cert ;
struct TYPE_7__ {TYPE_2__* data; } ;
struct TYPE_5__ {int subjectPublicKeyInfo; } ;
struct TYPE_6__ {TYPE_1__ tbsCertificate; } ;
typedef int SubjectPublicKeyInfo ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int ,int ,int,char*) ;

int
FUNC_2(hx509_context VAR_0, hx509_cert VAR_1, SubjectPublicKeyInfo *VAR_2)
{
    int VAR_3;

    VAR_3 = FUNC_0(&VAR_1->data->tbsCertificate.subjectPublicKeyInfo, VAR_2);
    if (VAR_3)
 FUNC_1(VAR_0, 0, VAR_3, "Failed to copy SPKI");
    return VAR_3;
}
