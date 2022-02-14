
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int hx509_context ;
struct TYPE_4__ {int issuer; int subject; } ;
struct TYPE_5__ {int signatureAlgorithm; TYPE_1__ tbsCertificate; } ;
typedef TYPE_2__ Certificate ;


 int FUNC_0 (int *,int *,int*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int ,int,char*) ;

__attribute__((used)) static int
FUNC_3(hx509_context VAR_0,
      const Certificate *VAR_1,
      int *VAR_2)
{
    int VAR_3, VAR_4;
    VAR_3 = FUNC_0(&VAR_1->tbsCertificate.subject,
     &VAR_1->tbsCertificate.issuer, &VAR_4);
    *VAR_2 = (VAR_4 == 0);
    if (VAR_3) {
 FUNC_2(VAR_0, 0, VAR_3,
          "Failed to check if self signed");
    } else
 VAR_3 = FUNC_1(VAR_0, &VAR_1->signatureAlgorithm);

    return VAR_3;
}
