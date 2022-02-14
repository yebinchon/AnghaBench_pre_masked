
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* digestedData; } ;
struct TYPE_7__ {TYPE_1__ d; } ;
struct TYPE_6__ {int digestAlgorithm; } ;
typedef TYPE_2__ CMS_DigestedData ;
typedef TYPE_3__ CMS_ContentInfo ;
typedef int BIO ;


 int * FUNC_0 (int ) ;

BIO *FUNC_1(CMS_ContentInfo *VAR_0)
{
    CMS_DigestedData *VAR_1;
    VAR_1 = VAR_0->d.digestedData;
    return FUNC_0(VAR_1->digestAlgorithm);
}
