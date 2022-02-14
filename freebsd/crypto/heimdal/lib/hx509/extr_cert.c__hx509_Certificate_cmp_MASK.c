
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int _save; } ;
struct TYPE_6__ {TYPE_1__ tbsCertificate; int signatureAlgorithm; int signatureValue; } ;
typedef TYPE_2__ Certificate ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;

int
FUNC_3(const Certificate *VAR_0, const Certificate *VAR_1)
{
    int VAR_2;
    VAR_2 = FUNC_1(&VAR_0->signatureValue, &VAR_1->signatureValue);
    if (VAR_2)
 return VAR_2;
    VAR_2 = FUNC_0(&VAR_0->signatureAlgorithm,
       &VAR_1->signatureAlgorithm);
    if (VAR_2)
 return VAR_2;
    VAR_2 = FUNC_2(&VAR_0->tbsCertificate._save,
         &VAR_1->tbsCertificate._save);
    return VAR_2;
}
