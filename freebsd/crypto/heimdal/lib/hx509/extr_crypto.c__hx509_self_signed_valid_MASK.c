
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct signature_alg {int flags; int name; } ;
typedef int hx509_context ;
struct TYPE_3__ {int algorithm; } ;
typedef TYPE_1__ AlgorithmIdentifier ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct signature_alg* FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int,char*,int ) ;

int
FUNC_3(hx509_context VAR_3,
    const AlgorithmIdentifier *VAR_4)
{
    const struct signature_alg *VAR_5;

    VAR_5 = FUNC_0(&VAR_4->algorithm);
    if (VAR_5 == ((void*)0)) {
 FUNC_1(VAR_3);
 return VAR_1;
    }
    if ((VAR_5->flags & VAR_2) == 0) {
 FUNC_2(VAR_3, 0, VAR_0,
          "Algorithm %s not trusted for self signatures",
          VAR_5->name);
 return VAR_0;
    }
    return 0;
}
