
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int nid; } ;
struct TYPE_5__ {int algorithm_mkey; } ;
typedef TYPE_1__ SSL_CIPHER ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 TYPE_2__* VAR_1 ;

int FUNC_1(const SSL_CIPHER *VAR_2)
{
    int VAR_3 = FUNC_0(VAR_1, VAR_2->algorithm_mkey);

    if (VAR_3 == -1)
        return VAR_0;
    return VAR_1[VAR_3].nid;
}
