
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int nlevel; TYPE_2__* levels; } ;
typedef TYPE_1__ X509_POLICY_TREE ;
struct TYPE_12__ {int flags; int cert; } ;
typedef TYPE_2__ X509_POLICY_LEVEL ;
typedef int X509_POLICY_CACHE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,int const*,TYPE_1__*) ;
 int FUNC_2 (TYPE_2__*,int const*) ;
 int FUNC_3 (char*,TYPE_1__*,TYPE_2__*) ;
 int FUNC_4 (TYPE_1__*,TYPE_2__*) ;

__attribute__((used)) static int FUNC_5(X509_POLICY_TREE *VAR_3)
{
    int VAR_4, VAR_5;
    X509_POLICY_LEVEL *VAR_6 = VAR_3->levels + 1;
    const X509_POLICY_CACHE *VAR_7;

    for (VAR_5 = 1; VAR_5 < VAR_3->nlevel; VAR_5++, VAR_6++) {
        VAR_7 = FUNC_0(VAR_6->cert);
        if (!FUNC_2(VAR_6, VAR_7))
            return VAR_0;

        if (!(VAR_6->flags & VAR_2)
            && !FUNC_1(VAR_6, VAR_7, VAR_3))
            return VAR_0;



        VAR_4 = FUNC_4(VAR_3, VAR_6);
        if (VAR_4 != VAR_1)
            return VAR_4;
    }
    return VAR_1;
}
