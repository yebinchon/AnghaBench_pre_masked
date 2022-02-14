
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {unsigned long inh_flags; } ;
typedef TYPE_1__ X509_VERIFY_PARAM ;


 int FUNC_0 (TYPE_1__*,TYPE_1__ const*) ;
 unsigned long VAR_0 ;

int FUNC_1(X509_VERIFY_PARAM *VAR_1,
                           const X509_VERIFY_PARAM *VAR_2)
{
    unsigned long VAR_3 = VAR_1->inh_flags;
    int VAR_4;
    VAR_1->inh_flags |= VAR_0;
    VAR_4 = FUNC_0(VAR_1, VAR_2);
    VAR_1->inh_flags = VAR_3;
    return VAR_4;
}
