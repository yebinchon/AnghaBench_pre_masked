
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {size_t len; int * val; } ;
struct TYPE_7__ {TYPE_1__ rdnSequence; } ;
struct TYPE_8__ {scalar_t__ element; TYPE_2__ u; } ;
typedef TYPE_3__ Name ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int *) ;

__attribute__((used)) static int
FUNC_1(const Name *VAR_2, const Name *VAR_3)
{
    size_t VAR_4;
    int VAR_5;

    if (VAR_2->element != VAR_1
 || VAR_3->element != VAR_1)
 return 0;
    if (VAR_2->u.rdnSequence.len > VAR_3->u.rdnSequence.len)
 return VAR_0;
    for (VAR_4 = 0; VAR_4 < VAR_2->u.rdnSequence.len; VAR_4++) {
 VAR_5 = FUNC_0(&VAR_2->u.rdnSequence.val[VAR_4], &VAR_3->u.rdnSequence.val[VAR_4]);
 if (VAR_5)
     return VAR_5;
    }
    return 0;
}
