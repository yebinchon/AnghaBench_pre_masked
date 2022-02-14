
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int attributes; } ;
struct TYPE_5__ {TYPE_1__ req_info; } ;
typedef TYPE_2__ X509_REQ ;
typedef int X509_ATTRIBUTE ;


 scalar_t__ FUNC_0 (int *,int *) ;

int FUNC_1(X509_REQ *VAR_0, X509_ATTRIBUTE *VAR_1)
{
    if (FUNC_0(&VAR_0->req_info.attributes, VAR_1))
        return 1;
    return 0;
}
