
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ parameters; int algorithm; } ;
typedef TYPE_1__ AlgorithmIdentifier ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;

int
FUNC_2(const AlgorithmIdentifier *VAR_0,
          const AlgorithmIdentifier *VAR_1)
{
    int VAR_2;
    VAR_2 = FUNC_0(&VAR_0->algorithm, &VAR_1->algorithm);
    if (VAR_2)
 return VAR_2;
    if (VAR_0->parameters) {
 if (VAR_1->parameters)
     return FUNC_1(VAR_0->parameters,
    VAR_1->parameters);
 else
     return 1;
    } else {
 if (VAR_1->parameters)
     return -1;
 else
     return 0;
    }
}
